/*
矩陣相乘 : mat_multiply(矩陣 A , 矩陣 B )
轉置矩陣 : mat_transpose(矩陣 A )
*/

#include "linear.h"
#include <stdlib.h>
#include <stdio.h>

double** allocate_matrix()
{
    double** M = malloc(3 * sizeof(double*));
    for (int i = 0; i < 3; i++)
        M[i] = malloc(3 * sizeof(double));
    return M;
}

double** mat_multiply(double A[3][3], double B[3][3])
{
    double** C = allocate_matrix();
    int i, j, k;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = 0.0;
            for (k = 0; k < 3; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    return C;
}

double** mat_transpose(double A[3][3])
{
    double** T = allocate_matrix();
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            T[i][j] = A[j][i];
    }

    return T;
}