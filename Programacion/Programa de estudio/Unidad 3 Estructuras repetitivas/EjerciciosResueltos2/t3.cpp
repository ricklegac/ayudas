/* Leer un número X por teclado, leer luego una serie de N números y determinar la posición del
número X en esa serie. */
#include<stdio.h>
#include<conio.h>
int main(){
	int x,n,i;
	int numero,pos;
	printf("Ingrese un numero x : ");
	scanf("%i",&x);
	printf("\nIngrese numero N (numero de elementos de la serie) : ");
	scanf("%i",&n);
	i=1;
	while(i<=n){
		printf("\nIngrese un numero : ");
		scanf("%i",&numero);
		if(x==numero){
			pos=i;
		}
      i++;
	}
	printf("\nLa posicion del numero %i en la serie es : %i ",x,pos);
	getch();
	return 0;

}
