/*
*Burbuja Mejorada 
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAM 50
void imprimeCB(int *CB) {
 int i;
 for(i = 0; i < TAM-1; i++) {
 printf( "%d, ", CB[i]);
 }
 printf( "%d\n", CB[i]);
}
int main() {
 int CB[TAM];
 int e, i, auxiliar,intercambio;

 srand((unsigned int)time(NULL));
 for(e = 0; e < TAM; e++)
 CB[e] = (int)(rand() % 50);
 printf( "Antes de ordenar\n--------------\n");
 imprimeCB(CB);
 for(e = 0; e < TAM; e++){
 intercambio = 0;
 for(i = 0; i < TAM-1-e; i++){
 if(CB[i] > CB[i+1]) {
 auxiliar = CB[i+1];
 CB[i+1] = CB[i];
 CB[i] = auxiliar;
 intercambio =1;
 }
 }
 if (intercambio==0){
 printf( "\nPara en la iteración %d\n",e);
 break;
 }
 }
 printf( "\nDespués de ordenar\n---------------\n");
 imprimeCB(CB);
} 
