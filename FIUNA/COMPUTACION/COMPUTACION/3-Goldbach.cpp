/*
La conjetura de Goldbach afirma que cualquier numero par mayor a 2 es igual a la suma de 
2 primos distintos
Lea un número, verifique si es entero, par y mayor que 2, si lo es, elabore un programa 
que calcule las posibles sumas de Goldbach de un numero.
*/
/*
n=8
n/2=4


1 2 3 4 5 6 7
1+7
2+6
3+5
4+4


*/
#include<iostream>
using namespace std;
int Verifprimo(int n);
int Validar();
int main()
{
	int n,i,j,sumando1, sumando2;
	
	n=Validar();
	
	for(i=1;i<=(n/2);i++)
	{
		if(Verifprimo(i)==1)
		{
			sumando1=i;
			for(j=(n/2);j<n;j++)
			{
				if(Verifprimo(j)==1)
				{
					sumando2=j;
					if(sumando1+sumando2==n)
					{
						cout<<"dos numero primos que dan "<<n<<" son "<<sumando1<<" y "<<sumando2<<endl;
					}
				}
			}
		}
	}
		
	return 0;
}

int Verifprimo(int n)
{
	int i, cdivisores=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cdivisores++;
		}
	}
	
 	if(cdivisores==2)
 	{
 		return 1;	
	}
	else
	{
		return 0;	
	}
	
}
int Validar()
{
	float n;
	do
	{
		cout<<"ingrese un numero entero par mayor a 2"<<endl;
		cin>>n;
	}while(n!=int(n) or n<=2 or int(n)%2!=0);
	
	return int(n);	
}








