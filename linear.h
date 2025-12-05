/*
矩陣相乘 : mat_multiply(矩陣 A , 矩陣 B )
轉置矩陣 : mat_transpose(矩陣 A )
*/

#ifndef LINEAR_H
#define LINEAR_H
#define SIZE 3

double** mat_multiply(double A[3][3], double B[3][3]);
double** mat_transpose(double A[3][3]);

#endif