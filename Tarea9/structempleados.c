#include<stdio.h>
#include<stdlib.h>
struct empleado{
	int codigo;
	char nombre[30];
	char fecha[20];
	char hh[3];
	char mm[3];
	char marcacion[2];
};
typedef struct empleado persona;
void bublesort(persona atributos[]){
	persona temp;
	int i,j;
	for (i=0;i<3-1;i++){
        for (j=i+1; j < 3 ;j++){
    		if (atributos[i].codigo>atributos[j].codigo){
		      	temp = atributos[i];
		      	atributos[i]= atributos[j];
		     	atributos[j] = temp;           
    	}
  	}
  	//int codigoac=atributos[0].codigo;
  	printf("codigo\tNombre\tHoraProm\thorpromsalida\n");
  	for(i=0;i<3;i++){
		printf("\n%d\t%s\t%d:%d",atributos[i].codigo,atributos[i].nombre,atoi(atributos[i].hh),atoi(atributos[i].mm));
	}
}
}

int main(){
	int i;
	persona atributos[100];
	for(i=0;i<3;i++){
		printf("ingrese el codigo: ");
		fflush(stdin);
		scanf("%d",&atributos[i].codigo);
		fflush(stdin);
		printf("ingrese el nombre: ");
		scanf("%s",atributos[i].nombre);
		fflush(stdin);
		printf("ingrese la fecha de marcacion: ");
		scanf("%s",atributos[i].fecha);
		printf("ingrese hora: ");
		fflush(stdin);
		scanf("%s:%s",atributos[i].hh,atributos[i].mm);
		printf("Entrada (E) o Salida (S): ");
		fflush(stdin);
		scanf("%s",atributos[i].marcacion);
	}
	bublesort(atributos);	
	return 0;
}
