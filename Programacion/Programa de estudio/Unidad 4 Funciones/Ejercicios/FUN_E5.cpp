//	UPor cada uno de los conjuntos siguiente de enteros escriba un solo enunciado que imprima el conjunto de números 
//2 4 6 8 10
//3 5 7 9 11
//4 6 10 14 18 22


#include<stdio.h>
// declaracion de funcion o prototipo 
void imprimir(int, int, int);

int main()
{
	printf("\n\t       SERIE DE NUMEROS");
	  
	printf("\n\n=============================== SALIDA ========================================");
	printf("\n\n\ta. ");
	imprimir(2,10,2);
	
	printf("\n\n\tb. ");
	imprimir(3,11,2);
	
	printf("\n\n\tc. 4 ");
	imprimir(6,22,4);
	
	printf("\n\n  ");
	  
	return 0;
}

void imprimir(int inicio, int final, int paso)
{
	int i = inicio;
	
	for( ; i <= final; i += paso)
	{
		printf("%d ",i);
	}
}
