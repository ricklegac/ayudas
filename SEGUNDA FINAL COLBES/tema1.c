#include<stdio.h>
#include <stdlib.h>
//funcion para imprimir la matriz 
void imprimirMat(int matriz[35][35]){
	int i,j;
	for(i=0;i<35;i++){
		for(j=0;j<35;j++){
			if(matriz[i][j]){
				printf("* ");					
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
//funcion para inicializar la matriz 
void inicializarMatriz(int matriz[35][35]){
	int i,j;
	for(i=0;i<35;i++){
		for(j=0;j<35;j++){
			matriz[i][j]=0;
		}	
	}

}
int main(){
	//variables utilizadas para la lectura e iteracion
	int num=0,cant,i,j;
	char nombre[100];//nombre del archivo

	//variable que define hacia donde apunta nuestra tortuga
	int apunta=1;//1 der - 2 aba - 3 izq - 4 arr
	//variable que define si la pluma esta arriba o abajo
	int pluma=0;//0 arr - 1 aba
	//matriz piso
	int piso[35][35];
	//inicializamos la matriz
	inicializarMatriz(piso);
	FILE *f;
	printf("Ingrese el nombre del archivo con extension\n");
	gets(nombre);//leemos nombre del archivo
	f = fopen(nombre,"r");
	if(!f){//si no abre, terminamos el programa
		printf("No se ha encontrado el archivo %s\n",nombre);
		exit(0);
	}
	int inI = 0,inJ = 0,posI,posJ;//variables utilizadas para mover la tortuga
	while(fscanf(f,"%d",&num) && num!=9 || !feof(f)){//ciclo de lectura del archivo, en caso de leer un 9 termina la ejecucion
		if(num == 1){//condiciones dadas en el enunciado
			pluma = 0;
		}else if(num == 2){
			pluma = 1;
			piso[posI][posJ]=1;
		}else if(num == 3){
			apunta+=1;
			if(apunta == 5){
				apunta == 1;
			}
		}else if(num == 4){
			apunta-=1;
			if(apunta == 0){
				apunta == 4;
			}
		}else if(num == 5){//en caso de ser 5
			fscanf(f,"%d",&cant);
			if(apunta==1){//verificamos hacia donde apunta la tortuga
				posI = inI;
				posJ = inJ+cant;
				for(j=inJ;j<=posJ;j++){//si la pluma esta abajo, dibujamos el camino, caso contrario solo se mueve
					piso[inI][j]=pluma==1?1:piso[inI][j];
				}
				inI=posI;
				inJ=posJ;
			}else if(apunta==2){
				posI = inI+cant;
				posJ = inJ;
				for(i=inI;i<=posI;i++){//si la pluma esta abajo, dibujamos el camino, caso contrario solo se mueve
					piso[i][inJ]=pluma==1?1:piso[i][inJ];
				}
				inI=posI;
				inJ=posJ;
			}else if(apunta==3){
				posI = inI;
				posJ = inJ-cant;
				for(j=posJ;j<=inJ;j++){//si la pluma esta abajo, dibujamos el camino, caso contrario solo se mueve
					piso[inI][j]=pluma==1?1:piso[inI][j];
				}
				inI=posI;
				inJ=posJ;
			}else if(apunta==4){
				posI = inI-cant;
				posJ = inJ;
				for(i=posI;i<=inI;i++){//si la pluma esta abajo, dibujamos el camino, caso contrario solo se mueve
					piso[i][inJ]=pluma==1?1:piso[i][inJ];
				}
				inI=posI;
				inJ=posJ;
			}
		}else if(num == 6){//imprimimos la matriz
			imprimirMat(piso);
		}
	}
}


