#include<stdio.h>
#include<string.h>
char *invertir(char cadena[]);
void contar(char cadena[], int *contador );
int main(){
    char cadena[30];
    int contador=0;
    scanf("%s",cadena);
    contar(cadena, &contador);
    printf("%d\n",contador);
    invertir(cadena);
    puts(cadena);
    return 0;
}
void contar(char cadena[], int *contador ){
    int i=0;
    while(cadena[i]!='\0'){
        i++;
        (*contador)++;
    }
}
char *invertir(char cadena[]) {
    int longitud = strlen(cadena);
    char temporal;
    int i,j;
    for ( i = 0, j = longitud - 1; i < (longitud / 2); i++, j--) {
        temporal = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = temporal;
    }
    return cadena;
}