/*
加法 : VADD(矩陣A, 矩陣B)
減法 : VSUB(矩陣A, 矩陣B)
Hadamard乘法 : VDOT(矩陣A, 矩陣B)
*/

#include "basic.h"
#include <stdio.h>
#include <stdlib.h>
int** VADD(int A[3][3], int B[3][3])
{
    int** C = malloc(3 * sizeof(int*));
    for(int i=0 ; i<3 ; i++)
        C[i] = malloc(3 * sizeof(int));
    for(int i =0 ; i<3 ; i++)
    {
        for(int j =0 ; j<3 ; j++)
            C[i][j] = A[i][j]+B[i][j];
    }
    return C;
}

int** VSUB(int A[3][3], int B[3][3])
{
    int**C = malloc(3 * sizeof(int*));
    for(int i=0 ; i<3 ; i++)
        C[i] = malloc(3 * sizeof(int));
    for(int i =0 ; i<3 ; i++)
    {
        for(int j =0 ; j<3 ; j++)
            C[i][j] = A[i][j]-B[i][j];
    }
    return C;
}

int** VDOT(int A[3][3], int B[3][3])
{
    int**C = malloc(3 * sizeof(int*));
    for(int i=0 ; i<3 ; i++)
        C[i] = malloc(3 * sizeof(int));
    for(int i =0 ; i<3 ; i++)
    {
        for(int j =0 ; j<3 ; j++)
            C[i][j] = A[i][j]*B[i][j];
    }
    return C;
}