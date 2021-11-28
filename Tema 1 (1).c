/*FECHA: 05/06/2021
  NOMBRE APELLIDO:
  NUMERO DE CEDULA:
  TEMA 1 EXAMEN DE PROGRAMACION
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int **datos, **c = NULL;
  	int M ,N,i,j,temp,cmay;

  	printf("Ingrese cantidad de filas en que se registrarán los datos,  : ");
  	scanf("%d",&M);
  	printf("Ingrese la cantidad de columnas se registrarán los datos  : ");
 	scanf("%d",&N);
   
  	datos = (int **) malloc (M * sizeof(int *));
  	
    for (i=0 ; i < M ; i ++) {
    	datos[i] = (int *) malloc (N * sizeof(int));
  	}
    int F=25
    c = (int **) malloc (F * sizeof(int *));
  	
    for (i=0 ; i < F ; i ++) {
    	c[i] = (int *) malloc (N * sizeof(int));
  	}
    for( i=0 ; i < M ; i ++){
        for(j =0 ; j < N ; j ++){
            c[i][j]=0
        }
    }
    printf("Ingrese los datos para la matriz (enteros de 1 a 25)  : \n");
    for( i=0 ; i < M ; i ++){
        for(j =0 ; j < N ; j ++){
            printf("Ingrese el elemento[%d",i,"][%d",j"]\t:");
            scanf("%d", &datos[i][j]);
        }
    }
    for( i=0 ; i < M ; i ++){
        for(j =0 ; j < N ; j ++){
            printf("%d", &datos[i][j]);
        }
         printf("\n");
    }
	z=M * N
    aux = (int **) malloc (z * sizeof(int *));
    pos = (int **) malloc (z * sizeof(int *));
    k=0
    for( i=0 ; i < M ; i ++){
        for(j =0 ; j < N ; j ++){
            temp=datos[i][j]-1
            c[temp][j]++
        }
    }
    mayor=0
    for( i=0 ; i < M ; i ++){
        for(j =0 ; j < N ; j ++){
            si(c[i][j]>mayor){
                mayor=c[i][j]
                c_may=j
            }
        }
    }
    printf("\nColumna %d", c_may,"\t");
    for(i=0; i<M;i++){
       printf("%d",c[i][c_may],"\t")
    }
	return 0;
}