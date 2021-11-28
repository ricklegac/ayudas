/* 3.Diseñar un programa que permita, a través de un bucle for, 
acumular e imprimir la suma de los
cuadrados de los primeros 10 números naturales. */
#include<stdio.h>
#include<math.h>
int main(){
    double nro= 0, cuadrado= 0, suma=0;
    for(nro= 1; nro<=10; nro++){
        printf("Nro: %.0lf", nro);
        //cuadrado= nro * nro;
        cuadrado= pow(nro, 2);
        printf("\tSu cuadrdo: %.0lf\n", cuadrado);
        suma= suma + cuadrado;
    }
    printf("\n\tLa sumatoria de los cuadrados es: %.0lf\n", suma);
return 0;
}
