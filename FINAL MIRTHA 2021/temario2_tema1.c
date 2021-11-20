#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct campos{ //estructura, muchos valores no se uso, como codVenta, o dia
	int ano;
	short mes;
	short dia;
	char fecha[20];
	char operacion[2];
	int codArt;
	int cantidad;
	int preciou;
	int codVend;
}articulo;
void maxi_row(int mat[][5], int m, int n);
int main(){
	int posicion_fila,contador_columnas,contador_filas,posicion_columna,i=0,j;
	int matriz[4][5]={0};
	FILE *fp=fopen("texto.csv","r");
	if(fp==NULL){
		perror("no se pudo abrir.");
		exit(1);
	}
	articulo datos;
	char buffer[1024];
	while(fgets(buffer,1024,fp)){
		contador_columnas=0;
		contador_filas++;
		char *field = strtok(buffer,";"); //estan separadas por \t en el archivo original
		//if(contador_filas==1)
		//	continue; //aca pasamos de largo cuando lee el titulo del csv, al final no le puse titulo
		
		while(field){
			if(contador_columnas==0){
				//printf("%s ",field);
				//printf("%d ",datos.ano);
				if (strcmp(field,"2018")==0){
					//printf("2018");
					posicion_fila=0;
				}
				if (strcmp(field,"2019")==0){
					//printf("2019");
					posicion_fila=1;
				}
				if (strcmp(field,"2020")==0){
					//printf("2020");
					posicion_fila=2;
				}
				if (strcmp(field,"2021")==0){
					//printf("2021");
					posicion_fila=3;
				}
				//printf("%d",posicion_fila);
			}
			

			if(contador_columnas==4){
				posicion_columna=*field-'0';
				//printf("%d ",posicion_columna );
				//matriz[posicion_fila][]
			}

			if(contador_columnas==5){
				sscanf(field, "%d", &datos.cantidad);
				//printf("%d ",datos.cantidad);
			}

			if(contador_columnas==6){
				sscanf(field, "%d", &datos.preciou);

			}
			field=strtok(NULL,";"); //actualizamos el valor de la columna
			contador_columnas++;
		//}
		i++;
	}
	printf("%d %d \n",posicion_fila,posicion_columna);
	matriz[posicion_fila][posicion_columna]=datos.preciou*datos.cantidad+matriz[posicion_fila][posicion_columna];
	}
	for(i=0;i<4;i++){ //mostramos la matriz
		for(j=0;j<5;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
    maxi_row(matriz,4,5); //llevamos para ver cual de las filas tiene mayor cantidad de ventas
	return 0;
}
void maxi_row(int mat[][5], int m, int n){//funcion para ver que fila tiene mayor cantidad en la matriz 
	int i = 0, j;
	int max = 0;
	int result[m];
	while (i < m)
	{
	for ( j = 0; j < n; j++){
		if (mat[i][j] > max){
			max = mat[i][j];
		}
	}
		result[i] = max;
		max = 0;
		i++;
	}
printf("mayores ventas por articulo ordenado de 2018-2021\n")
for(i=0;i<n;i++){
		printf("%d\n", result[i]);
	}
}