#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"
#include "mylib/utils.h"
#include <time.h>

clock_t start, end;
double cpu_time_used;
double total_time_used;
int res;

FILE *fp, *fp2;


int main(){

    int N = 6000;

    int *matrix = (int *) malloc(N*N*sizeof(int));
    int *vector = (int *) malloc(N*sizeof(int));
    int *result = (int *) malloc(N*sizeof(int));
    
    fp = fopen("dataRuntime.dat", "w");
    fp2 = fopen("dataRuntimeMagnified.dat", "w");

    for(int i = 100; i <= N; i += 100){

        initMat(matrix, i); 
        initVec(vector, i);

        start = clock();
        matVecMult(matrix, vector, result, N);
        end = clock();
        
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

        fprintf(fp, "(%d,%lf),", i, cpu_time_used);
        fprintf(fp2, "(%d,%lf),", i/100, cpu_time_used*100);

        printf("Runtime of current step: %lfs   N: %d\n", cpu_time_used, i);
    }

    fclose(fp);




    return 0;
}