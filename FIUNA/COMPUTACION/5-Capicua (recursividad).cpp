/*
5. Escribir una función recursiva para determinar si un número es capicúa.
*/
#include<iostream>
#include<math.h>
using namespace std;
int Contardigitos(int N)
{
	int contador=0;
	while(N>0)
	{
		contador++;
		N=N/10;	
	}
	return contador;
}
int invertir (int N)
{

	int largo=Contardigitos(N);
	
	if(N<10)
	{
		return N;
	}
	else
	{
		return invertir(N/10) + pow (10,largo-1)*(N%10);	
	}

	
}

int main()
{
	int n;
	cout<<"ingrese N \n";
	cin>>n;
	if(n==invertir(n))
	{
		cout<<"es capicua\n";
	}
	else
	{
		cout<<"no es capicua\n";
	}
}
