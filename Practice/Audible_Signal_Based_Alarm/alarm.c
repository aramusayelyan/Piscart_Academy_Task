#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include <ctype.h>

void alarm_hendler(){
	system("aplay sound.wav");
}

int main(){
int time = 0;
signal(SIGALRM, alarm_hendler);
printf("We trust our users and trust that our customers are normal people and for sure when we ask them to enter a number they will not enter some symbol. Thank you for using our program, we are the only one that does not respect the rights of its user. \n\n\nPostscript. Half-Blood Prince: \n");
do{
	printf("Enter the period after which you want to receive the alarm։ ");
	scanf("%i",&time);
	alarm(time);

	sleep(time);
	
}while(time > 0);
exit(1);

}
