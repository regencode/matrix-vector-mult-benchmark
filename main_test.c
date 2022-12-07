#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"
#include "mylib/utils.h"

int main(){
    int N, i;
    printf("Enter matrix size:\n");
    scanf("%d", &N);
    
    if(N <= 1){
        printf("Program failed: N must be greater than 1\n");
        return 0;
    }
    else{
    int *matrix = (int *) malloc(N*N*sizeof(int));
    int *vector = (int *) malloc(N*sizeof(int));
    int *result = (int *) malloc(N*sizeof(int));

    printf("Enter matrix values:\n");
    for(i = 0; i < N*N; i++){
        scanf("%d", &matrix[i]);
    }
    printf("Matrix = ");
    printMat(matrix, N);

    printf("\nEnter vector values:\n");
    for(i = 0; i < N; i++){
        scanf("%d", &vector[i]);
    }
    printf("\nVector = ");
    printVec(vector, N);
    matVecMult(matrix, vector, result, N);
    printf("\nResult = ");
    printVec(result, N);

    free(matrix);
    free(vector);
    free(result);


    }
    return 0;
}
