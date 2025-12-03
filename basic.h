/*
加法 : VADD(矩陣A, 矩陣B)
減法 : VSUB(矩陣A, 矩陣B)
Hadamard乘法 : VDOT(矩陣A, 矩陣B)
*/
#ifndef BASIC_H
#define BASIC_H

int** VADD(int A[3][3], int B[3][3]);
int** VSUB(int A[3][3], int B[3][3]);
int** VDOT(int A[3][3], int B[3][3]);

#endif