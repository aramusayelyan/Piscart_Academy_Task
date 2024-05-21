#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

struct student {
	char name[50];
	int id;
	float grades[5];
};

void creat_my(struct student *db){
	static int ID = 1;
	printf("CREATE NEX USER \n");
	printf("Enter the name: ");
	scanf("%s",&db->name);
	db->id = ID++;
	for(int i = 0; i < 5; i++){
		printf("Enter the Grades %i: ", i);
		scanf("%f",&(db->grades)[i]);
	}
	printf("\nThanks for filling in the blanks. \n\n");
}




void decode_fon(int num, struct student *db, FILE *fp){
	switch(num){
		case 1:
			creat_my(db);
			break; 
		case 2:
			//	search(db);
			break;
		case 3:
			//	update(db);
			break;
		case 4:
			//	delete(db);
			break;
		case 5:
			//	sort(db);
			break;
		case 6:
			exit(1);
			fclose(fp);
			break;
	}
}

void fail(FILE *fp, struct student* db){
	fprintf(fp,"%i %s",db->id, db->name);
	for(int i = 0; i < 5; i++){
		fprintf(fp,"%f",(db->grades)[i]);
	}


}

int main(){
	do{
		int fun_num = 0;
		FILE *fp = fopen("file.txt", "w+");
		struct student db[20];
		static int index = 0;
		printf("Hello dear user, we present to you the functions \n available for using our program, please enter the \n appropriate ID to perform the actions. \n\n\n\n 1 - Add a new record 2 - Search for a record (by name or ID) \n 3 - Update a record \n 4 - Delete a record \n 5 - (Optional) Sort records \n 6 -Exit \n\n\n Regards Half-Blood Prince. \n\n\n ");
		printf("Enter the function number: ");
		scanf("%i",&fun_num);
		decode_fon(fun_num,&db[index],fp);
		index++;
		fail(fp,&db[index]);
	}while(1);

}
