#include<stdio.h>
#include"basic.h"
#include"advanced.h"
/*
加法 : VADD(矩陣A, 矩陣B)
減法 : VSUB(矩陣A, 矩陣B)
Hadamard乘法 : VDOT(矩陣A, 矩陣B)
*/
/*
伴隨矩陣 : adjoint(矩陣A)
行列式值 : determinant(矩陣A)
*/
int main ()
{
    int A[3][3]={{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    int B[3][3]={{9, 6, 3},
                        {8, 5, 2},
                        {7, 4, 1}};
    int** C;
    int x;
    //C = VADD(A, B);
    //C = VSUB(A, B);
    //C = VDOT(A, B);

    //C = adjoint(A);
    x = determinant(A);
    /*
    for(int i= 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
            printf("%3d", C[i][j]);
        printf("\n");
    }
    */
    printf("%d", x);
    return 0;
}
