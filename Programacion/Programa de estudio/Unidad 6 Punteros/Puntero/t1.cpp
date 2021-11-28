//puntero funciones
#include<stdio.h>
#include<stdlib.h>
int suma(int a, int b){
    return a+b;
}
int resta(int a, int b){
    return a-b;
}     
int (*funcion)(int, int);    
main(){
       int x, y;
       funcion = suma;
       x= funcion(4,3); 
       funcion = resta;
       y= funcion(4,3); 
       printf("\n%d", x);
       printf("\n%d", y);
       system("pause>null");
}
