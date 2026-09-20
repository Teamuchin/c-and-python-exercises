#include <stdio.h>
#include <stdlib.h>

typedef struct number_s{
    int real;
    int img;
}number_t;
typedef number_t* number;

number sumnum(number a,number b){
    number num = (number)malloc(sizeof(number_t));
    num->img = a->img+b->img;
    num->real = a->real+b->real;
    return num;
}

int main(){
    number testnum = (number)malloc(sizeof(number_t));
    testnum->img = 2;
    testnum->real = 3;
    number testnum1 = (number)malloc(sizeof(number_t));
    testnum->img = 4;
    testnum->real = 5;
    number testnum2 = sumnum(testnum,testnum1);
    printf("%d %di",testnum2->real,testnum2->img);

    return 0;
}