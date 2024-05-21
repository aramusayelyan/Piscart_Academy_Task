#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#define SIZE 4096

void encode(const char * path, const char* path1){
	FILE *input = fopen(path,"r");
	FILE *output = fopen(path1,"a+");
	char buf[SIZE];
	fseek(output, 0,SEEK_SET);
	int size = read(fileno(input),buf,SIZE);
	for(int i = 0; i < size-1; i++){
		int count = 1;
		while(buf[i] == buf[i+1]){
			i++;
			count++;
		}
		fprintf(output,"%i%c",count,buf[i]);
	}
	fclose(output);
	fclose(input);
}

void decode(const char * path, const char * path1){
	FILE *input = fopen(path,"r");
	FILE *output = fopen(path1,"a+");
	char buf[SIZE] = {0};
	fseek(output,0,SEEK_SET);
	int size = read(fileno(input),buf,SIZE);
	int count = 0;

	for(int i = 0; i < size; i++){
		count = atoi(&buf[i]);
		while(buf[i] >= '0' && buf[i] <= '9'){
			i++;}
		for(int j = 0; j < count; j++){
			fprintf(output,"%c",buf[i]);
		}
	}
	fclose(output);
	fclose(input);
}

int main(int argc, const char *argv[]){
	if(argc < 3){
		printf("Please input ./a.out file1, file2");
		exit(0);
	}
	printf("Welcome to our program, We are glad that you chose it, I want to remind you that we are the only company that does not respect its owners, \n\nSincerely, Half-Blood Prince \n\n");
	int num = 0;
	do {
		printf("Enter the 1 for encode and 2 for decode: ");
		scanf("%i", &num);
		if(num == 1){
			encode(argv[1], argv[2]);
		}else if(num == 2){
			decode(argv[2],argv[1]);
		}
	}while(num > 2 || num < 1);
}
