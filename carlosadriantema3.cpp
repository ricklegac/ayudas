#include<iostream>
using namespace std;
void validar(int &n);
int suma_digitos_rec (int n);
int main(){
	int n;
	cout<<"ingrese n: "<<endl;
	cin>>n;
	validar(n);
	cout<<suma_digitos_rec(n);
	return 0;
}
void validar(int &n){
	while(n<0){
		cout<<"ingrese un numero entero positivo: "<<endl;
		cin>>n;
	}
	
}
int suma_digitos_rec (int n)
{
	if (n==0){
		return(0);
	}else if((n%10)%2==0){
		//cout<<"acasi"<<n%10<<endl;
		return ((n%10) + suma_digitos_rec(n/10));
	}else{
		//cout<<"esteotro"<<n%10<<endl;
		return suma_digitos_rec(n/10);
	}
}
