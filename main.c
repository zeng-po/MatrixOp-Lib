#include<stdio.h>
#include"basic.h"
/*
加法 : VADD(矩陣A, 矩陣B)
減法 : VSUB(矩陣A, 矩陣B)
Hadamard乘法 : VDOT(矩陣A, 矩陣B)
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
    //C = VADD(A, B);
    for(int i= 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
            printf("%3d", C[i][j]);
        printf("\n");
    }
    return 0;
}
