#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 72
struct alumnos{
	int id;
	char nombre[20],apellido[20];
	int puntaje;
};
typedef struct alumnos alumno;
int main(){
	int opt;
	alumno a[max];
	int i=0,j,ban=0,idb;
	float total=0;
	FILE *fp;
	fp=fopen("PARCIAL.DAT","w+");
	do{
		printf("\n---------------------\n");
		printf("ingrese 1 para generar archivo\n");
		printf("ingrese 2 para insertar valores\n");
		printf("ingrese 3 para generar promedio de puntajes\n");
		printf("ingrese 4 para buscar por id\n");
		printf("ingrese 0 para salir y guardar");
		printf("\n---------------------\n");
		printf("opcion: ");
		scanf("%d",&opt);
		printf("\n");
		if(opt==1) {
			if(fp!=NULL){
				printf("archivo creado con exito\n");
			}else{
				printf("archivo no creado");
				exit(1);
			}
		}
		if(opt==2){
			printf("id generado: %d\n",i+1);
			a[i].id=i+1;
			printf("ingrese nombre: ");
			fflush(stdin);
			scanf("%s",a[i].nombre);
			printf("ingrese apellido: ");
			fflush(stdin);
			scanf("%s",a[i].apellido);
			printf("ingrese puntaje de %s %s: ",a[i].nombre,a[i].apellido);
			scanf("%d",&a[i].puntaje);
			fprintf(fp,"%d\t%s\t%s\t%d\n",a[i].id,a[i].nombre,a[i].apellido,a[i].puntaje);
			i++;
		}
		if(opt==3){
			for(j=0;j<i;j++){
				total=a[j].puntaje+total;
			}
			printf("promedio de puntajes: %.2f\n", total/i);
		}
		if(opt==4){
			printf("ingrese id a buscar: ");
			scanf("%d",&idb);
			for(j=0;j<i;j++){
				if(idb==a[j].id){
					printf("####################################\n");
					printf("alumno encontrado:\n");
					ban=0;
					printf("%d\t%s\t%s\t%d\n",a[j].id,a[j].nombre,a[j].apellido,a[j].puntaje);
					printf("####################################\n");
				}
			}
		}
	}while(opt!=0);
	fclose(fp);
	return 0;
}
