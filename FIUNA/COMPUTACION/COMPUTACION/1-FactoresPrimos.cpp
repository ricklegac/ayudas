/*Lea un número entero y positivo, halle e imprima todos sus factores primos.*/
using namespace std;
#include<iostream>
main()
{
	float n;
	int i,j,c=0,aux;
	do
	{
		cout<<"ingrese un numero entero y positivo"<<endl;
		cin>>n;
	}while(n!=int(n) or n<=0);
	for(i=1;i<=n;i++)
	{
		if(int(n)%i==0)//busca un divisor
		{
			for(j=1;j<=i;j++)//verifica cuantos divisores tienee a su vez ese divisor
			{
				if(i%j==0)
				{
					c++;
				}
			}
			if(c==2)//si tiene 2 o menos es un divisor primo, este algoritmo considera al 1 como numero primo, si no lo quiere reemplazar por ==
			{
				cout<<i<<"\n";
				aux=n/i;
				while(aux%i==0)
				{	
					aux=aux/i;
					cout<<i<<"\n";
				}
			}
			c=0;
		}
	}
	system("pause");
}
