#include"advanced.h"
#include<stdio.h> 
#include<stdlib.h>
 
//輔助函式 
int deter(int a,int b,int c,int d) {
    return (a*d)-(b*c);
}

//輔助函式 
void exchange(int* a,int* b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
} 

int** adjoint(int a[3][3]){
	int** adj=(int**)malloc(3*sizeof(int*));
	int i;
	for(i=0;i<3;i++){
		adj[i]=(int*)malloc(3*sizeof(int));
	}
	
	adj[0][0]=deter(a[1][1],a[1][2],a[2][1],a[2][2]);
	adj[0][1]=-deter(a[1][0],a[1][2],a[2][0],a[2][2]);
	adj[0][2]=deter(a[1][0],a[1][1],a[2][0],a[2][1]);
	
	adj[1][0]=-deter(a[0][1],a[0][2],a[2][1],a[2][2]);
	adj[1][1]=deter(a[0][0],a[0][2],a[2][0],a[2][2]);
	adj[1][2]=-deter(a[0][0],a[0][1],a[2][0],a[2][1]);
	
	adj[2][0]=deter(a[0][1],a[0][2],a[1][1],a[1][2]);
	adj[2][1]=-deter(a[0][0],a[0][2],a[1][0],a[1][2]);
	adj[2][2]=deter(a[0][0],a[0][1],a[1][0],a[1][1]);
	
	exchange(&adj[0][1],&adj[1][0]);
	exchange(&adj[0][2],&adj[2][0]);
	exchange(&adj[1][2],&adj[2][1]);
	
	return adj;
}
