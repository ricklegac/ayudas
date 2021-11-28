#include <iostream>
#include <conio.h>
#include <iomanip>//para usar el setw
using std::setw;
using namespace std;
 
	//Prototipos de funci�n
	void ordenarArreglo(int * const , const int );
	void intercambiar( int * const , int * const );
	void imprimirArreglo( const int * const , const int );
 
	int main()
	{
		//Se inicializa el arreglo
		const int tamanioArreglo = 4;
		int a[ tamanioArreglo ] = {14, 2 , 16 , 7};
 
 
		//operaciones para ordenamiento e impresi�n
		ordenarArreglo( a, tamanioArreglo );
		imprimirArreglo(a, tamanioArreglo);
 
 
		getch();
 
		return 0;
	}
 
 
 
	/*
		Funci�n ordenar Arreglo:
		Esta funci�n recibe el arreglo y su tama�o. Se utilizan 
		arreglos para operar estos valores, los cuales llegan por referencia.
	
	*/
 
	void ordenarArreglo(int * const arreglo, const int tamanio)
	{
		int minimo; //almacena el sub�ndice del valor minimo
		for(int i = 0; i < tamanio; i++ )//recorre todo el arreglo desde la posici�n inicial hasta el final
		{
			minimo = i; //se asume que el sub�ndice del valor m�nimo es el primer valor
			for( int j = i + 1; j < tamanio; j++)//recorre el arreglo desde una posici�n siguiente al inicio
			{
				if( arreglo[j] < arreglo[minimo])
				minimo = j; //el minimo sub�ndice es j
 
			intercambiar( &arreglo[i] , &arreglo[minimo] ); //intercambio de valores del arreglo
 
			}
		}
 
 
 
	}
 
 
	/*
		void intercambiar: Intercambia los valores de entrada a trav�s de apuntadores
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
