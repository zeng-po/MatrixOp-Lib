/*
反矩陣 : mat_inverse(矩陣A)
*/

#include <stdlib.h>
#include <stdio.h>
#include "advanced.h"

double** allo_matrix()
{
    double** M = malloc(3 * sizeof(double*));
    for (int i = 0; i < 3; i++)
        M[i] = malloc(3 * sizeof(double));
    return M;
}
double** mat_inverse(double A[3][3])
{
    double det = determinant(A);
    if(det == 0)
    {
        printf("矩陣不可逆 (det = 0)\n");
        return NULL;
    }

    double invDet = 1.0 / det;

    double** C = adjoint(A);
    for (int i = 0 ; i < 3 ; i++)
        for (int j = 0 ; j < 3 ; j++)
            C[i][j] = C[i][j] * invDet ;

    return C;
}
