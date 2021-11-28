#include<stdio.h>
#include<math.h>
/*
Maria Salome Villasanti Molinas
*/
int calculo_de_puntaje(float R); //funcion que calcula el puntaje
void leer_datos(int a , int b); //para tener un main mejor visto todo se trabaja dentro de la funcion leer_datos()
void rpromedio(float R_prom); //funcion promedio
int main(){
	int a,b;
	leer_datos(a,b);
return 0;
}

void leer_datos(int a , int b){
    float R,promR,Rcont; //declaracion de variables
	int ciclo=1,tiro,puntaje,acumulado=0,cal,cont_p=0;

	while(ciclo<=5){ //5 tiros que metemos dentro de un while
        printf("Tir.\ta\tb\n");
		scanf("%d",&tiro);
		scanf("%d",&a);
		scanf("%d",&b);
		R=sqrt((a*a)+(b*b));
		puntaje=calculo_de_puntaje(R);
		acumulado=acumulado+puntaje; //sumamos el acumulado (acumulador)
		cont_p=cont_p+puntaje; //contador de puntaje (acumulador)
		Rcont=Rcont+R; //acumulador de R = sqrt()
		ciclo++;
		/*
		ACA PODIAMOS LEER CON RANDOM PARA QUE SEA MAS FACIL LA CORRECCION PERO NO FUE REQUERIDO
		*/
	}
	promR=Rcont/5; //calculo de promedio
	printf("Tirador\tPuntaje\tR.Prim\tCalificacion:\n--------------------------------------------\n");
	printf("%d\t%d\t%f\t",tiro,cont_p,promR);
	rpromedio(promR);

}

void rpromedio(float R_prom){ //CALCULO DE R PROMEDIO
    if(R_prom>0 && R_prom<=1){
		printf("Centro\n");
	}else if(R_prom>1 && R_prom<=5){
		printf("Media\n");
	}else if(R_prom>5 && R_prom<=10 ){
		printf("Externa\n");
	}else{
		printf("Falla\n");
	}
}


int calculo_de_puntaje(float R){ //CALCULO DE PUNTAJE
  if(R>0 && R<=1){
        return 10;
    }else if(R>1 && R<=5){
        return 5;
    }else if(R>5 && R<=10){
        return 1;
    }else{
        return 0;
    }
}
