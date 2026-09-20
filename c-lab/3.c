#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** create2darray(int x, int y){
    int** matrix = malloc(sizeof(int*)*y);
    for(int i = 0; i<y;i++){
        matrix[i] = (int*)malloc(sizeof(int)*x);
    }
    return matrix;
}
void destroy2darray(int** array){
    for(int i = 0; i<(sizeof(array)/sizeof(int*));i++){
        free(array[i]);
    }
    free(array);
}

int main(){
    int** m = create2darray(4,5);
    m[3][4] = 8;
    printf("%d\n",m[3][4]);
    destroy2darray(m);
    return 0;
}


