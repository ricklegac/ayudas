/*Dado un arreglo de n elementos, un numero s de elementos que serán añadidos al
vector, de acuerdo a las posiciones i indicadas por el usuario. El programa debe crear e
imprimir el nuevo vector con los nuevos elementos en las posiciones indicadas por el
usuario.*/

#include<stdio.h>
int main()
{
	int n=0;
	printf("\n*Ingrese la dimension del vector: ");
	scanf("%d",&n);
	
	int A[n];
	int i=0;
	int p=0;
	int a=0;
	while(p<n)
	{
		printf("\n*En que posicion desea anadir el elemento?");
		scanf("%d",&i);
		while(i>=n)
		{
			printf("\nPosicion no disponible en el arreglo. Vuelva a introducir otra posicion: ");
			scanf("%d",&i);
		}
		printf("\n*Ingrese dicho elemento: ");
		scanf("%d",&a);
		A[i]=a;
		printf("\nA");printf("[");printf("%d",i);printf("]");printf("=");printf(" %d",A[i]);
		printf("\n");
		p++;
	}
	printf("\n\n*El vector es: ");
	for(i=0;i<n;i++)
	{
		printf("\nA");printf("[");printf("%d",i);printf("]");printf("=");printf(" %d",A[i]);
	}
}
