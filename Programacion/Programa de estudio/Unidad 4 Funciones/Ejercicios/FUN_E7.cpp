//	El maximo común divisor de dos enteros es el entero mas grande que divide de forma uniforma a los dos números. 
//Escriba una funcion GCD que regrese el maximo comun divisor.


#include<stdio.h>

int GCD(int , int);

int main()
{
	int numero1, numero2;
	
	printf("\n\t       MAXIMO COMUN DIVISOR DE DOS NUMEROS");
	
	printf("\n\n\tINGRESE NUMERO: ");
	scanf("%d",&numero1);
	
	printf("\n\tINGRESE OTRO NUMERO: ");
	scanf("%d",&numero2);
	
	printf("\n\n=============================== SALIDA =========================================");
	
	printf(" \n\t\tMCD(%d,%d) = %d",numero1, numero2, GCD(numero1, numero2));
	
	printf("\n\n");
	
}

int GCD(int numero1, int numero2)
{
	do
	{
		if(numero1 < numero2)
			numero2 -= numero1;
		else
			numero1 -= numero2;
	}
	
	while(numero1 != numero2);

	return numero1;

}
