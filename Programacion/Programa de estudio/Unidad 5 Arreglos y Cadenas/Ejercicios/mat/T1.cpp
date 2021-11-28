/*1. Generar la siguiente matriz de orden N x N (sólo para valores impares de
N y mayores que 3).*/


#include<stdio.h>
#include<string.h>

main(){
	int M[200][200],a,b,c,x,i,j,N;
	
	printf("Ingrese el tamaño de la matriz: ");
	scanf("%d",&N);
	while(N%2==0 || N<=3 || N==0)
	{
		printf("\nEl valor de N debe ser impar y mayor a 3. Vuelva a introducir otro valor: ");
		scanf("%d",&N);
	}
	
	//LLENAR LA MATRIZ
	a=0;
	b=N;
	c=N*N; //CANTIDAD DE VALORES
	x=c;
	i=0;
	while(x>=1)
	{
		for(j=a;j<b;j++)
		{
			M[i][j]=x;
			x--;
		}
		for(i=a+1;i<b;i++)
		{
			M[i][j-1]=x;
			x--;
		}
		for(j=b-1;j>a;j--)
		{
			M[i-1][j-1]=x;
			x--;
		}
		for(i=b-1;i>a+1;i--)
		{
			M[i-1][j]=x;
			x--;	
		}
		a++;
		b--;
	}
	
	printf("La matriz caracol es: ");
	for(i=0;i<N;i++)
	{
		printf("\n");
		for(j=0;j<N;j++)
		{
			printf("\t");
			printf("%d",M[i][j]);
		}
	}
	
}
