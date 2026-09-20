#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


int main(){
    if(fork()==0){
        fork();
    }

    printf("message\n");
    while(wait(NULL)>0);
    return 0;
}
