#include<stdio.h>
int main(){
	int a,b,c,d,fila,col,i,j; 
	
	printf("Ingrese el numero de fila: "); //leemos la cantidad de  filas
	scanf("%d",&fila);
	printf("Ingrese el numero de  columna: "); // leemos el numero de columna
	scanf("%d",&col);
	int M[fila][col]; //declaramos la matriz
	printf("Ingrese los valores de la matriz principal\n");
	// ciclo para carga los numero dentro de la matriz
	for(i=0 ; i<fila ; i++){
		for(j=0 ; j<col ; j++){
			scanf("%d",&M[i][j]);
		}
	}
	//imprimimos la matriz para corroborar el cargado
	for(i=0 ; i<fila ; i++){
		for(j=0 ; j<col; j++){
			printf("%d ",M[i][j]);
		}
		printf("\n");
	}
	//leectura de las coordenadas para la particion
	printf("Ingrese  los valores de a,b,c,d respectivamente\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);	
	int N[c-a][d-b];
	for(i=a ; i<c; i++){
		for(j=b ; j<d; j++){
			printf("%d",M[i][j]); // imprimimos los valores de la matri de acuerdo a su coordenada
		}	
	}	
	return 0;
}