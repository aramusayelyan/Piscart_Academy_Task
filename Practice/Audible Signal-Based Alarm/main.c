#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

void alarm_hendler(){
	printf("SIgnal ALARM");
system("aplay sound.wav");	
exit(1);
}

int main(){
	int time = 0;
	printf("Enter the period after which you want to receive the alarm։ ");
	scanf("%i",&time);

	signal(SIGALRM, alarm_hendler);

	alarm(time);

	while(1){

	}
}
