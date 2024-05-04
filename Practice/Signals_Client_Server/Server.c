#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

char arr[100];
int i = 0;
int n;
void handler(int signal_num) {
	if(signal_num == SIGUSR1) {    
		arr[n] = arr[n] | (0<<i);
		i++;
	} else if(signal_num == SIGUSR2) {
		arr[n] = arr[n] | (1<<i);
		i++;    
	}
	if(i == 8){
		i= 0;
		n++;
	}
}

int main() {
	printf("USER ID IS: %i\n", getpid());

	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);

	while(1) {
		printf("%s\n", arr);
		sleep(1); 
	}

	return 0;
}

