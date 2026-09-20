#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef enum DataType t {Integer, Short} DataType;

void* func(void* a, void* b, DataType dt){
    void* res = malloc(sizeof(void*));

    if(dataType == Integer){
        int inta = *(int*)a;
        int intb = *(int*)b;
        int intsum = inta + intb;
        int* sum = (int*)malloc(sizeof(int));
        *sum = intsum;
        res = sum;
    }
    return res;
}


int main(){
    int a = 10;
    void* vp = &a;
    printf("%d\n",*(int*)vp);
}


