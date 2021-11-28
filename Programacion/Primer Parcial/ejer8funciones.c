#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define MAX 100 
//prototipos
int validar(int n);
void encontrar(int n);
void cercanos(int vecr[], int n, int cant);
void burbuja(int n[], int size);
int main(){
    int n;
    printf("ingresar un numero entre 0 y 100: \n");
    scanf("%d",&n); //lectura simple
    encontrar(validar(n));//funcion concatenada, una de encontrar el valor y otra de validar
    return 0;
}


int validar(int n){//validamos que el numero este entre 0 y 100
	int aux=n;
    while(aux<=0 || aux>=100){ //porque dice entre 0 y 100 el enunciado
		printf("ingrese un numero entre 0 y 100: \n");
		scanf("%d",&aux);//releemos hasta que ingrese un correcto
	}
    return aux; //retorna el valor correcto
}
void encontrar(int n){//encontramos la coincidencias
	srand(time(NULL));//semilla 
	int vecr[70]={0}; //planteo de vector despues de ver los ejercicios de los compas
	int i,encontrados=0; //i un incrementador y encontrados un acumulador
	int random; //donde guardamos los valores random
	for(i=0;i<70;i++){
		random=rand()%100; //este esta demas por ahora, ya que al final use vectores
		vecr[i]=rand()%100; //aca mientras los compañeros hacian vi que podia usar vectores
		printf("%d ", random);
		if(random==n){ //si es igual acumula la cantidad de veces encontradas
			encontrados++;
		}
		//aca al comienzo no use vectores
	}
	printf("\n---------------------------------------------");
	if(encontrados==0){//si no encuentra un valor igual
		printf("\n\nno se encontro ningun numero igual a %d\n",n);
		cercanos(vecr,n,70); //funcion para encontra el cercano
	}else{
		printf("\n\nel numero %d se encontro %d veces", n, encontrados);	
	}
	burbuja(vecr,70); //para ordenar, busque
}



void cercanos(int vecr[], int n, int cant){
	int i,cerca=0;
	int diferencia=MAX;  //la mayor diferencia de numeros es de 100, ya que el random 0-100
	for(i=0;i<cant;i++){
		if(abs(vecr[i]-n)<diferencia){
			cerca=vecr[i]; //guardamos el numero mas cercano
			diferencia = vecr[i]-n; //buscamos que la diferencia con n siempre sea menor
		}
	}
	//para la parte c encontre solo el mas cercano, para encontra mayor y menor
	//podia hacer con algun metodo de desviacion estandar o algo asi
	// o crear un vector donde se le incluya al numero y ordenar
	//si asi es, pero no me dio el tiempo 
	int contcerca=0;
	for(i=0;i<cant;i++){
		if(vecr[i]==cerca){
			contcerca++; //incrementamos la cantidad de veces que aparece el numero mas cercano
		}
	}
	printf("el numero mas cercano: %d y se encontro %d veces", cerca, contcerca);
	//aca no encontre el mayor y el menor, pero con algun algoritmo de 
	//desviacion estandar podia encontrar. 
} 
//gracias profe
//dale profe sin problema, vere soluciion
//tambien
//el driver me dijeron

void burbuja(int n[], int size) //ordenamiento burbuja
{
	int i,j;
	int aux;
	for(i=1; i<size; i++){
		for(j=0; j<size-i; j++){
			if(n[j]>n[j+1]){
			    aux=n[j+1];
				n[j+1]=n[j];
				n[j]=aux;
			}
		}
	}
	//una vez ordenado es facil, imprimimos el primero y ultimo del array, ya que
	//sabemos que el tamaño maximo es validado en 70
	printf("\nel menor: %d\nel mayor: %d", n[0],n[size-1]);
}
