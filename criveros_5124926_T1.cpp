#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct tienda{
	char marca[2];
	int cant_vend;
};
typedef struct tienda inventario;
int main(){
	int i=0,j,total=0;;
	float tpp=0,porcent=0,otros=0;
	char temp[2],fichero [20];
	inventario producto[100];
	FILE *fp;
	printf("ingrese el nombre del fichero: ");
	gets(fichero);
	fp=fopen(fichero,"r");	
	if(fp==NULL){
		printf("no se pudo abrir el archivo %tienda",fichero);
		exit(1);
	}
	do{
		fflush(stdin);
		fscanf(fp,"%s\t%d\n",producto[i].marca,&producto[i].cant_vend);
		total=producto[i].cant_vend+total;
		i++;
	}while(!feof(fp) && strcmp(producto[i].marca,"**")!=0);
	strcpy(temp,producto[0].marca);
	for(j=1;j<i;j++){
		if(strcmp(producto[j].marca,temp)==0){
			tpp=tpp+producto[j].cant_vend;
			porcent=(tpp/total)*100;
		}else{
			strcpy(temp,producto[j].marca);
			if( porcent>10){
				printf("marca %s: %f porciento\n",producto[j].marca,porcent);
			}	
			else{
				//printf("%.2f ",porcent);
				otros= otros + porcent;
			}
			tpp=0;
		}
		
	}
	printf("otros: %f porciento\n",otros);
}

