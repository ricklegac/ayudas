#include <stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#define N 4
int sumv=0;
void imprimirmatriz(int A[N][N])
{
	int i,j;
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++)
            printf(" %d ", A[i][j]);
        printf("\n");
    }
    printf("sumvecinos: ",sumv);
}
bool fclibre(int A[N][N], int fi, int col)
{
    int i, j;
  /*REVISION DE DIAGONALES Y */

    for (i = 0; i < col; i++)
        if (A[fi][i])
            return false;
  
    /* Check upper diagonal on left side */
    for (i = fi, j = col; i >= 0 && j >= 0; i--, j--)
        if (A[i][j])
            return false;
  
  
    for (i = fi, j = col; j >= 0 && i < N; i++, j--)
        if (A[i][j])
            return false;
  
    return true;
}
bool revisarcol(int A[N][N], int col)
{
	int i;
    if (col >= N) return true;
    for ( i = 0; i < N; i++) {
        if (fclibre(A, i, col)) {
            A[i][col] = 1;
            if(col-1>=0) sumv=sumv+A[i][col-1];
            if (revisarcol(A, col + 1))
                return true;
            A[i][col] = 0; 
        }
    }
    return false;
}
bool coordenadas()
{
	int f,c;
    int A[N][N] = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
  	printf("ingrese f y c");
  	scanf("%d%d",&f,&c);
  	if(f>N || c>N || c<0 || f<0){
  		printf("indice fuera de rango");
  		printf("\nsaliendo del programa..");
  		return 1;
	}
    if (revisarcol(A, 0) == false) {
        return false;
    }
  
    imprimirmatriz(A);
    return true;
}
int main()
{
    coordenadas();
    return 0;
}