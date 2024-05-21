#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#define SIZE 4096


void encode(const char * path){
	FILE *input = fopen(path,"r");
	FILE *output = fopen("New.txt","a+");
	char buf[SIZE];
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

void decode(const char * path){
	FILE *input = fopen(path,"r");
	FILE *output = fopen("Neww.txt","a+");
	char buf[SIZE] = {0};
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



int main(){
encode("text.txt");
decode("New.txt");
}
