#include<stdio.h>
#define MAX 100
//estructura para las Sucursales
typedef struct Sucursales{
    int cod_suc;
    int cod_vend;
    int fecha;
    char cod_art[15];
    int precio;
}sucursales;
void total_ventas_sucursales(sucursales movimientos[MAX], int i);
void sucursal_mas_ventas(sucursales movimientos[MAX],int i);
int main(){
    sucursales movimientos[100];
    char archivo[20];
    printf("ingrese el nombre del archivo a leer: ");
    scanf("%s", archivo);
    FILE *fp = fopen(archivo,"r");
    if(fp==NULL){
        printf("no se pudo leer el archivo");
        return 1;
    }
    int i=0;
    while(!feof(fp)){
        fscanf(fp,"%d\t%d\t%d\t%s\t%d\n",&movimientos[i].cod_suc,&movimientos[i].cod_vend,&movimientos[i].fecha,movimientos[i].cod_art,&movimientos[i].precio);
        i++;
    }
    printf("SUCURSAL  Total Gs.  Articulos\n");
    total_ventas_sucursales(movimientos,i);
    return 0;
}
//TOTAL DE VENTAS POR SUCURSALES
//funcion para obtener las ventas por sucursal
void total_ventas_sucursales(sucursales movimientos[MAX], int i){
	int j,total_guaranies=0,cont=0,total_total=0,cont_total=0;
	 	for(j=0 ; j<i ; j++){
    		total_guaranies+=movimientos[j].precio;
            cont++;
            
            //trabajamos con estructura
			if(movimientos[j].cod_suc != movimientos[j+1].cod_suc){
   				printf("%d \t\t%d\t\t%d\n",movimientos[j].cod_suc,total_guaranies,cont);
	   			total_total+=total_guaranies;
                cont_total+=cont;
                cont=0;
                total_guaranies=0;
                
			}
	}
    printf("Total:  %d   %d \n",total_total,cont_total);
}
//funcion para saber que sucursal vendio mas
void sucursal_mas_ventas(sucursales movimientos[MAX],int i){
    int j,total_articulos=0,mayor=0;
    int suc_mas_ventas = 1;
	 	for(j=0 ; j<i ; j++){
    	    total_articulos++;
			if(movimientos[j].cod_suc != movimientos[j+1].cod_suc){
   				if(total_articulos>mayor){
                    suc_mas_ventas = movimientos[j].cod_suc;
                }
                total_articulos=0;
			}
	}
    printf("Sucursal con mas ventas: %d", suc_mas_ventas);
}
// no me dio el tiempo de calcular el articulo mas vendido
void articulo_mas_vendido(sucursales movimientos[MAX],int i){
    

}