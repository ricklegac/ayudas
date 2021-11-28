#include<iostream>
using namespace std;
/* 5) Crear un función que reciba un número real y devuelva un numero entero con el valor:
		-1 si el numero es negativo, 
		1 si el numero es positivo o
		0 si es cero.*/
//Prototipo de funcion 
int num(int a){
	if(a < 0){
		return -1;
	}
	else if(a > 0){
			return 1;
		}
		else{
			return 0;
		}
}
//cuerpo principal
int main(){
	int a;
	cout<<"\n Ingrese un numero: \n \n";
	cin>>a;
	cout<< "\n \n \n \t" <<num(a);
	return 0;
}
