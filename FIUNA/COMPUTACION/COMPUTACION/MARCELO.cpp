#include<iostream>
using namespace std;

int main(){
    int m,n,i,j,s;
	/*Entrada de datos (dimensiones de la matriz A y sus elementos) - No modificar esta parte*/
	cin>>m>>n;
	int A[m][n],B[m][n];
	for(i=0;i<m;i++) for(j=0;j<n;j++) cin>>A[i][j];
    /*Fin - Entrada de datos*/

    /*Rellenamos los bordes de B con los elementos originales (correspondientes) en A*/
    //En este for se copian los elementos de la primera columna y de la última
    for(i=0;i<m;i++){
        B[i][0] = A[i][0];
        B[i][n-1] = A[i][n-1];
    }

    //Ahora debemos copiar los elementos de la primera fila y de la última...

    //Completar
    //aquí
    //esta parte

    /*Ahora calcularemos el resto de los elementos de B, según el enunciado*/

    //Completar
    //aquí
    //el proceso
    //principal

    /*Salida de datos (impresión de la matriz B) - No modificar esta parte*/
    for(i=0;i<m;i++){
		for(j=0;j<n;j++) cout<<B[i][j]<<" ";
    	cout<<endl;
	}
	/*Fin - Salida de datos*/
    return 0;
}
