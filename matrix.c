#include "matrix.h"
#include<stdio.h>

void mat_multiply(double A[3][3], double B[3][3], double C[3][3])
{
    int i,j,k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void mat_transpose(double A[3][3], double T[3][3])
{
    int i,j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            T[i][j] = A[j][i];
        }
    }
}