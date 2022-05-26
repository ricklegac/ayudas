/*PARA ESTE EJERCICIO ASUMIMOS QUE LA FECHA ESTA ORDENADA*/
#include<stdio.h>
#include<string.h>
#define max 100
typedef struct Producto{
	int fecha;
    int precio;
    char cod_prod[max];
   
}productos;
void mayores(int va[]);
void burbuja(int arreglo[], int longitud);
int main(){
	//CREAMOS UN ARREGLO DE PRODUCTOS PARA QUE PUEDA SER MANIPULADO LUEGO DE LEER
	productos p[max];
    int i=0,j;
    FILE *fp = fopen("texto.txt","r");
    if(fp== NULL){
        printf("\nno se pudo abrir el archivo\n");
        return 1;
    }
    while(!feof(fp)){
        fscanf(fp,"%d, %s , %d",&p[i].fecha,p[i].cod_prod,&p[i].precio);
        if(strcmp(p[i].cod,"fin")==0) break;
		i++;
        
    }
    
  	int va[10],x=0,valor_ini=0,valor_fin=0;
  	
 	for(j=0;j<i;j++){
	 	valor_ini=p[j].precio;
    	while(strcmp(p[j].cod_prod,p[j+1].cod_prod)==0){
    		valor_fin=p[j+1].precio;
    		j++;
		}
		va[x]=valor_fin-valor_ini;
		x++;
	}
	printf("Cantidad de productos ingresado: %d\n",x);
	printf("\n---Productos con mayor aumento en precio:---\n");
	mayores(va);
	
    return 0;
}

void mayores(int va[]){
	int i,mayor,indice,x=0,j;
	mayor=va[0];
	indice=0;
	while(x<3){
		for(i=0;i<10;i++){			
			if(mayor<va[i+1]){
				mayor=va[i+1];
				indice=i;
			}
		}
		printf(" A%d con un aumento de %d\n",indice+2,mayor);
		va[indice+1]=-1;
		x++;
		mayor=va[0];
		indice=0;
	}
	
	for(j=0;j<10;j++){
		if(va[j]==0){
			printf("\nEl producto numero %d no cambio de precio",j+1);
		}
	}
	
}


