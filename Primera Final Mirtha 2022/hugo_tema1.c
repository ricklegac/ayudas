#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct registro{
    int anio,cant,cod_prov;
    float precio;
    char cod_prod[10];
    char nombre_prod[50];
}productos;
void pagos_realizados(productos vec[100],int i){
	int j;
	for(j=0 ; j<i ; j++){
    	printf("%d al proveedor %d: %f\n",vec[j].anio,vec[j].cod_prov, vec[j].cant*vec[j].precio);
	}
}

int main(){
	int i=0,j,x=0,mayor=0;
    int cont=0;
	/*CREAMOS UN VECTOR DE ESTRUCTURA DONDE TENEMOS ALOJADOS LOS DATOS DEL PROBLEMA*/
	productos vec[100];
	FILE *fp = fopen("datos.txt","r");
    if(fp== NULL){
        printf("\nno se puede abrir el fichero datos.txt");
        return 1;
    }
	while(!feof(fp)){
		fflush(stdin);
        fscanf(fp,"%d\t%s\t%s\t%d\t%f\t%d\n",&vec[i].anio,vec[i].cod_prod,vec[i].nombre_prod,&vec[i].cant,&vec[i].precio,&vec[i].cod_prov);
		i++;  
    }
    //printf("%d",i);
    printf("cantidad de productos vendidos por ano: \n");
    for(j=0 ; j<i ; j++){
        cont+=vec[j].cant; 
        if(vec[j].anio != vec[j+1].anio){ //ACA HACEMOS EL CORTE DE CONTROL PORQUE CAMBIA YA EL ANHO 
            printf("%d: %d\n",vec[j].anio,cont);
            cont=0;
        }
	}
    //PAGOS REALIZADOS POR ANOS 
    printf("productos mas caro por ano: \n");
    for(j=0 ; j<i ; j++){
		if(vec[j].precio > mayor){ //al comienzo mayor vale cero es por eso que siempre entra la primera vez aca
			mayor=vec[j].precio;
			x=j;	
		}
		if(vec[j].anio != vec[j+1].anio){ 
			printf("%d: %s\n",vec[j].anio,vec[x].nombre_prod);
			mayor=0;
			x=0;
		}
	}
	printf("Pagos realizados: \n");
	pagos_realizados(vec,i);
    
	return 0;
}



