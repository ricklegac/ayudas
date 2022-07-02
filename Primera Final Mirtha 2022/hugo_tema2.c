#include<stdio.h>
#include<math.h>

int ausencias(int vec[100]);
int descalificado_fraude(int vec[100]);
int main(){
	//DECLARACIONES
	int vec[100],i, cont=0;
	printf("Ingrese los rangos de notas:\n");
    //INGRESO DE VALORES CON VALIDACION 
	for(i=0 ; i<100 ; i++){
		scanf("%d",&vec[i]);	
		while(vec[i]>100){
			printf("nota no valida, vuelva a ingresar");
			scanf("%d",&vec[i]);	
		}
	}
    //IMPRESIONES DE RANGOS DADOS POR EL USUARIO: 
    float prom;
	for(i=0 ; i<100 ; i++){
		printf("%d",vec[i]);
	 	if(i%2 != 0){
	 		prom=(vec[i-1]+vec[i])/2;
            printf(" promedio = %f",prom);
			if(prom>59){
				printf(" rango promedio mayor a 59");
                cont++;
			}else{
				printf(" rango menor o igual a 59");
			}
	 		printf("\n");
		 }else{
			printf(" - "); 	
		 }	
	}
    //impresion de alumnos que habilitaron
    printf("Cantidad de alumnos que habilitaron examen final: %d\n",cont);
    printf("Cantidad de alumnos que no habilitaron examen final %d\n",abs(50-cont));
	printf("Cantidad de ausentes %d ", ausencias(vec));
	printf("Cantidad alumnos descalificados por fraude: %d", descalificado_fraude(vec));
	
return 0;
}
//aca lo unico que tomamos es si hay una nota cero y ya sabemos que tiene ausencia
int ausencias(int vec[100]){
	int i,cont=0;
	for(i=0 ; i<100 ; i++){
		if(vec[i]==0){
			cont++;
		}
	}
	return cont;
}

// notas negativas
int descalificado_fraude(int vec[100]){
	int i,cont=0;
	for(i=0 ; i<100 ; i++){
		if(vec[i]<0 || vec[i+1]<0){
			cont++;
		}
	}
	return cont;
}
