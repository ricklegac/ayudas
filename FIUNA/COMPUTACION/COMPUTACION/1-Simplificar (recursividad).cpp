/*
Lea dos números NUM y DEN (enteros y positivos), a continuación, imprima en pantalla
la fracción simplificada obtenida al dividir NUM entre DEN. 
*/
#include<iostream>
using namespace std;
int MCD(int a, int b);
int main()
{
	int NUM, DEN, mayor, menor;
	
	cout<<"ingrese el numerador:"<<endl;
	cin>>NUM;
	mayor=NUM;
	menor=NUM;
	cout<<"ingrese el denominador:"<<endl;
	cin>>DEN;
	if(DEN>mayor)
	{
		mayor=DEN;
	}
	if(DEN<menor)
	{
		menor=DEN;
	}
	cout<<"la fraccion es:\n \n"<<NUM<<"\n__\n\n"<<DEN<<endl;
	cout<<"\n\nla fraccion simplificada es:\n \n"<<NUM/(MCD(mayor,menor))<<"\n__\n\n"<<DEN/(MCD(mayor,menor))<<endl;
	return(0);
}
int MCD(int a, int b)
{
	int r;
	r=a%b;
	if(r==0)
	{
		return b;
	}
	else
	{
		return MCD(b,r);
	}
}
