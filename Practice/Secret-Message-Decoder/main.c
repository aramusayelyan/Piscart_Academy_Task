#include<stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define SIZE 4096

char decode(char word){
	if((word >= 'a' && word <= 'z') || (word >= 'A' && word <= 'Z')){
		if(word <= 'C' && (word >= 'A')){
			word = 'Z' -(2- (word - 'A'));
		}else if(word <= 'c' && (word >= 'a')){
			word = 'z' -(2 - (word - 'a'));
		}else{
			word -= 3;	
		}
	}
	return word;
}
int main(){

	int fd_source = open("input.txt",O_RDONLY);
	int fd_new = open("output.txt", O_WRONLY);
	char buf[SIZE];

	int size = read(fd_source,buf,SIZE);

//	for(int i = 0; i < size; i++){
//		printf("%c",buf[i]);
//	}
	for(int i = 0; i < size; i++){
		buf[i] = decode(buf[i]);
	}
	for(int i = 0; i < size; i++){
		printf("%c", buf[i]);
	}


	write(fd_new,buf,size);
	close(fd_new);
	close(fd_source);
}
