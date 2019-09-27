#include <stdio.h> 
#include<stdlib.h>
#define N 4 
  
// This function multiplies mat1[][] and mat2[][], 
// and stores the result in res[][] 
void multiply(int mat1[][N], int mat2[][N], int res[][N]) 
{ 
    int i, j, k; 
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < N; k++) 
                res[i][j] += mat1[i][k]*mat2[k][j]; 
        } 
    } 
} 
  
int main() 
{ 
    int mat1[N][N],mat2[N][N]; 
	
  
    int res[N][N]; // To store result 
    int i, j,r1=N,c1=N; 
for (i = 0; i < r1; i++)  
            for (j = 0; j < c1; j++)  
                   mat1[i][j] = rand() % 10;  
            
        // Generating random values in matB  
    for (i = 0; i < r1; i++)  
            for (j = 0; j < c1; j++)  
                   mat2[i][j] = rand() % 10;  
    multiply(mat1, mat2, res); 
  
    printf("Result matrix is \n"); 
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
           printf("%d ", res[i][j]); 
        printf("\n"); 
    } 
  
    return 0; 
} 
