#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ptradder(int* sum, int a, int b){
    *sum = a+b;
}
void swap(int* i1, int* i2){
    int temp = *i1;
    *i1 = *i2;
    *i2 = temp;
}
int* createInt(){
    return (int*)malloc(sizeof(int));
}

int main(){
    int a = 10;
    printf("%p\n",&a);
    int* pa = &a;
    printf("%p\n",pa);
    printf("%d\n",*pa);
    (*pa)++;
    printf("%d\n",a);
    int b = 4;
    int summ = 0;
    ptradder(&summ,a,b);
    printf("%d\n",summ);
    swap(&a, &b);
    printf("%d\n",a);
    printf("%d\n",b);
    int* c = createInt();
    *c = 2;
    printf("%d\n",*c);

    return 0;
}


