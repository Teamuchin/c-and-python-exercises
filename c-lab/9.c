#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>


int main(){
    int x = 0;
    if(fork()==0){
        sleep(3);
        x++;
        printf("%d %p\n",x,&x);
    }else{
        x--;
        printf("%d %p\n",x,&x);
    }
    wait(NULL);
    printf("%d %p\n",x,&x);
    return 0;
}
