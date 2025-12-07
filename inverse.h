
#include <stdlib.h>
#include <stdio.h>



double** allo_matrix()
{
    double** M = malloc(3 * sizeof(double*));
    for (int i = 0; i < 3; i++)
        M[i] = malloc(3 * sizeof(double));
    return M;
}
double** mat_inverse(double A[3][3])
{
    double det =
        A[0][0]*(A[1][1]*A[2][2] - A[1][2]*A[2][1]) -
        A[0][1]*(A[1][0]*A[2][2] - A[1][2]*A[2][0]) +
        A[0][2]*(A[1][0]*A[2][1] - A[1][1]*A[2][0]);

    if(det == 0) {
        printf("矩陣不可逆 (det = 0)\n");
        return NULL;
    }

    double invDet = 1.0 / det;

    double** C = allo_matrix();

    C[0][0] =  (A[1][1]*A[2][2] - A[1][2]*A[2][1]) * invDet;
    C[0][1] = -(A[0][1]*A[2][2] - A[0][2]*A[2][1]) * invDet;
    C[0][2] =  (A[0][1]*A[1][2] - A[0][2]*A[1][1]) * invDet;

    C[1][0] = -(A[1][0]*A[2][2] - A[1][2]*A[2][0]) * invDet;
    C[1][1] =  (A[0][0]*A[2][2] - A[0][2]*A[2][0]) * invDet;
    C[1][2] = -(A[0][0]*A[1][2] - A[0][2]*A[1][0]) * invDet;

    C[2][0] =  (A[1][0]*A[2][1] - A[1][1]*A[2][0]) * invDet;
    C[2][1] = -(A[0][0]*A[2][1] - A[0][1]*A[2][0]) * invDet;
    C[2][2] =  (A[0][0]*A[1][1] - A[0][1]*A[1][0]) * invDet;

    return C;
}
