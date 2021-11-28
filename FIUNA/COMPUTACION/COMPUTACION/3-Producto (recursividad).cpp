/*
3. Calcule el producto de dos números utilizando funciones recursivas.
*/
#include<iostream>
using namespace std;
int Producto(int a, int b);
int main()
{
	int a, b, bandera=0;
	
	cout<<"ingrese a:"<<endl;
	cin>>a;
	cout<<"ingrese b:"<<endl;
	cin>>b;
	if(a*b<0)
	{
		bandera=1;
	}
	if(bandera==1 and b<0)
	{
		cout<<"el producto de "<<a<<"x"<<b<<"=-"<<Producto(a, (-1)*b);	
	}
	else if(bandera==1 and a<0)
	{
		cout<<"el producto de "<<a<<"x"<<b<<"=-"<<Producto((-1)*a, b);	
	}
	else if(bandera==0 and a<0 )
	{	
		cout<<"el producto de "<<a<<"x"<<b<<"="<<Producto((-1)*a, (-1)*b);	
	}
	else
	{
		cout<<"el producto de "<<a<<"x"<<b<<"="<<Producto(a, b);	
	}
	
	
	return (0);
}




int Producto(int a, int b)
{
	if(b==0 or a==0)
	{
		return 0;
	}
	else if(b==1)
	{
		return a;
	}
	else
	{
		return a+Producto(a, (b-1));
	}
}
