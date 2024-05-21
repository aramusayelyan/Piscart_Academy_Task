#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 4096
void Marge(const char *path, const char *path1){
	FILE *file = fopen(path,"r");
	FILE *file1 = fopen(path1,"r");
	FILE *marge = fopen("marge.txt", "w");
	char buf[SIZE] = {0};
	char buf1[SIZE] = {0};
	while (fgets(buf,SIZE, file) && fgets(buf1,SIZE, file1)) {
		if (!(strcmp(buf, buf1))) {
			fputs(buf, marge);
		}else{
			int num = 0;		
			do{
				printf("FILE 1:\n%s \n",buf);
				printf("FILE 2:\n%s \n",buf1);
				printf("Here is the corresponding line for each file, which one do you want to save? : 1 - file1, 2 - file 2, 3 - save both ։ ");
				scanf("%i", &num);
				if(num == 1){
					fputs(buf,marge);
				}else if(num == 2){
					fputs(buf1,marge);
				}else if(num == 3){
					fputs(buf,marge);
					fputs(buf1,marge);
				}
			}while(num < 1 || num > 3);
		}	
	}
}


int main(int argc, const char *argv[]){
	if(argc < 3){
		printf("Please enter ./a.out file file1");
		exit(0);
	}
	Marge(argv[1],argv[2]);

}
