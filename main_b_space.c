#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"
#include "mylib/utils.h"

int main(){

    int N;
    printf("Enter N:\n");
    scanf("%d", &N);

    int *matrix = (int *) malloc(N*N*sizeof(int));
    int *vector = (int *) malloc(N*sizeof(int));
    int *result = (int *) malloc(N*sizeof(int));

    initMat(matrix, N);
    initVec(vector, N);

    while(1){
        matVecMult(matrix, vector, result, N);
    }
    return 0;
}