/* Dado el vector con n elementos. Si n es par invertir los elementos de la primera mitad
del vector. Imprimir el nuevo vector. */
#include<stdio.h>
#include<conio.h>
int main (){
	int i,n,j=0;
	int aux;
	printf("Ingrese numero de elementos p/ el array : ");
	scanf("%i",&n);
	if(n%2==0){
		int vect[n];
		printf("\nSe carga elemmentos en el array : ");
		for(i=0;i<n;i++){
			printf("\nElemento %i : ",i+1);
			scanf("%i",&vect[i]);
		}
		while( ((n-1)/2)-j > j){
			aux=vect[j];
			vect[j]=vect[((n-1)/2)-j];
			vect[((n-1)/2)-j]=aux;
			j++;
		}
		for(i=0;i<n;i++){
			printf("%i ",vect[i]);
		}
	}
	else{
		printf("\nIntroduzca un valor par como numero de elementos p/ el array ");
	}
	getch();
	return 0;
}
