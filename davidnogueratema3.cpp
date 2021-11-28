#include<iostream>
using namespace std;
int validar(int num);
int impares (int num);
int main(){ //funcion main
	int num;
	cout<<"ingrese num: "<<endl;
	cin>>num;
	validar(num);
	cout<<impares(num);
	return 0;
}
int validar(int num){ //funcion validar
	while(num<0){
		cout<<"error vuelva a ingresar: ";
		cin>>num;
	}
	int numero=num;
    return numero;
}
int impares (int num){ 
	if (num==0){
		return(0);
	}else if((num%10)%2!=0){
		return ((num%10) + impares(num/10));
	}else{
		return impares(num/10);
	}
}
