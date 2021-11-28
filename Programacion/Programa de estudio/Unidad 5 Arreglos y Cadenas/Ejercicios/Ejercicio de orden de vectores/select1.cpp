#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TAM 100
void imprimeCB(int *CB) {
 int i;
 for(i = 0; i < TAM-1; i++) {
 	printf( "%d, ", CB[i]);
 }
 	printf( "%d\n", CB[i]);
}
int main() {
 int CB[TAM];
 int e,i,PosMenor,aux;

 srand((unsigned int)time(NULL));
 for(e = 0; e < TAM; e++)
 	CB[e] = (int)(rand() % 100);
 	printf( "Antes de ordenar\n-----------------------\n");
 	imprimeCB(CB);

 for (e=0; e<(TAM-1) ; e++) {
 	PosMenor=e;
 	for (i=e+1;i<TAM;i++)
 		if (CB[i]<CB[PosMenor])
 			PosMenor=i;
 			aux=CB[e];
 			CB[e]=CB[PosMenor];
 			CB[PosMenor]=aux;
 		} 
 printf( "\nDespués de ordenar\n--------------------\n");
 imprimeCB(CB);
} 
