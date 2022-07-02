#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct registro{
    int anio,cant,cod_prov;
    float precio;
    char cod_prod[10];
    char nombre_prod[50];
};

typedef struct registro compras;
void cant_total_prod(compras datos[200],int i);
void busqueda_prod_caro(compras datos[200], int i);
void pagos_proveedor(compras datos[200],int i);
int main(){
	int i=0,j;
	compras datos[200];
	FILE *fp = fopen("insumos_realizados.txt","r");
    if(fp== NULL){
        printf("\nNO SE ENCONTRO EL ARCHIVO\n");
        return 1;
    }else{
    	printf("Archivo Encontrado\n");
	}
	
	while(!feof(fp)){
		fflush(stdin);
        fscanf(fp,"%d\t%s\t%s\t%d\t%f\t%d\n",&datos[i].anio,datos[i].cod_prod,datos[i].nombre_prod,&datos[i].cant,&datos[i].precio,&datos[i].cod_prov);
       //VALIDAMOS EL ULTIMO ARCHIVO NO PROCESABLE CON 0 EN EL PRECIO
	   if(datos[i].precio == 0){
       	break;
	   }
		i++;  
    }
	
	/*for(j=0 ; j<i ; j++){
    	printf("%d,%s,%s,%d,%f,%d\n",datos[j].anio,datos[j].cod_prod,datos[j].nombre_prod,datos[j].cant,datos[j].precio,datos[j].cod_prov);
	}*/
	printf("\nCANTIDAD TOTAL DE PRODUCTOS\n");
	cant_total_prod(datos,i);
	printf("\nEL PRODUCTO MAS CARO\n");
	busqueda_prod_caro(datos,i);
	printf("\nPAGOS REALIZADOS A CADA PROVEEDOR\n");
	pagos_proveedor(datos,i);
    
	return 0;
}


// Calculo de la cantidad total de productos por añio
void cant_total_prod(compras datos[200], int i){
	int j,cont=0;
	 	for(j=0 ; j<i ; j++){
    		cont+=datos[j].cant;
			if(datos[j].anio != datos[j+1].anio){
   				printf("La cantidad total de productos en el anio %d es: %d\n",datos[j].anio,cont);
	   			cont=0;
			}
	}
}


//Calculo del producto mas caro por añio	
void busqueda_prod_caro(compras datos[200], int i){
	int j,mayor=0,indice=0;
	for(j=0 ; j<i ; j++){
		if(datos[j].precio > mayor){
			mayor=datos[j].precio;
			indice=j;	
		}
		if(datos[j].anio != datos[j+1].anio){
			printf("El producto mas caro en el anio %d es: %s\n",datos[j].anio,datos[indice].nombre_prod);
			mayor=0;
			indice=0;
		}
	}
}

//Calculo de pagos por cada vendedor
void pagos_proveedor(compras datos[200],int i){
	int j;
	for(j=0 ; j<i ; j++){
    	printf("Anio=%d, Pago realizado al proveedor %d: %.2f\n",datos[j].anio,datos[j].cod_prov, datos[j].cant*datos[j].precio);
	}
}
