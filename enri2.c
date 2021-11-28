#include<stdio.h>
#include<stdlib.h>
#define max 100
struct c{
	int FechaVta;
	char CodVendedor[10];
	int MontoVta;
	char CodSupervisor[10];
	
};
int main(){
	int i;
	typedef struct c p;
	FILE *fp;
	char fichero[20];
	p empleados[max];
	printf("ingrese el nombre del fichero: ");
	gets(fichero);
	fp=fopen(fichero,"r");	
	if(fp==NULL){
		printf("no se pudo abrir el archivo %s",fichero);
		exit(1);
	}
	do{
		fflush(stdin);
		fscanf(fp,"%d\t%s\t%d\t%s\n",&empleados[i].FechaVta,empleados[i].CodVendedor,&empleados[i].MontoVta,empleados[i].CodSupervisor);
		printf("%d\t%s\t%d\t%s\n",empleados[i].FechaVta,empleados[i].CodVendedor,empleados[i].MontoVta,empleados[i].CodSupervisor);
		i++;
	}while(!feof(fp));
	
	return 0;
}
