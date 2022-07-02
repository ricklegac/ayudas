#include<stdio.h>
#include<stdlib.h>
#define MAX 100
//PROTIPO DE FUNCIONES
void imprimir_vector(int vec[MAX]){
int i;
float prom;
	for(i=0 ; i<MAX ; i++){
		printf("%d",vec[i]);
	 	if(i%2 != 0){ //cada vez que toque una columna impar tiene que comparar con la anterior
	 		prom=(vec[i-1]+vec[i])/2;
			if(prom>59) printf("Firma > 59");
			else printf("Firma <=50");
	 		printf("\n");
		 }else{
			printf(" - "); 	
		 }	
	}
}
//funcion que muestra si tiene o no derecho a examen final
void derechos_examenes(int vec[MAX]){
	int i,cont_si=0,cont_no=0;
	float prom;
	for(i=0 ; i<MAX ; i=i+2){
		prom=(vec[i]+vec[i+1])/2;
		if(prom>59){
			cont_si++;
		}else{
			cont_no++;
		}
	}
	printf("Cantidad de alumnos que habilitaron examen final: %d\n",cont_si);
	printf("Cantidad de alumnos que no habilitaron examen final: %d\n",cont_no);
}
void ausentes(int vec[MAX]){
	int i,cont=0;
	for(i=0 ; i<MAX ; i=i+2){
		if(vec[i]==0){
			cont++;
		}
	}
	printf("Cantidad de ausentes: %d\n",cont);
}
//al tener nota negativa es descalificado
void nota_negativa(int vec[MAX]){
	int i,cont=0;
	for(i=0 ; i<MAX ; i=i+2){
		if(vec[i]<0 || vec[i+1]<0){
			cont++;
		}
	}
	printf("Cantidad de descalificados: %d\n",cont);
}


int main(){
	//DECLARACIONES
	int vec[MAX],i;
	time_t t;
	//inicializamos los numeros random
	srand((unsigned) time(&t));
	//INGRESE LAS NOTAS AUTOMATICAMENTE PARA UNA MEJOR CORRECCION
	printf("Ingresando notas automaticamente.....\n");
	for(i=0 ; i<MAX ; i++) vec[i]=rand() % MAX;
	imprimir_vector(vec);
	derechos_examenes(vec);
	ausentes(vec);
	nota_negativa(vec);
	
return 0;
}


