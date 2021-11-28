#include <iostream>
 using namespace::std;
 int Tamano = 10;
 // Cambiar la variable Tamano para ordenar una
 // cantidad diferente de datos
  /*Prototipo de funcion Imprime */
 void Imprime( int A[]);
 /*prototipo de funcion Recibe */
 void Recibe ( int B[]);
 /*Prototipo de funcion Burbuja */
 void Burbuja( int C[]);
 int main()
 {           // Abre main
 int Arreglo[Tamano] = {0, 0};
 Recibe(Arreglo);
 Burbuja(Arreglo);
 Imprime(Arreglo);
 return 0;
 }           // Cierra main


 //////////////////////////////////////////////////
 //FUNCION IMPRIME 
 /////////////////////////////////////////////////
 
 void Imprime( int A[] ) {     // Abre la funcion Imprime
 
 for ( int j = 0; j < Tamano; j++ ){      // Abre for
	 cout << "\t" << A[j]; 
	 
 }      // Cierra for
 cout <<endl;
 }     // Cierra la funcion Imprime

 ////////////////////////////////////////////////////////////////////////////
 //FUNCION RECIBE para la carga de elementos del vector
 //////////////////////////////////////////////////////////////////////////
 

 void Recibe( int B[] ){         // Abre funcion Recibe
 
 for ( int i = 0; i < Tamano; i++ ){      // Abre for
	 cin >> B[i];
	 }
 }         // Cierra funcion Recibe



 ///////////////////////////////////////////////
 //FUNCION BURBUJA
 /////////////////////////////////////////////////
 

void Burbuja( int C[]){                 // Abre funcion Burbuja


}                 // Cierra funcion Burbuja