#include<stdio.h>
#include<stdlib.h>
void estitulo(char cad[]){
 /* escriba su codigo*/
}

void sinespacios(char cad[]){
 /* escriba su codigo*/
}

int longitud(char cad[]){
 /* escriba su codigo*/
}
void invertir(char cad[]){
  /* escriba su codigo*/
}

void ordenar (char cad[]){
   /* escriba su codigo*/
}
int main(){
    char cad1[100];
    printf("Ingrese Cadena: ");
    gets(cad1);
    estitulo(cad1);
    sinespacios(cad1);
    printf("\n\nSin Espacios: %s", cad1);
    invertir(cad1);
    printf("\n\nInvertido: %s", cad1);
    ordenar(cad1);
    printf("\n\nOrdenado: %s", cad1);
    system("pause>null");
}
