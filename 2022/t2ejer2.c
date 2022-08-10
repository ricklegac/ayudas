#include<stdio.h>
int main(){
	int edad;
	char sexo;
	float nivel_h;
	int opt;
	int positivo =0 ;
	printf("tiene menos de 1 anho de edad? 0: si 1: no ");
	scanf("%d",&opt);
	if(opt==0){
		printf("ingrese los meses del paciente: ");
		scanf("%d",&edad);
		printf("ingrese nivel de hemoglobina: ");
		scanf("%f",&nivel_h);
		if(edad<=1){
			if(nivel_h<13) positivo = 1;
		}else if(edad > 1 && edad <=6 ){
			if(nivel_h <10 ) positivo = 1 ;
		}else if(edad>6 && edad <=12){
			if(nivel_h<11) positivo =1 ;
		}
	}else{
		printf("ingrese los anhos del paciente: ");
		scanf("%d",&edad);
		printf("ingrese nivel de hemoglobina: ");
		scanf("%f",&nivel_h);
		printf("ingrese sexo del paciente: f: femenino, m: masculino ");
		scanf("%c",&sexo);
		if(edad>1 && edad<=5){
			if(nivel_h < 11.5 ) positivo =1;
		}else if(edad >5 && edad <=10 ){
			if(nivel_h < 12.6) positivo = 1;
		}else if(edad > 10 && edad <=15){
			if(nivel_h<15.5) positivo =1;
		}else if(edad>15){
			if(sexo=='f'){
				if(nivel_h<12) positivo =1 ;
			}else{
				if (nivel_h<14) positivo =1;
			}
		}
	}
	if(positivo){
		printf("tiene anemia!");
	}else{
		printf("no tiene anemia! ");
	}

	return 0;
}