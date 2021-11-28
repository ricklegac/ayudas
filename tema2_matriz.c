#include<stdio.h>
int main(){
	int a,b,c,d,fila,col,i,j; 
	printf("Ingrese el numero de fila: "); 
	scanf("%d",&fila);
	printf("Ingrese el numero de  columna: "); 
	scanf("%d",&col);
	int M[fila][col]; 
	printf("Ingrese los valores de la matriz principal\n");
	for(i=0 ; i<fila ; i++){
		for(j=0 ; j<col ; j++){
			scanf("%d",&M[i][j]);
		}
	}
	for(i=0 ; i<fila ; i++){
		for(j=0 ; j<col; j++){
			printf("%d ",M[i][j]);
		}
		printf("\n");
	}
	printf("Ingrese  los valores de a,b,c,d respectivamente\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);	
	int N[c-a][d-b];
	for(i=a ; i<c; i++){
		for(j=b ; j<d; j++){
			printf("%d",M[i][j]); 
		}	
	}	
	return 0;
}