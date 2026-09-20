#include <stdio.h>
#include <stdlib.h>

int** create2DArray(int size){
    int** aptr = (int**)malloc(sizeof(int*)*size);
    for(int i = 0;i<size;i++){
        aptr[i] = (int*)malloc(sizeof(int)*size);
    }
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
        aptr[i][j] = (i+1)*(j+1);
        }
    }
    return aptr;
}

int main(){
    int** testarray = create2DArray(10);
    
    for(int i = 0;i<10;i++){
        for(int j = 0;j<10;j++){
        printf("%d ",testarray[i][j]);
        }
        printf("\n");
    }
    for(int i = 0;i<10;i++){
        free(testarray[i]);
    }
    free(testarray);
    

    return 0;
}