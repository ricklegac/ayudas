/*Calcular el menor elemento en una serie de N números.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int menor,ban,numero;
	char num[10];
	printf("\n\n\tMENOR DE LA SERIE DE NUMEROS");
	printf("\n\n\tIngrese un numero entero: ");
	scanf("%s",&num);
	menor=atoi(num);
	numero=atoi(num);
	do{
		numero=atoi(num);
		if(numero<menor ){
			menor=numero;
		}
		printf("\n\n\tIngrese un numero entero o ingrese 'a' para terminar: ");
		scanf("%s",&num);	
	}while(strcmp(num,"a")!=0);
	printf("\n\n\tEL MENOR NUMERO DE LA SERIE ES: %d\n\n\n",menor);
	system("PAUSE");
	return 0;
}
