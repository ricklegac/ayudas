#include<stdio.h>
#include<stdlib.h>
#define max 6 //definimos dimension de la matriz cuadrada de orden 6
/*la matrix ira desde 0,0 a 5,5 por el lenguaje, se puede cambiar en impresiones pero 
deje de la forma original del lenguaje*/
struct operaciones{ //struct matriz de n1 n2 y operaciones
	int n1; //para los numeros tomaremos valores arbitrarios de 1 a 20;
	int n2;
	int op; //tomaremos valores 0, 1, 2 y 3 para suma, resta, multiplicacion y division respectivamente
}matrix[max][max];
int izquierda(int x,int y);
int derecha(int x,int y);
int arriba(int x,int y);
int abajo(int x,int y);
int sumas(int x,int y);
void cargar_matrix(){//cargamos la matriz de forma randomica, 
	int i,j;
	for (i=0;i<max;i++){
		for(j=0;j<max;j++){
			matrix[i][j].n1= 1 + rand() % 20;
			matrix[i][j].n2= 1 + rand() % 20;
			matrix[i][j].op=rand() % 4; //elegimos valores de 0 a 4 para visualizar mejor los tipos de operaciones
		}
	}
}
void mostrar_matrix(){//la matriz cargada randomicamente se muestra en pantalla
	int i,j;
	for (i=0;i<max;i++){
		for(j=0;j<max;j++){
			printf("num1: %d num2: %d ",matrix[i][j].n1,matrix[i][j].n2);
			switch (matrix[i][j].op){ //un switch para mostrar en consola las operaciones segun numero que le toco randomicamente
				case 0:
					printf("ope: +\t");
					break;
				case 1:
					printf("ope: -\t");
					break;
				case 2:
					printf("ope: *\t");
					break;
				case 3:
					printf("ope: /\t");
					break;
			}
		}
		printf("\n\n");
	}
}
int recorrer(int i,int j){ //recorremos la matriz en las 4 direcciones 
	printf("izquierda: \n");
	izquierda(i,j);
	int mayor=izquierda(i,j);
	printf("derecha: \n");
	derecha(i,j);
	if (derecha(i,j)>mayor)
		mayor=derecha(i,j);
	printf("arriba: \n");
	arriba(i,j);
	if (arriba(i,j)>mayor)
		mayor=arriba(i,j);
	printf("abajo: \n");
	abajo(i,j);
	if (abajo(i,j)>mayor)
		mayor=abajo(i,j);
	return mayor;
}
int sumas(int x,int y){ //funcion que recorre segun direccion que se utiliza en las funciones de recorrido
	int suma=0; //recorre la direccion y lo acumula segun operacion de cada celda
	switch(matrix[x][y].op){
		case 0:
			suma=suma+(matrix[x][y].n1+matrix[x][y].n1);
			//printf("%d+%d ",matrix[x][y].n1,matrix[x][y].n2);			
			break;
		case 1: 
			suma=suma+(matrix[x][y].n1-matrix[x][y].n1);
			//printf("%d-%d ",matrix[x][y].n1,matrix[x][y].n2);
			break;
		case 2:
			suma=suma+(matrix[x][y].n1*matrix[x][y].n1);
			//printf("%d*%d  ",matrix[x][y].n1,matrix[x][y].n2);
			break;
		case 3:
			suma=suma+(matrix[x][y].n1/matrix[x][y].n1);
			//printf("%d/%d ",matrix[x][y].n1,matrix[x][y].n2);
			break;
		}
		return suma;
}
int izquierda(int x, int y){ //funcion izquierda
	int suma=0,j;
	for(j=y;j>=0;j--){
		printf("->(%d,%d)\n",x,j);
		suma=suma+sumas(x,j);
	}
	printf("igual a: %d \n",suma);
	return suma;
}
int derecha(int x, int y){ //funcion derecha
	int suma=0,j;
	for(j=y;j<max;j++){
		printf("->(%d,%d)\n",x,j);
		suma=suma+sumas(x,j);
	}
	printf("igual a: %d \n",suma);
	return suma;
}
int arriba(int x, int y){ //funcion arriba
	int suma=0,j;
	for(j=x;j>=0;j--){
		printf("->(%d,%d)\n",j,y);
		suma=suma+sumas(j,y);
	}
	printf("igual a: %d \n",suma);
	return suma;
}
int abajo(int x, int y){ //funcion abajo
	int suma=0,j;
	for(j=x;j<max;j++){
		printf("->(%d,%d)\n",j,y);
		suma=suma+sumas(j,y);
	}
	printf("igual a: %d \n",suma);
	return suma;
}
int main(){
	int i,j;
	cargar_matrix(); //llamamos a la funcion cargar
	mostrar_matrix(); //mostramos la matriz
	do{
		printf("\ningrese la posicion que quiere iniciar: -1 y -1 para salir: \n");
		printf("i: ");
		scanf("%d",&i);
		printf("j: ");
		scanf("%d",&j);
		if(i>6 || j>6 || i<0 || j<0) //verificamos si ingreso en el rango 6x6
			printf("fuera de rango de la matrix");
		else
			printf("la suma mayor es: %d",recorrer(i,j));
		if(i==-1 && j==-1)
			printf("\nsaliendo..");//si es la coordenada -1,-1 sale del programa y no vuelve a pedir
	}while(i!=-1 && j!=-1);
	return 0;
}