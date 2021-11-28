/*
 * 
 *	Tarea Nro. 6 - Ejercicio 4
 */

#include <stdio.h>
#include <string.h> 
#include <math.h>
#include <stdbool.h>

void imprimirGrupoArt(int *,int , int ,struct importacion *);
void imprimirPorMes(int *,int ,int ,struct importacion *);
void imprimirPorCadaMes(int *, int ,int ,struct importacion *);
int pasarA(int );
void imprimirPorGrupoArt(int *,int ,int ,struct importacion *);
int MES(int );

struct importacion{
	int import;
	int grupo_art; 
	int art; 
	int fecha_mov;
	int monto; 		
};


int main(){
	FILE *imp;
	int i,j;
	int cont=0;
	char c;
	
	if ((imp=fopen("Importaciones.txt","r"))==NULL){
		
		printf ("Error en archivo");
		return 0;
	
	}else{
		printf("\n\tEl Archivo ha sido leido con exito\n");	
	} 

	c=fgetc(imp);
	
	while(!feof(imp)){
		if(c=='\n'){
			cont++;
		}
		c=fgetc(imp);
	}

	
	printf ("\t%d\n",cont);
	rewind(imp);
	struct importacion importaciones[cont];
	
	for (i=0;i<cont;i++){
		fscanf (imp,"%d\t%d\t%d\t%d\t%d",&importaciones[i].import,&importaciones[i].grupo_art,&importaciones[i].art,&importaciones[i].fecha_mov,&importaciones[i].monto);
	}
	
	printf("\n\tPara fines practicos se cargaron en total los datos\n\t de 2 Importadores 120 y 150 en el archivo\n\n");
	
	printf("\n\tIMPORT\tGRUPO_ART\tART\tFECHA\tMONTO");	

	for(i=0;i<cont;i++){
		
		printf("\n\t%d\t%d\t\t%d\t%d\t%d",importaciones[i].import,importaciones[i].grupo_art,importaciones[i].art,importaciones[i].fecha_mov,importaciones[i].monto);
		
	}
	
	int cont1=1;
	int inicio=0;
	int importador=importaciones[0].import;
	bool ban=false;
	int montoTotal=0,contadorMes=0;
	//printf("\nIMPORTADOR\t\tGRUPO ARTICULO\t\tTOTAL");
	//CORTE POR IMPORTADOR
	while(cont1!=(cont+1)){
		montoTotal=0;
		if(importaciones[cont1].import!=importador){
			printf("\nIMPORTADOR\t\tGRUPO ARTICULO\t\tTOTAL");
			printf("\n%d",importaciones[inicio].import);
			imprimirGrupoArt(&montoTotal,inicio,cont1,importaciones);
			importador=importaciones[cont1].import;
			printf("\n\t\t\tMOVIMIENTO MENSUAL");
			imprimirPorMes(&contadorMes,inicio,cont1,importaciones);
			inicio=cont1;
		}
		cont1++;
	}
	

	
	return 0;
}

void imprimirGrupoArt(int *montoTotal,int inicio2, int cant,struct importacion *corte){
	int cont1=inicio2+1;
	int inicio=inicio2;
	int grupoArticulo=corte[inicio2].grupo_art;
		
	while(cont1!=(cant+1)){
		
		if(corte[cont1].grupo_art!=grupoArticulo){
			//printf("\n%d",corte[inicio].import);
			imprimirPorGrupoArt(montoTotal,inicio,cont1,corte);
			grupoArticulo=corte[cont1].grupo_art;
			inicio=cont1;
		}
		cont1++;
	}
	printf("\t\t\tTOTAL\t\t\t%d\n",*montoTotal);
}
//MENSUAL
void imprimirPorMes(int *contadorMes,int inicio,int fin,struct importacion *corte){
	//int cont1=1;
	int inicio1=inicio;
	int mes=pasarA(corte[inicio].fecha_mov);
	inicio++;
	*contadorMes=0;
	while(inicio!=(fin+1)){
			
		if(pasarA(corte[inicio].fecha_mov)!=mes){
			imprimirPorCadaMes(contadorMes,inicio1,inicio,corte);
			mes=pasarA(corte[inicio].fecha_mov);
			inicio1=inicio;
		}
		
		inicio++;
	}
}

void imprimirPorCadaMes(int *contMes, int inicio1,int fin,struct importacion *corte){
	int i,sumaMes=0;
	for(i=inicio1;i<fin;i++){
		sumaMes+=corte[i].monto;
	}
	*contMes=*contMes+1;
	
	printf("\n\t\t\t   (%d)(%d) = %d",*contMes,MES(corte[inicio1].fecha_mov),sumaMes);
}

int MES(int fecha){
	fecha=(fecha%10000);
	fecha=fecha-(fecha%100);
	return fecha/100;
}

int pasarA(int fecha){
	fecha=fecha-(fecha%100);
	return fecha/100;
}
//MENSUAL

//GRUPO ARTICULO
void imprimirPorGrupoArt(int *montoTotal,int inicio,int fin,struct importacion *corte){
	int i,montoGrupoArt=0;
	for(i=inicio;i<fin;i++){
		montoGrupoArt+=corte[i].monto;
	}
	//
	*montoTotal+=montoGrupoArt;
	printf("\t\t\t%d\t\t\t%d\n",corte[inicio].grupo_art,montoGrupoArt);
}

