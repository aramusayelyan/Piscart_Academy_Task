#include<stdio.h>
#include <fcntl.h>
#include<unistd.h>
#define SIZE 5
#define DEF_MODE S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH
int main(){
	char buf[SIZE];
	int fd = open("input.txt",O_RDONLY);
	if(fd < 0){
		perror("open");
	}
	int fd1 = open("past.txt", O_CREAT | O_EXCL | O_WRONLY, DEF_MODE);
	if(fd1 < 0){
		perror("Open");
	}
	read(fd,buf,SIZE);
	write(fd1,buf,SIZE);
close(fd);
close(fd1);
//	fsync(fd1);
}
