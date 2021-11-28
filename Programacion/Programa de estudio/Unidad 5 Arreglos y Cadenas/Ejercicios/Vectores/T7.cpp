
//Escribir un programa que indique si un vector de dimensión n está en cuanto a sus
//elementos de manera creciente, decreciente, constante o ninguno.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n=0;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int i=0;
	int z=0;
	printf("\nIngrese la dimension del vector: ");
	scanf("%d",&n);
	int V[n];
	srand(time(NULL));
	printf("\nElementos del vector: ");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&a);
		V[i]=a;
		
	}
	for(i=0;i<(n-1);i++)
	{
		if(V[i]<V[i+1])
		{
			z++;
		}
	}
	
	for(i=0;i<(n-1);i++)
	{
		if(V[i]>V[i+1])
		{
			b++;
		}
	}
	
	for(i=0;i<(n-1);i++)
	{
		if(V[i]==V[i+1])
		{
			c++;
		}
	}
		
		
	
	if(z==(n-1))
	{
		printf("\nEl vector esta de manera creciente en cuanto a sus elementos.");
	}
	else if(b==(n-1))
	{
		printf("\nEl vector esta de manera decreciente en cuanto a sus elementos.");
	}
	else if(c==(n-1))
	{
		printf("\nEl vector esta de manera constante en cuanto a sus elementos.");
	}
	else
	{
		printf("\nEl vector esta desordenado.");
	}
return 0;
}
