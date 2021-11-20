#include <stdio.h>
#include<stdlib.h>
#define max 1000
typedef struct puntajes{
	int cod_alum;
	int prom_parc;
	int exam_fin;
	int nota;

}p;
typedef struct Alumnos{
	int cod_alum;
	int cod_exam;
	int puntaje;

}a;
int main(){
	/*
		DECLARACIONES
	*/
	int cont=0;
	int i;
	int c=0,final;
	int p1,p2,p3,finalcont =0,ban1=0,ban2=0,ban3=0,menor;
	a persona [max];
	p notas [max];
	int inicial = persona[0].cod_alum;
	FILE *fp=fopen("archivo.txt","r");
	/*SI NO ENCONTRAMOS EL ARCHIVO SALIMOS DEL PROGRAMA.*/
	if(fp==NULL){
		perror("no se encontro el archivo");
		return 1;
	}
	/*
		LECTURA DESDE EL ARCHIVO
	*/
	for(i=0 ; i<max ; i++){
		fscanf(fp,"%d\t%d\t%d", &persona[i].cod_alum, &persona[i].cod_exam, &persona[i].puntaje);	
		c++;										
		if( persona[i].cod_exam == -1  ){	//CONDICION DE SALIDA						
			break;	
		}
	}
	/*
		VOLVEMOS A RECORRER PERO AHORA LA ESTRUCTURA,
		c nos indica la cantidad de filas, para no llenar el array de 1000 elementos 
	*/
	for(i=0 ; i<c ; i++ ){
		if( persona[i].cod_exam == 1 && ban1==0){
			p1 = persona[i].puntaje;			
			ban1 = 1;					
		}else if( persona[i].cod_exam == 1 && ban2==0){
			p2 = persona[i].puntaje;		
			ban2 = 1;					
		}else if( persona[i].cod_exam == 1 && ban3==0 ){
			p3 = persona[i].puntaje;			
			ban3 = 1;					
		}else if( persona[i].cod_exam == 2 ){
			final = persona[i].puntaje;
		}
		/*

			USAMOS ESTA FORMA PORQUE SABEMOS QUE NUESTRO ARCHIVO ESTA ORDENADO POR CODA

		*/
		if( persona[i+1].cod_alum != inicial ){		
			notas[cont].cod_alum = persona[i].cod_alum;
			notas[cont].exam_fin = final;
			if(ban3==1){
				menor=p1;
				if(p2<menor){
					menor = p2;
				}
				if(p3<menor){
					menor = p3;
				}
				if(p1 == menor){
					notas[cont].prom_parc = (p2+p3)/2;
				}
				else if(p2 == menor){
					notas[cont].prom_parc = (p1+p3)/2;
				}
				else{
					notas[cont].prom_parc = (p1+p2)/2;
				}	
			}else{
				notas[cont].prom_parc = (p1+p2)/2;
			}
			/*
				UTILIZAMOS ESTE METODO PARA CALCULAR LA NOTA 
			*/
			notas[cont].nota = (0.6*notas[cont].prom_parc) + (0.4*notas[cont].exam_fin);		

			/*
				GUARDAMOS EN EL VECTOR SEGUN LA POSICION QUE OCUPA EN CONTADOR DE NOTAS, PARA UNA MEJOR IMPRESION
			*/
			if(notas[cont].nota > 95){
				notas[cont].nota = 5;
			}
			else if(notas[cont].nota > 76){
				notas[cont].nota = 4;
			}
			else if(notas[cont].nota > 61){
				notas[cont].nota = 3;
			}
			else if(notas[cont].nota >50){
				notas[cont].nota = 2;
			}
			else{
				notas[cont].nota = 1;
			}

			ban1=ban2=ban3=0;												
			cont++;					
			inicial = persona[i+1].cod_alum;
		}
	}
	
	
	printf("\n");
	printf("Nro alumno\tProm. Parc\tExam. Final\tNota Final\n");
	for(int i = 0 ; i<cont-1 ; i++){
		printf("%d\t\t%d\t\t%d\t\t%d\n", notas[i].cod_alum, notas[i].prom_parc, notas[i].exam_fin, notas[i].nota );
	}
	
	return 0;
}


