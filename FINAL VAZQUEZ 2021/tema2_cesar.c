#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	/*INGRESO DE ELEMENOS, M Y N LO LEEMOS POR CONSOLA*/
	int n,m;
	printf("ingrese N y M: \n");
	scanf("%d %d",&n, &m);
	FILE *fr = fopen("tema2salida.txt", "w");
	while(n%2==0){
		printf("%d es un numero par, vuelve a ingresar: \n",n);
		scanf("%d",&n);
	}
	if(m>100){
		printf("\tM es mayor a 100, vuelve a ingresar\n");
		scanf("%d",&m);
	}
	/*DEFINIMOS EL INICIO Y CORROBORAMOS ANTES EL VALOR DE M Y N*/
	int inicio = (n+1)/2,paso,aux;
	int count_p = 0;
	int x;
	int meta;	
	/*VARIACION TEMA 1 PARA EL TEMA 2:*/
	printf("Ingrese el valor de X:");
	scanf("%d",&x);		
	srand (time(NULL));
	for(int q=0 ; q<x ; q++){		
		aux = inicio;
		do{
			paso = rand() % 3 + 1;
			if( paso==1 ){
				aux -= 1;		
			}
			else if( paso==3 ){		
				aux += 1;
			}				
			if(aux < 1){
				aux = 1;
				//fprintf(fr,"%d\n",aux);
			}
			else if(aux>n){
				aux = 15;
			}/*else{
				fprintf(fr,"%d\n",aux);
			}*/
			count_p++;

		}while( aux>1 && aux<n && count_p<m);

		if(count_p>=100){
			meta++;		//
		}
		count_p=0;			
	}
	/*MUCHOS FPRINTF NO SE NECESITO AQUI PARA EL TEMA 2, SOLO LA PROBABILIAD*/
	fprintf(fr,"\n\nCantidad de veces que se llego a la meta: %d\n",meta);
	fprintf(fr,"La probabilidad de llegar a la meta es: %.2f\n",(float)meta/x);
	printf("VERIFICAR EL ARCHIVO DE SALIDA \"tema2salida.txt\"\n");	
return 0;
}