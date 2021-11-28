#include<stdio.h>
#include<stdlib.h>
struct persona{
	int id;
	char nombre[20];
	char apellido[20];
	int puntaje;
};
typedef struct persona alum;
void mensaje();
void generar(FILE *fr);
void insercion(alum *alumno[],FILE *fr);
int main(){
	int i=0,j,suma=0,promedio,idb;
	FILE *fr;
	int option;
	char fichero[20];
	alum alumno[72];
	do{
		mensaje();
		scanf("%d",&option);
		switch(option){
			case 1: 
				printf("Ingrese el nombre de fichero a crear:\n");
				fflush(stdin);
				gets(fichero);
				fr=fopen(fichero,"w+");
				if(fr==NULL){
					printf("no pudo ser creado el archivo %s!",fichero);
				}
				break;
			case 2:
				fflush(stdin);
				printf("\ningrese id, nombre, apellido, puntaje:\n");
				scanf("%d%s%s%d",&alumno[i].id,alumno[i].nombre,alumno[i].apellido,&alumno[i].puntaje);
				fprintf(fr,"%d\t%s\t%s\t%d",alumno[i].id,alumno[i].nombre,alumno[i].apellido,alumno[i].puntaje);
				i++;
				break;
			case 3:
				for(j=0;j<i;j++){
					suma=suma+alumno[j].puntaje;
				}
				promedio=suma/(i);
				printf("\npromedio de notas (tambien puede consultar en el archivo %s): %d\n",fichero,promedio);
				fprintf(fr,"promedio de notas es: %s",promedio);
				break;
			case 4:
				printf("ingreseid a buscar: ");
				scanf("%d",idb);
				for(j=0;j<i;j++){
					if(idb==alumno[j].id){
						printf("%d\t%s\t%s\t%d",alumno[i].id,alumno[i].nombre,alumno[i].apellido,alumno[i].puntaje);
					}
				}
				break;
		}	
	}while(option!=5);
	
	return 0;
}
void mensaje(){
	printf("\n----------------------------\n");
	printf("INGRESE QUE DESEE HACER\n");
	printf("Generar archivo(1)\n");
	printf("Insertar (2)\n");
	printf("Generar promedio(3)\n");
	printf("Buscar registro por ID(4)\n");	
	printf("Salir(5)\n");
	printf("----------------------------\n");
}
void generar(FILE *fr){
	
}

