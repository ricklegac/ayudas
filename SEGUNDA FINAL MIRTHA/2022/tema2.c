#include<stdio.h>

//PROTIPO DE FUNCIONES
void imprimir_rango(int vec[100]);
void cal_der_exam_final(int vec[100]);
void cal_der_exam_no_final(int vec[100]);
void ausente_primerP(int vec[100]);
void descalificado_fraude(int vec[100]);

int main(){
	int vec[100],i;
	//LECTURA DEL VECTOR
	printf("Ingrese los rangos de notas:\n");
	for(i=0 ; i<100 ; i++){
		scanf("%d",&vec[i]);
		//VALIDACIONES DE DATOS INGRESADOS
		while(vec[i]>100){
			scanf("%d",&vec[i]);	
		}
	}
	//LLAMADA A LAS FUNCIONES
	imprimir_rango(vec);
	cal_der_exam_final(vec);
	cal_der_exam_no_final(vec);
	ausente_primerP(vec);
	descalificado_fraude(vec);
	
return 0;
}

// Funcion que imprime rango de valores
void imprimir_rango(int vec[100]){
int i;
float prom;
	for(i=0 ; i<100 ; i++){
		printf("%d",vec[i]);
	 	if(i%2 != 0){
	 		prom=(vec[i-1]+vec[i])/2;
			if(prom>59){
				printf(" Si tiene derecho");
			}else{
				printf(" No tiene derecho");
			}
	 		printf("\n");
		 }else{
			printf(" - "); 	
		 }	
	}
}

// Calculo de los alumnos que lograron tener derecho a examen final (Promedio de notas >59)
void cal_der_exam_final(int vec[100]){
	int i,cont=0;
	float prom;
	for(i=0 ; i<100 ; i=i+2){
		prom=(vec[i]+vec[i+1])/2;
		if(prom>59){
			cont++;
		}
	}
	printf("Cantidad de alumnos que habilitaron examen final: %d\n",cont);
}

// Calculo de los alumnos que no lograron tener derecho a examen final (Promedio de notas <60)
void cal_der_exam_no_final(int vec[100]){
	int i,cont=0;
	float prom;
	for(i=0 ; i<100 ; i=i+2){
		prom=(vec[i]+vec[i+1])/2;
		if(prom<60){
			cont++;
		}
	}
	printf("Cantidad de alumnos que no habilitaron examen final: %d\n",cont);
}


// Calculo de alumnos estuvieron ausente en el primer parcial (Nota = 0)
void ausente_primerP(int vec[100]){
	int i,cont=0;
	for(i=0 ; i<100 ; i=i+2){
		if(vec[i]==0){
			cont++;
		}
	}
	printf("Cantidad de alumnos que estuvieron ausente en el primer parcial: %d\n",cont);
}

// Calculo de alumnos que fueron descalificados en un examen por fraude (Nota < 0)
void descalificado_fraude(int vec[100]){
	int i,cont=0;
	for(i=0 ; i<100 ; i=i+2){
		if(vec[i]<0 || vec[i+1]<0){
			cont++;
		}
	}
	printf("Cantidad de alumnos descalificados por fraude: %d\n",cont);
}
