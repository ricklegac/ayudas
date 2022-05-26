#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct tienda{
	int fecha;
    int precio;
    char cod_prod[10];
   int cant_prod;
}prod;
void mayores(int va[]);
void ordenacion(int arreglo[], int longitud);
int main(){
	prod p[100];
    int i=0,j;
    FILE *fp = fopen("texto.txt","r");
    if(fp== NULL){
        printf("\nno se pudo abrir el archivo\n");
        return 1;
    }
    //while(!feof(fp) || strcmp(p[i].cod_prod,"fin")!=0){
    while(!feof(fp)){
        fscanf(fp,"%d, %s , %d",&p[i].fecha,p[i].cod_prod,&p[i].precio);
		i++;
    }
    
  	int va[10],co=0,valor_ini=0,valor_fin=0;
  	
 	for(j=0;j<i;j++){
	 	valor_ini=p[j].precio;
    	while(strcmp(p[j].cod_prod,p[j+1].cod_prod)==0){
    		valor_fin=p[j+1].precio;
    		j++;
		}
		va[co]=valor_fin-valor_ini;
		co++;
	}
	printf("Productos cantidad: %d\n",co);
	printf("los 3 mayores");
	mayores(va);
	
    return 0;
}

void mayores(int va[]){
    /**/
	int i,mayor,in,co=0,j;
	mayor=va[0];
	in=0;
	while(co<3){ /*buscamos los 3 productos con mayor diferencia de precio*/
		for(i=0;i<10;i++){			
			if(mayor<va[i+1]){
				mayor=va[i+1];
				in=i;
			}
		}
        va[in+1]=-1;
		co++;
		mayor=va[0];
		in=0;
		printf(" %d aumento en %d\n",in+2,mayor);
		
	}
	
	for(j=0;j<10;j++){
		if(va[j]==0){
			printf(" %d no cambio de precio\n",j+1);
		}
	}
	
}


