#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
/*SABEMOS QUE EL ARCHIVO ESTA ORDENADO POR ANHO*/
typedef struct registro{
    int anio,cant,cod_prov;
    float precio;
    char cod_prod[10];
    char nombre_prod[50];
}productos;
void cont_insumos(productos insumos[MAX],int i);
void caro_por_anho(productos insumos[MAX], int i);
void pagos_proveedor(productos insumos[MAX],int i);
int main(){
	int i=0,j;
	char nom_archivo[20];
	/*CREAMOS UN VECTOR DE ESTRUCTURA DONDE TENEMOS ALOJADOS LOS DATOS DEL PROBLEMA*/
	productos insumos[MAX];
	printf("ingrese el nombre del fichero de insumos realizados: ");
	scanf("%s",nom_archivo);
	FILE *fp = fopen(nom_archivo,"r");
    if(fp== NULL){
        printf("\nerror al leer el archivo %s \n",nom_archivo);
        return 1;
    }
	/*LECTURA DEL ARCHIVO DENTRO DE UN WHILE NOT EOF*/
	while(!feof(fp)){
		fflush(stdin);
        fscanf(fp,"%d\t%s\t%s\t%d\t%f\t%d\n",&insumos[i].anio,insumos[i].cod_prod,insumos[i].nombre_prod,&insumos[i].cant,&insumos[i].precio,&insumos[i].cod_prov);
		i++;  
    }
	/*IMPRESIONES SEGUN LO QUE PIDE EL PROBLEMA*/
	printf("--------Cantidad total------------\n");
	cont_insumos(insumos,i);
	printf("----------Productos mas caro-----------------\n");
	caro_por_anho(insumos,i);
	printf("--------------Pagos Realizados a cada proveedor------------\n");
	pagos_proveedor(insumos,i);
    
	return 0;
}


/*SE CALCULA LA CANTIDAD TOTAL DE PRODUCTOS POR ANHO*/
void cont_insumos(productos insumos[MAX], int i){
	int j,cont=0;
	 	for(j=0 ; j<i ; j++){
    		cont+=insumos[j].cant; 
			if(insumos[j].anio != insumos[j+1].anio){ //ACA HACEMOS EL CORTE DE CONTROL PORQUE CAMBIA YA EL ANHO 
   				printf("cantidad productos en %d es: %d\n",insumos[j].anio,cont);
	   			cont=0;
			}
	}
}


/*CALCULAMOS EL PRODUCTO MAS CARO DE CADA ANHO QUE LO LLAMAMOS */	
void caro_por_anho(productos insumos[MAX], int i){
	int j,mayor=0,indice=0;
	for(j=0 ; j<i ; j++){
		if(insumos[j].precio > mayor){
			mayor=insumos[j].precio;
			indice=j;	
		}
		if(insumos[j].anio != insumos[j+1].anio){ //ACA HACEMOS EL CORTE DE CONTROL PORQUE CAMBIA YA EL ANHO 
			printf("producto mas caro del %d es: %s\n",insumos[j].anio,insumos[indice].nombre_prod);
			mayor=0;
			indice=0;
		}
	}
}

/*PAGOS QUE DEBEN HACERSE POR CADA cod_prov*/
void pagos_proveedor(productos insumos[MAX],int i){
	int j;
	for(j=0 ; j<i ; j++){
    	printf("Anho: %d, pago realizado al proveedor %d: %.2f\n",insumos[j].anio,insumos[j].cod_prov, insumos[j].cant*insumos[j].precio);
	}
}
