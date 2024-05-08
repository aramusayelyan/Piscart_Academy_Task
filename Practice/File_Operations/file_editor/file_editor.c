#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#define SIZE 40
int main(){
	char buf[SIZE] = {0};
	int fd = open("input.txt", O_RDONLY);
int fd1 = open("input.txt", O_WRONLY | O_RDONLY);
	read(fd,buf,SIZE);
	printf("%s \n",buf);
	printf("Write new_text: ");
	gets(buf);
	int size = write(fd1,buf,SIZE);
    	buf[size] = '\0';
        read(fd1,buf,SIZE);
	puts(buf);
	close(fd);
}
