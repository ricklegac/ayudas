#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int n,m;

	FILE * fp = fopen("N.txt","r");	//Abrimos el archivo que contiene la anchura
	if(fp==NULL){				// Si no se encuentra el archivo, mandamos un error
		perror("No se encontro el archivo");
		return 1;
	}					// Sino hay error, proseguimos
	
	fscanf(fp,"%d",&n);	//leemos los registros
	fclose(fp);		//Cerramos el archivo
	if(n%2==0){
		printf("\tN es par, reescriba el archivo con un numero impar\n");
		return 1;
	}
	

	fp = fopen("M.txt","r");	//Abrimos el archivo que contiene los pasos del borracho
	if(fp==NULL){				// Si no se encuentra el archivo, mandamos un error
		perror("No se encontro el archivo");
		return 1;
	}					// Sino hay error, proseguimos
	
	fscanf(fp,"%d",&m);	//leemos los registros
	fclose(fp);		//Cerramos el archivo
	if(m>100){
		printf("\tM es mayor a 100, reescriba el archivo con un numero M>=100\n");
		return 1;
	}
	
	
	int inicio = (n+1)/2;
	int actual;
	int paso;
	int pasos_dados = 0;
	
	
	int x;
	int meta;	//Contador de veces que dio los 100 pasos
	printf("Ingrese el valor de X:");
	scanf("%d",&x);		// Escaneamos el numero de veces que repetiremos el experimento
	
	//Generaremos el camino mientras no lleguemos a los extremos ni sobrepasemos los pasos que dicta la variable M
	
		srand (time(NULL));
	for(int zzz=0 ; zzz<x ; zzz++){		//Repetimos el experimento X veces
		actual = inicio;
		do{
			paso = rand() % 3 + 1;
			
			if( paso==1 ){
				actual -= 1;		// si sale 1, el borracho tambalea a la izquierda
			}
			else if( paso==3 ){		// Si sale 3, el borracho tambalea a la derecha
				actual += 1;	
			}				// Si sale 2, camina recto
			
			if(actual < 1){
				actual = 1;		
				fprintf(fp,"%d\n",actual);
			}
			else if(actual>n){
				actual = 15;		
				fprintf(fp,"%d\n",actual);
			}else{	
				fprintf(fp,"%d\n",actual);
			}
			pasos_dados++;
		
		}while( actual>1 && actual<n && pasos_dados<m);
		
		if(pasos_dados>=100){
			meta++;		// Si se cumplen los 100 pasos, sumamos el contador 
		}
		pasos_dados=0;			// Volvemos a inicializar los pasos dados
	}

	printf("\n\nCantidad de veces que se llego a la meta: %d\n",meta);
	printf("La probabilidad de llegar a la meta es: %.2f\n",(float)meta/x);

return 0;
}
