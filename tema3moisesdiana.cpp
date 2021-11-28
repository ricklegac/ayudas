#include<iostream>
using namespace std;
int validar(int num);
int suma_par (int num);
int main(){ //funcion main
	int num;
	cout<<"ingrese num: "<<endl;
	cin>>num;
	validar(num);
	cout<<suma_par(num);
	return 0;
}
int validar(int num){ //funcion validar
	while(num<0){
		cout<<"ingrese un numero entero positivo: "<<endl;
		cin>>num;
	}
	int numero=num;
    return numero;
}
int suma_par (int num){ //funcion que suma los pares
	if (num==0){
		return(0);
	}else if((num%10)%2==0){
		return ((num%10) + suma_par(num/10));
	}else{
		return suma_par(num/10);
	}
}
