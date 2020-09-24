#include <iostream>
using namespace std;

int main()
{
    int N=0,fila,columna,M=0,suma=0,F,C;
    cout << "Ingrese el numero de orden de la matriz: ";
    while(N>10 || N<3){
        cout << "Ingrese el numero de orden de la matriz: ";
        cin >> N;
    }
    cout << "\n";
     int matriz [N][N];
     cout << "Ingrese los elementos de la matriz:\n";

     for( F=0; F<N;F++){
       for( C=0; C<N;C++){
            cin >> matriz[F][C];
        }
     }

      while(M==0){
        cout << "Ingrese el numero de fila y columna respectivamente:\n";
        cin >> fila;
        cin >> columna;
        M=1;
        if(fila==1 || fila==N || columna==1 || columna==N ){
            cout << "No es posible realizar la operacion\n";
            M=0;
        }
      }

    for (F = fila -2 ; F <= fila ; F++){
        for (C = columna-2 ; C <= columna ; C++){
            suma+=matriz[F][C];
        }

    }

    cout << "La suma es: "<<suma-matriz[fila-1][columna-1];

return 0;
}
