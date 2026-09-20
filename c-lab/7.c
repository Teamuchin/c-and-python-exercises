#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


int main(){
    printf("a\n");
    fork();
    printf("b\n");
    fork();
    printf("c\n");
    wait(NULL);

    return 0;
}


