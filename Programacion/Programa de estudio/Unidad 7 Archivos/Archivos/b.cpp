/*
 *
 *	Ejercicio 2
 */

#include <stdio.h>
#include <string.h> 
#include <math.h>
#include <stdbool.h>

void ordenar(int ,struct material * );
int corteCodigo(int ,int ,struct material *);
int contRetr(int ,int ,struct material *);
int pasarADias(int );

struct material{
	int Cod_mat;
	int TipoMov; 
	int Fecha; 
	int Hora; 
	int Dias_prest;
	
};

int main(){
	FILE *libros;
	int i,j;
	int cont=0;
	char c;
	
	if ((libros=fopen("Material.txt","r"))==NULL){
		
		printf ("Error en archivo");
		return 0;
	
	}else{
		printf("\tEl Archivo ha sido leido con exito\n");	
	} 

	c=fgetc(libros);
	
	while(!feof(libros)){
		if(c=='\n'){
			cont++;
		}
		c=fgetc(libros);
	}
	
	printf ("\t%d\n\t",cont);
	rewind(libros);
	struct material materiales[cont];
	
	for (i=0;i<cont;i++){
		fscanf (libros,"%d\t%d\t%d\t%d\t%d",&materiales[i].Cod_mat,&materiales[i].TipoMov,&materiales[i].Fecha,&materiales[i].Hora,&materiales[i].Dias_prest);
	}
	printf("\n\tPor cuestiones practicas se cargaron en \n\tel archivo 17 moviminetos \n\tdesordenados por codigo y ordenados por fecha");
	
	//ORDENAR REGISTRO	
	ordenar(cont, materiales);
	
	printf("\n\n\tLO ORDENAMOS POR CODIGO");
	printf("\n\n\tORDENADO POR CODIGO DE LOS MATERIALES ES: ");
	for(i=0;i<cont;i++){
		
		printf("\n\t%d\t%d\t%d\t%d\t%d",materiales[i].Cod_mat,materiales[i].TipoMov,materiales[i].Fecha,materiales[i].Hora,materiales[i].Dias_prest);
		
	}
	
	//AHORA HACEMOS EL CORTE
	int suma=0;
	int cont1=1;
	float cont2=0;
	int inicio=0;
	int codigo=materiales[0].Cod_mat;
	float diasRetraso=0;
	float contDiasRet=0;
	int cantMateialesNoDevuetos=0;
	//CORTE UNO
	//Imprimir cuantos días, en promedio, se retrasan los alumnos en devolver los materiales
	while(cont1!=(cont+1)){
		
		if(materiales[cont1].Cod_mat!=codigo){
			
			if((cont1-inicio)%2==0){
			
				diasRetraso+=(float)corteCodigo(cont1,inicio,materiales);
				contDiasRet+=(float)contRetr(cont1,inicio,materiales);
				codigo=materiales[cont1].Cod_mat;
			
			}else{
				diasRetraso+=(float)corteCodigo(cont1-1,inicio,materiales);
				contDiasRet+=(float)contRetr(cont1-1,inicio,materiales);
				codigo=materiales[cont1].Cod_mat;
				cantMateialesNoDevuetos++;
				
			}
			inicio=cont1;
		}
		if(materiales[cont1].Hora>1159){
			cont2++;
		}
		cont1++;
	}
	
	if(diasRetraso==0 && contDiasRet==0){
		printf("\n\n\tEl promedio de retraso es: %0.2f",0);
	}else{
	
		printf("\n\n\tEL PROMEDIO DE RETRASO ES: %0.2f",(diasRetraso/contDiasRet));
	}
	//Imprimir la cantidad de materiales que están prestados, es decir, no se devolvieron aun.
	
	printf("\n\n");
	printf("\tCANTIDAD DE MATERIALES NO DEVUELTOS: %d",cantMateialesNoDevuetos);
	printf("\n\n\tEL PORCENTAJE DE MOVIMIENTO DESPUES DE LAS 12:00HS ES: %0.2f%s",((cont2/(float)(cont))*100),"%");
	return 0;
}


int corteCodigo(int fin,int inicio ,struct material *corte){
	int i; 
	int fecha1=pasarADias(corte[inicio].Fecha);
	int fecha2,diasPrestamo;
	int retraso=0;
	
	
	
	for(i=inicio+1;i<fin;i=i+2){
		
		
		fecha2=pasarADias(corte[i].Fecha);
		
		if( ((fecha2-fecha1)-corte[i-1].Dias_prest) !=0 ){
			diasPrestamo=corte[i-1].Dias_prest;
			retraso+=((fecha2-fecha1)-diasPrestamo);	
		
		}
		fecha1=pasarADias(corte[i+1].Fecha);
		//i++;
	}
	return retraso;
}


int pasarADias(int pasarFecha){
	
	int mes,dias;
	
	if(pasarFecha<=930){
		dias=(pasarFecha%100);
		mes=((pasarFecha-dias)/100)*30;
	}else{
		dias=(pasarFecha%1000);
		mes=((pasarFecha-dias)/1000)*30;
	}
	
	
	return (dias+mes);
}

int contRetr(int fin,int inicio ,struct material *corte){
	int i, fecha1=pasarADias(corte[inicio].Fecha),fecha2;
	int contRetrasos=0;
	
	for(i=inicio+1;i<fin;i=i+2){
		
		
		fecha2=pasarADias(corte[i].Fecha);
		
		if( ((fecha2-fecha1)-corte[i-1].Dias_prest) !=0 ){
			
			contRetrasos++;	
		
		}
		fecha1=pasarADias(corte[i+1].Fecha);
		
	}
	return contRetrasos;
}



void ordenar(int cont,struct material *materiales ){
     int i,j,aux;
     
      for(i=0;i<cont;i++){
		for(j=0;j<cont;j++){
			if(materiales[j].Cod_mat>materiales[j+1].Cod_mat){
				
	
				aux = materiales[j].Cod_mat;
				materiales[j].Cod_mat = materiales[j+1].Cod_mat;
				materiales[j+1].Cod_mat = aux;
			
				aux = materiales[j].TipoMov;
				materiales[j].TipoMov = materiales[j+1].TipoMov;
				materiales[j+1].TipoMov = aux;
		
				aux = materiales[j].Fecha;
				materiales[j].Fecha = materiales[j+1].Fecha;
				materiales[j+1].Fecha = aux;
		
		
				aux = materiales[j].Hora;
				materiales[j].Hora = materiales[j+1].Hora;
				materiales[j+1].Hora = aux;
		
		
				aux = materiales[j].Dias_prest;
				materiales[j].Dias_prest = materiales[j+1].Dias_prest;
				materiales[j+1].Dias_prest = aux;
			
			}
		}
	}

}
