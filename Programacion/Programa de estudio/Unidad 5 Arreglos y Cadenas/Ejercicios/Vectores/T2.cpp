//Dado un array de dimensión n como entrada, contar las ocurrencias de cada elemento
//en el vector e imprimirlas.


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n=0;
	int i=0;
	int a=0;
	int j=0;

	printf("\nIngrese la dimension del vector: ");
	scanf("%d",&n);
	int vec[n];
	int cant_veces[n]={};
	srand(time(NULL));
	printf("\nElementos del vector: ");
	for(i=0;i<n;i++)
	{
		a=1+rand()%10;
		vec[i]=a;
		printf("\n%d",i);printf(") ");printf(" %d",vec[i]);
	}
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{
			if(vec[i]==vec[j])
			{
				cant_veces[i]++;
				
			}	
		}
		printf("\nEl elemento %d ",vec[i]);printf(" aparece %d ",cant_veces[i]);printf(" veces");	
	}
	
	return 0;	
}
