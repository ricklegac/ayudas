/*4. Una compa��a tiene N sucursales en todo el pa�s. Se form� una matriz
de N por 12 que contiene las ventas de cada sucursal durante los 12
meses del a�o. Imprimir lo siguiente:
a) Total de ventas de la compa��a
b) Total de ventas por cada sucursal
c) Sucursal que m�s vendi� durante el a�o
d) Mes que menos vendi� la compa��a*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int N=0;
	int acu=0;
	int a=0;
	printf("\nIngrese el numero de sucursales en el pais: ");
	scanf("%d",&N);
	srand(time(NULL));
	int A[N][12];
	int i=0;
	int j=0;
	int ventas=0;
	int minimo=0;
	int mes_menor_v=0; //MES QUE MENOS SE VENDIO EN LA COMPA�IA 
	int sucursal_m=0; //SUCURSAL QUE MAS VENDIO
	int total_ventas=0;
	int mayor_ventas=0;
	int total_ventas_s[N];
	printf("\nIngrese las ventas de cada sucursal durante los 12 meses del a�o: ");
	for(i=0;i<N;i++)
	{
		printf("\n*Sucursal %d): ",i+1);
		printf("\n");
		for(j=1;j<13;j++)
		{
			printf("\nMes %d): ",j);
			scanf("%d",&a);
			A[i][j]=a;
		}
	}
	
	//TOTAL DE VENTAS DE LA COMPA�IA
	
	for(i=0;i<N;i++)
	{
		for(j=1;j<13;j++)
		{
			total_ventas=total_ventas+A[i][j];
		}	
	}
	
	//	TOTAL DE VENTAS POR CADA SUCURSAL
	
	for(i=0;i<N;i++)
	{
		
		for(j=1;j<13;j++)
		{
			acu=acu+A[i][j];
			total_ventas_s[i]=acu;
			if(j==12)
			{
				acu=0;
			}
		}	
		
	}
	
	//SUCURSAL QUE MAS VENDIO DURANTE EL A�O
	
	mayor_ventas=total_ventas_s[0];
	for(i=0;i<N;i++)
	{
		if(total_ventas_s[i]>mayor_ventas)		//VER PARA SACAR EL MAYOR NUMERO DE UN VECTOR
		{
			mayor_ventas=total_ventas_s[i];
			sucursal_m=i+1;
		}
	}
	
	//MES QUE MENOS VENDIO LA COMPA�IA
	ventas=A[0][0];
	for(i=0;i<N;i++)
	{
		for(j=1;j<13;j++)
		{
		
			ventas=A[i][j];
			if(ventas<minimo)
			{
				minimo=ventas;
				mes_menor_v=j;	
			}
		}
	}
	
	//SE IMPRIME 
	
	printf("\na)Total de ventas de la compa�ia: %d",total_ventas);
	printf("\nb)Total de ventas por cada sucursal: %d");
	for(i=0;i<N;i++)
	{
		printf("\t%d",total_ventas_s[i]);
	}
	printf("\nc) Sucursal que mas vendio durante el a�o: %d",sucursal_m);
	printf("\nd) El mes que menos vendio la compa�ia es: %d",mes_menor_v);
	
}
	

