#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


int main(){
    printf("Test %d\n",getpid());
    if(fork()!=0){
        wait(NULL);
        printf("Test2 %d\n",getpid());
    }else{
        printf("Test3 %d\n",getpid());
        exit(0);
    }

    return 0;
}


