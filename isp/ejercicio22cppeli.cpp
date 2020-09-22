#include<iostream>
using namespace std;
int cantidadx(int vec[],int n,int x);
int i;
int main(){
	int n,x;
	printf("Ingrese n\n");
	cin>>n;
	printf("Ingrese x\n");
	cin>>x;
	int vec[n];
	printf("Ingrese componentes del vector\n");
	for(i=0;i<n;i++)
		cin>>vec[i];
	printf("Veces que se vio x en el vector: %d", cantidadx(vec,n,x));
	return 0;
}
int cantidadx(int vec[],int n,int x){
	int cont=0;
	for(i=0;i<n;i++){
		if(vec[i]==x){
			cont++;
		}
	}
	return cont;
}
