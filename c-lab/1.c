#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int x = rand();
    for(int i = 0;i<10000;i++){
        for(int j = 0; j<10000;i++){
            x ^= i*j;
        }
    }
    printf("%d\n",x);
    return 0;
}
