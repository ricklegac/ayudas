#include<stdio.h>
#include<stdlib.h>


int main (){
	int M,N;
	printf("Ingrese el tamaño de la matriz M:");
	scanf("%d",&M);
	while (M>=20){
		printf("El valor supera el limite, vuelva a ingresar:");
		scanf("%d",&M);
	}
	printf("Ingrese el tamaño de la matriz N:");
	scanf("%d",&N);
		while (N>=25){
		printf("El valor supera el limite, vuelva a ingresar:");
		scanf("%d",&N);
	}
	while (M==N){
		printf("N es igual a M, ingrese un valor distinto a M para N:");
		scanf("%d",&N);
	}
	int A[M][N];
	int B[26][N];
	printf("Ingrese los valores para ");
	for (int i=0; i<M;i++){
		printf("Columna %d ",i+1);
		for (int j=0; j<N; j++){
			printf("fila %d: ",j+1);
			scanf("%d",&A[i][j]);
		}
	}
			
	for (int i=0; i<M;i++){
		printf("\n");
		for (int j=0; j<N; j++){
		printf("%d\t",A[i][j]);
		}
	}
	
	
	for (int i=0; i<26;i++){
		for (int j=0; j<N; j++){
				B[i][j]=0;
			}	
		}
		
		
	for (int i=0; i<N;i++){
		for (int j=0; j<M; j++){
			B[A[j][i]][i]+=1;
		}
	}	
	
	for (int i=0; i<N;i++){
		printf("\nColumna %d : ",i+1);
		for (int j=0; j<26; j++){
			if (B[j][i]!=0){
				printf("%d (%d apariciones)",j,B[j][i]);
			}
			}	
		}	
	return 0;
}
