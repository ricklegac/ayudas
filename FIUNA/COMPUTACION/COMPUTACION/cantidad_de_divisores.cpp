
 /* CREE UNA FUNCION QUE PERMITA SABER LA CANTIDAD DE DIVISORES DE UN NUMERO(VALIDAR).*/
#include<iostream>

#include<stdlib.h>

using namespace std;

int CUENTADIGITOS(int n);
int validar_n();
int main(){
	int n,cant_digitos;
	cout<<"\nINGRESE EUN NUMERO ENTERO: ";cin>>n;
	n=validar_n();
	cant_digitos=CUENTADIGITOS(n);
	cout<<"\nLA CANTIDAD DE DIGITOS DEL NUMERO ES:"<<cant_digitos<<endl;
	system("pause");
	return 0;
}
int CUENTADIGITOS(int n){
	int cant_digitos=0;
	while(n>0){
		n=n%10;
		cant_digitos++;
		
	}
	return cant_digitos;

}
	validar_n(){
		float n;
		do{
		cout<<"\nINGRESE UN NUMERO ENTERO Y POSITIVO: ";cin>>n;
		}while(n<0 or n!=int(n));
		return n;
		
	}
