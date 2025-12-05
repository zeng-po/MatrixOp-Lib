/*
加法 : VADD(矩陣A, 矩陣B)
減法 : VSUB(矩陣A, 矩陣B)
Hadamard乘法 : VDOT(矩陣A, 矩陣B)
*/

#include "basic.h"
#include <stdio.h>
#include <stdlib.h>
double** VADD(double A[3][3], double B[3][3])
{
    double** C = malloc(3 * sizeof(double*));
    for(int i=0 ; i<3 ; i++)
        C[i] = malloc(3 * sizeof(double));
    for(int i =0 ; i<3 ; i++)
    {
        for(int j =0 ; j<3 ; j++)
            C[i][j] = A[i][j]+B[i][j];
    }
    return C;
}

double** VSUB(double A[3][3], double B[3][3])
{
    double**C = malloc(3 * sizeof(double*));
    for(int i=0 ; i<3 ; i++)
        C[i] = malloc(3 * sizeof(double));
    for(int i =0 ; i<3 ; i++)
    {
        for(int j =0 ; j<3 ; j++)
            C[i][j] = A[i][j]-B[i][j];
    }
    return C;
}

double** VDOT(double A[3][3], double B[3][3])
{
    double**C = malloc(3 * sizeof(double*));
    for(int i=0 ; i<3 ; i++)
        C[i] = malloc(3 * sizeof(double));
    for(int i =0 ; i<3 ; i++)
    {
        for(int j =0 ; j<3 ; j++)
            C[i][j] = A[i][j]*B[i][j];
    }
    return C;
}
