#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void foo(int id, char arr) {
    for (int i = 0; i < 8; i++) {
        if (arr & (1 << i)) {
            kill(id, SIGUSR2);
        } else {
            kill(id, SIGUSR1);
        }
//        usleep(100);
    }
}

int main(int argc, char *argv[]) {

    int id = atoi(argv[1]);
    char arr[] = "Edo jan senc petqa ashxater es cody";

    for (int i = 0; arr[i] != '\0'; i++) {
        foo(id, arr[i]);
    }

    return 0;
}

