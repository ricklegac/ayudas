/* Dado un array de dimensión n como entrada, contar las ocurrencias de cada elemento
en el vector e imprimirlas. */
#include<stdio.h>
#include<conio.h>
int main(){
	int i,n;
	printf("Ingrese dimensiones p/ el vector :  ");
	scanf("%i",&n);
	int vect[n];
	for(i=0;i<n;i++){
		printf("Elemento %i : ",i+1);
		scanf("%i",&vect[i]);
	}
	printf("\nEl vector es : ");
	for(i=0;i<n;i++){
		printf("%i ",vect[i]);
	}
	getch();
	return 0 ;
}
