#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

void alarm_hendler(){
	system("aplay sound.wav");
}

int main(){
int time = 0;
signal(SIGALRM, alarm_hendler);
do{
	printf("Enter the period after which you want to receive the alarm։ ");
	scanf("%i",&time);
	alarm(time);

	sleep(time);
	printf("If you want to continue, enter any number, if you want to exit, enter a negative number: ");

}while(time > 0);
exit(1);

}
