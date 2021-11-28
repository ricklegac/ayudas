/*3. Generar la siguiente matriz de orden N x N (sólo para valores impares de
N y mayores que 3).*/
	

#include<stdio.h>
int main()
{
	int N=0;
	int i=0;
	int j=0;
	int k=0;
	printf("\nIngrese el orden de la matriz: ");
	scanf("%d",&N);
	while(N%2==0 || N<=3 || N==0)
	{
		printf("\nEl valor de N debe ser impar y mayor a 3. Vuelva a introducir otro valor: ");
		scanf("%d",&N);
	}
	int A[N][N];
	
	//1er paso
	for(i=0;i<N;i++)
	{
		A[i][0]=4;
	}
	//2do paso
	for(i=0;i<N;i++)
	{
		A[i][N-1]=4;
	}
	//3er paso
	for(j=1;j<(N-1);j++)
	{
		A[0][j]=1;
	}
	//4to paso
	for(j=1;j<(N-1);j++)
	{
		A[N-1][j]=1;
	}
	//5to paso
	for(i=1;i<(N-1);i++)
	{
		A[i][1]=4;
	}

	//6to paso
	for(i=1;i<(N-1);i++)
	{
		A[i][((N-1)/2)+1]=4;
	}
	//7mo paso
	k=((N-1)/2)-1;
	for(i=0;i<N;i++)
	{
		A[i][(N-1)/2]=1;
	}
	//8vo paso
	for(j=0;j<N;j++)
	{
		A[(N-1)/2][j]=4;
	}
	//SE IMPRIME LA MATRIZ
	for(i=0;i<N;i++)
	{
		printf("\n");
		for(j=0;j<N;j++)
		{
			printf("\t%d",A[i][j]);
		}
		printf("\t");
	}
}
