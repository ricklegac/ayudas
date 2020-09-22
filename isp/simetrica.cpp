#include<iostream>
using namespace std;
void mostrarmatriz(int m,int n,int matriz[][n]);
void cargarmatriz(int m,int n,int matriz[m][n]);
int main(){
	int m,n;
	cout<<"Ingrese dimensiones de la matriz: ">>endl;
	cin>>m;
	cin>>n; 
	int mat[m][n];
	cargarmatriz(mat,m,n);
	mostrarmatriz(mat,m,n);
	//comprobarsimetrica();
	//imprimirmatriz();
	return 0;
}
void cargarmatriz(matriz[][n],int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>matriz[i][j];
		}
	}
	
}
void mostrarmatriz(matriz[][n],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d",matriz[i][j]);
		}
		cout<<""<<endl;
	}
}

