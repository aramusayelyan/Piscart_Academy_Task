#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#define SIZE 4096
int main(){
	printf("Greetings from the Half-Blood Prince. Welcome to the file editor.\n \n");
	char buf[SIZE] = {0};
	char forscan[SIZE] = {0};
	int fd = open("input.txt", O_RDONLY);
	int fd1 = open("input.txt", O_WRONLY | O_APPEND);

	read(fd,buf,SIZE);
	printf("*****Your Text*****\n");
	puts(buf);
	printf("\n\n*****End your text*****\n");
	int size1 = strlen(buf);
	printf("\nWrite new_text: ");
	gets(forscan);
	int size = strlen(forscan);
	write(fd1,forscan,size);
	printf("\nThank you for using our program, we are the only company that does not respect user rights.\n\nSincerely, Half-Blood Prince\n");
	close(fd);

}
