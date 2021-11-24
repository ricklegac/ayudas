#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#define max 1
void anadir_cliente();
void mostrar_cliente();
struct cliente{
	int edad;
	char nombre[10];
	float sueldo;
}clientes[max][max];
int i,j;
void anadir_cliente(){
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			printf("ingrese su edad\n");
			scanf("%d",&clientes[i][j].edad);
			fflush(stdin);
			printf("ingrese su nombre\n");
			scanf("%s",clientes[i][j].nombre);
			printf("ingrese su sueldo\n");
			scanf("%f",&clientes[i][j].sueldo);
		}
	}
}
void mostrar_cliente(){
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			printf("edad: %d\n",clientes[i][j].edad);
			printf("nombre: %s\n",clientes[i][j].nombre);
			printf("sueldo: %.2f\n",clientes[i][j].sueldo);
		}
	}
	
} 

int main(){
	int resp;
	int opc=0;
	do{
		printf("ingrese una opcion 1 anadir 2 mostrar\n");
		scanf("%d",&opc);
		if(opc==1){
			anadir_cliente();
		}
		else if(opc==2){
			mostrar_cliente();
		}
		
		printf("desea continuar? (1) o (0)\t");
		fflush(stdin);
		scanf("%d",&resp);
	}while(resp==1);
	
	return 0;
}