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
 int e,i,k,temp;

 srand((unsigned int)time(NULL));
 for(e = 0; e < TAM; e++)
 	CB[e] = (int)(rand() % 100);
 	printf( "Antes de ordenar\n-----------------------------\n");
 	imprimeCB(CB);

 		for (e=1;e<TAM;e++){
 			temp=CB[e];
 			i=0;
 			while (CB[i]<=temp)
 					i++;
							 if (i<e)
 							{
 										for (k=e;k>i;k--)
 											CB[k]=CB[k-1];
 												CB[i]=temp;
 						}
 		}
 printf( "\nDespu�s de ordenar\n------------------------\n");
 imprimeCB(CB);
} 
