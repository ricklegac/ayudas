/*5. La moda en datos no agrupados es el valor que se repite más en un
conjunto de datos. Dado el tamaño n ingresado para un arreglo A con
algunos valores de cada posición repetidos. Encontrar la moda para el
conjunto de datos almacenados en la matriz.*/

#include<stdio.h>

int main ()
{
	int n=0;
	printf("\nIngrese la dimension de la matriz: ");
	scanf("%d",&n);
	int A[n][n];
	int d=0;
	int mayor=0;
	int pos=0;
	d=n*n;
	int cant_veces[n][n];
	int i=0;
	int j=0;
	int pos1=0;
	int pos2=0;
	printf("\nIngrese los elementos de la matriz:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nLa matriz es: ");
	
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("\t%d",A[i][j]);
		}
		printf("\t");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(A[i][j]==A[i][j+1])
			{
			
				cant_veces[i][j]++;
			}
		}
		
	}
	
	mayor=cant_veces[0][0];
for (i = 0; i < n; i++) 
{  
	for(j=0;j<n;j++)
	{
		if (mayor < cant_veces[i][j]) 
		{
			mayor=cant_veces[i][j];
    		pos1=i;
    		pos2=j;
		}
	}

}
 
  printf("\nLa moda para el conjunto de datos es:%d ",A[pos1][pos2]);
  
	
}
