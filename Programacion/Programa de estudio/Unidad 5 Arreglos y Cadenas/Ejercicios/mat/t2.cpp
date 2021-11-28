/*Lea una matriz de N x M y a continuación:
a) Elimine la fila x, la columna y.
b) Inserte una nueva fila en la posición y.
Recordar hacer todos los desplazamientos necesarios. Considerando
que la matriz ya está generada con datos.*/

#include<stdio.h>
int main()
{	
int N=0;
int M=0;
int i=0;
int j=0;
int x=0;
int y=0;
int a=0;
printf("\nIngrese la cantidad de filas de la matriz: ");
scanf("%d",&N);
printf("\nIngrese la cantidad de columnas de la matriz: ");
scanf("%d",&M);
int Mat[N][M];
printf("\nIntroduzca los valores de la matriz: ");
	for(i=0;i<N;i++)
	{
		
		for(j=0;j<M;j++)
		{
			scanf("%d",&Mat[i][j]);
			
		}
	}
	
	printf("\nLos elementos de la matriz son: ");
	for(i=0;i<N;i++)
	{
		printf("\n");
		for(j=0;j<M;j++)
		{
			printf("\t%d",Mat[i][j]);
		}
		printf("\t");	
	}
	
	printf("\nIngrese la fila que desea eliminar: ");
	scanf("%d",&x);
	printf("\nIngrese la columna que desea eliminar: ");
	scanf("%d",&y);
	
	printf("\na)La matriz con la fila y la columna eliminada es: ");
	for(i=0;i<N;i++)
	{
		printf("\n");
		for(j=0;j<M;j++)
		{
			if(i==x)
			{
				i++;
			}
			if(j==y)
			{
				j++;
			}
			printf("\t%d",Mat[i][j]);
		}
		printf("\t");
	}
	
	for(i=0;i<N;i++)
	{
		printf("\n");
		if(i==y)
		{
			printf("\nIngrese los valores para la nueva fila en la posicion y: ");
			for(j=0;j<M;j++)
			{
				scanf("%d",&Mat[i][j]);
			}	
		}
	}
	
	printf("\n\nb)La matriz con la nueva fila y insertada es: ");
	for(i=0;i<N;i++)
	{
		printf("\n");
		for(j=0;j<M;j++)
		{
			printf("\t%d",Mat[i][j]);
		}
		printf("\t");	
	}

}
