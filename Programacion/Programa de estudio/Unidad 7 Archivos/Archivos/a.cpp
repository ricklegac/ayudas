/*
 *			
 * 
 *	Tarea Nro. 6 - Ejercicio 2
 */


#include <stdio.h>
#include <string.h> 
#include <math.h>
#include <stdbool.h>

void corteCedula(int ,int ,struct alumno *);

struct alumno{
	int Cedula;
	int fecha_ex; 
	char asig[15]; 
	int nota; 		
};

int main(){
	FILE *carrera;
	int i,j;
	int cont=0;
	char c;
	
	if ((carrera=fopen("Carrera.txt","r"))==NULL){
		
		printf ("\n\tError en archivo");
		return 0;
	
	}else{
		printf("\n\tEl Archivo ha sido leido con exito\n");	
	} 

	c=fgetc(carrera);
	
	while(!feof(carrera)){
		if(c=='\n'){
			cont++;
		}
		c=fgetc(carrera);
	}
	cont--;
	
	printf ("\t%d\n",cont);
	rewind(carrera);
	struct alumno alumnos[cont];
	
	for (i=0;i<cont;i++){
		fscanf (carrera,"%d\t%d\t%s\t%d",&alumnos[i].Cedula,&alumnos[i].fecha_ex,&alumnos[i].asig,&alumnos[i].nota);
	}
	
	//ORDENAR REGISTRO	
	printf("\n\tPor custiones parcticas se cargaron\n\t las notas de 3 alumnos\n\tusamos la funcion ceil() para el redondeo por exeso");
	printf("\n\n\tORDENADO POR CI: \n");

	for(i=0;i<cont;i++){
		
		printf("\n\t%d\t%d\t%s\t%d",alumnos[i].Cedula,alumnos[i].fecha_ex,alumnos[i].asig,alumnos[i].nota);
		
	}
	
	int cedula=alumnos[0].Cedula;
	int cont1=1;
	int inicio=0;
	//AHORA HACEMOS EL CORTE
	//CORTE UNO
	//Imprimir cuantos días, en promedio, se retrasan los alumnos en devolver los materiales

	printf("\n\n\tCEDULA\t\tFRECUENCIA DE NOTAS\t\tPROM");
	printf("\n\t\t(A)  (0)  (1)  (2)  (3)  (4)  (5)");
	printf("\n\t..................................................");
	while(cont1!=(cont+1)){
		
		if(alumnos[cont1].Cedula!=cedula){
			
			corteCedula(cont1,inicio,alumnos);
			cedula=alumnos[cont1].Cedula;
			inicio=cont1;
		
		}
		
		cont1++;
	}

	return 0;
}


void corteCedula(int fin,int inicio ,struct alumno *corte){
	int i; 
	int nota; 
	double sumaNotas=0,contNotas=0;
	int ausente=0,cero=0,uno=0,dos=0;
	int tres=0,cuatro=0,cinco=0;
	
	for(i=inicio;i<fin;i++){
		
		nota=corte[i].nota;	
		switch(nota){
			case -1:
				ausente++;
				break;
			case 0:
				cero++;
				break;
			case 1:
				uno++;
				break;
			case 2:
				dos++;
				break;
			case 3:
				tres++;
				break;
			case 4:
				cuatro++;
				break;
			case 5:
				cinco++;
				break;
		}
		if(nota>0){
			sumaNotas+=(double)(nota);
			contNotas++;
		}
	}
	printf("\n\t%d\t %d    %d    %d    %d    %d    %d    %d\t%0.2lf",corte[inicio].Cedula,ausente,cero,uno,dos,tres,cuatro,cinco,ceil(sumaNotas/contNotas));
	
}
