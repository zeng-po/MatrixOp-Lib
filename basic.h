/*
加法 : VADD(矩陣A, 矩陣B)
減法 : VSUB(矩陣A, 矩陣B)
Hadamard乘法 : VDOT(矩陣A, 矩陣B)
*/
#ifndef BASIC_H
#define BASIC_H

double** VADD(double A[3][3], double B[3][3]);
double** VSUB(double A[3][3], double B[3][3]);
double** VDOT(double A[3][3], double B[3][3]);

#endif
