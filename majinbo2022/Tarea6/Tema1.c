#include<stdio.h>
#include<string.h>
void ordenar(char cadena[]);
int main(){
    char cadena[30];
    scanf("%s",cadena);
    ordenar(cadena); //no hace falta enviar por referencia porque al recibir recibe el lugar de memoria de la cadena
    puts(cadena); //imprimimos la cadena ordenada
    return 0;
}
void ordenar(char cadena[]){
    int i,j;
    char temp;
    for (i = 0; i < strlen(cadena) - 1; i++) {
        for (j = i + 1; j < strlen(cadena); j++) {
            if (cadena[i] > cadena[j]) {
                temp = cadena[i];
                cadena[i] = cadena[j];
                cadena[j] = temp;
             }
        }
    }
}