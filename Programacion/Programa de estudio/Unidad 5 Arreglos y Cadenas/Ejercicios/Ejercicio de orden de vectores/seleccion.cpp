#include <iostream>
#include <conio.h>
#include <iomanip>//para usar el setw
using std::setw;
using namespace std;
 
	//Prototipos de función
	void ordenarArreglo(int * const , const int );
	void intercambiar( int * const , int * const );
	void imprimirArreglo( const int * const , const int );
 
	int main()
	{
		//Se inicializa el arreglo
		const int tamanioArreglo = 4;
		int a[ tamanioArreglo ] = {14, 2 , 16 , 7};
 
 
		//operaciones para ordenamiento e impresión
		ordenarArreglo( a, tamanioArreglo );
		imprimirArreglo(a, tamanioArreglo);
 
 
		getch();
 
		return 0;
	}
 
 
 
	/*
		Función ordenar Arreglo:
		Esta función recibe el arreglo y su tamaño. Se utilizan 
		arreglos para operar estos valores, los cuales llegan por referencia.
	
	*/
 
	void ordenarArreglo(int * const arreglo, const int tamanio)
	{
		int minimo; //almacena el subíndice del valor minimo
		for(int i = 0; i < tamanio; i++ )//recorre todo el arreglo desde la posición inicial hasta el final
		{
			minimo = i; //se asume que el subíndice del valor mínimo es el primer valor
			for( int j = i + 1; j < tamanio; j++)//recorre el arreglo desde una posición siguiente al inicio
			{
				if( arreglo[j] < arreglo[minimo])
				minimo = j; //el minimo subíndice es j
 
			intercambiar( &arreglo[i] , &arreglo[minimo] ); //intercambio de valores del arreglo
 
			}
		}
 
 
 
	}
 
 
	/*
		void intercambiar: Intercambia los valores de entrada a través de apuntadores
		constantes a datos no constantes
	*/
	void intercambiar( int * const aPtr, int * const bPtr)
	{
 
		int aux = *aPtr;//uso de un auxiliar para el intercambio de los valores
		*aPtr = *bPtr;
		*bPtr = aux;
	}
 
	void imprimirArreglo( const int * const a, const int tamanioArreglo)
	{
		for(int i = 0; i < tamanioArreglo; i++ )
			cout<<setw(5)<<a[i];
	}
