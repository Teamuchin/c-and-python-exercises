#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct NewNumber_s {
    float real;
    float img;
}NewNumber_t;
typedef NewNumber_t* NewNumber;


int main(){
    NewNumber i = (NewNumber)malloc(sizeof(NewNumber_t));
    i->real = 5.0;
    i->img = 6.0;
}


