#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct marca{
	char fecha[10];
	char nombre[40];
	int precio;
	char talle[5];
	
}marcas[20];
int main(){
	int precio[4]={0};
	int i=0,cont=0,vendidas[4]={0};
	
	
	do{
		printf("Ingrese los datos: \n");
		printf("nombre: ");
		fflush(stdin);
		gets(marcas[i].nombre);
		printf("fecha AAAAMMDD: ");
		fflush(stdin);
		gets(marcas[i].fecha);
		printf("Precio: ");
		scanf("%d",&marcas[i].precio);
		printf("Talle: ");
		fflush(stdin);
		gets(marcas[i].talle);
		char Rondina[]="Rondina";
		if(strcmp(marcas[i].nombre,Rondina)==0){
			printf("prueba");
			precio[0]=precio[0]+marcas[i].precio;//precio por marca
			vendidas[0]=vendidas[0]+1;//cantidad de vendidas por marca
			cont++; //contador de todo lo vendido
		}
		char Nice[]="Nice";
		if(strcmp(marcas[i].nombre,Nice)==0){
			precio[1]=precio[1]+marcas[i].precio;//precio por marca
			vendidas[1]=vendidas[1]+1;//cantidad de vendidas por marca
			cont++; //contador de todo lo vendido
		}
		char Maestro[]="Maestro";
		if(strcmp(marcas[i].nombre,Maestro)==0){
			precio[2]=precio[2]+marcas[i].precio;//precio por marca
			vendidas[2]=vendidas[2]+1;//cantidad de vendidas por marca
			cont++; //contador de todo lo vendido
		}
		char Pombero[]="Pombero";
		if(strcmp(marcas[i].nombre,Pombero)==0){
			precio[3]=precio[3]+marcas[i].precio;//precio por marca
			vendidas[3]=vendidas[3]+1;//cantidad de vendidas por marca
			cont++; //contador de todo lo vendido
		}
		
		
				
		
	}while(strcmp(marcas[i].nombre,"fin")==0);
	printf("Promedio de ventas: \n");
	printf("Rondina: %d", cont/vendidas[0] );

	printf("Nice: %d", cont/vendidas[1] );

	printf("Maestro: %d", cont/vendidas[2] );	

	printf("Pombero: %d", cont/vendidas[3] );
	
	//la idea de ponerle las vendidas en un vector era ordenar con un metodo de ordenacion para luego imprimir el nombre 
	// de la marca que se vendio mas y se vendio menos, (ordenando ascendentemente(
	return 0;
}
