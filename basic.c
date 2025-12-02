#include "basic.h"
#include <stdio.h>
#include <stdlib.h>
int* VADD(int*A,int*B,int size){
    int**C = malloc(size*sizeof(int*));
    for(int i=0;i<size;i++){
        C[i] = malloc(size*sizeof(int));
    }
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            C[i][j] = A[i][j]+B[i][j];
        }
    }
    return C;
}

int* VSUB(int*A,int*B,int size){
    int**C = malloc(size*sizeof(int*));
    for(int i=0;i<size;i++){
        C[i] = malloc(size*sizeof(int));
    }
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            C[i][j] = A[i][j]-B[i][j];
        }
    }
    return C;
}

int* VDOT(int*A,int*B,int size){
    int**C = malloc(size*sizeof(int*));
    for(int i=0;i<size;i++){
        C[i] = malloc(size*sizeof(int));
    }
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            C[i][j] = A[i][j]*B[i][j];
        }
    }
    return C;
}