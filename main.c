#include<stdio.h>
#include"basic.h"
#include"advanced.h"
#include"linear.h"
#include"inverse.h"

/*
加法 : VADD(矩陣A, 矩陣B)
減法 : VSUB(矩陣A, 矩陣B)
Hadamard乘法 : VDOT(矩陣A, 矩陣B)

矩陣相乘 : mat_multiply(矩陣 A , 矩陣 B )
轉置矩陣 : mat_transpose(矩陣 A )

伴隨矩陣 : adjoint(矩陣A)
行列式值 : determinant(矩陣A)

反矩陣 : mat_inverse(矩陣A)
*/

int main ()
{
    double A[3][3]={{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 8}};
    double B[3][3]={{9, 6, 3},
                               {8, 5, 2},
                               {7, 4, 1}};
    double** C;
    double x;
    //----測試區
    //C = VADD(A, B);
    //C = VSUB(A, B);
    //C = VDOT(A, B);

    //C = mat_multiply( A , B );
    //C = mat_transpose( A );

    //C = adjoint(A);
    //x = determinant(A);

    C = mat_inverse(A);
    //----測試區

    for(int i= 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
            printf("%4.2f ", C[i][j]);
        printf("\n");
    }

    //printf("%4.0f", x);
    return 0;