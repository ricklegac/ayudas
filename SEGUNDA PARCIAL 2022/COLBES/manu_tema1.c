#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/*Función que codifica el mensaje en la cadena "cadOr" y lo guarda en la cadena "cadCod",
de acuerdo con lo establecido en el enunciado*/
void codificar(char cadOr[], char cadCod[]){
    //printf("longitud cadena inicial: %ld",strlen(cadOr));
    int longitud = strlen(cadOr);
    int square = ceil(sqrt(longitud));
    char c='?';
    //printf("%d",square);
    int i,j;
    for(i=longitud;i<pow(square,2);i++){
        strncat(cadOr, &c, 1);
    }
    int x=0;
    char matrix[square][square];
    //printf("%s",cadOr);
    //printf(" %ld ",strlen(cadOr));
    for(i=0;i<square;i++){
        for(j=0;j<square;j++){
            matrix[i][j]=cadOr[x];
            x++;
        }
        
    }
    x=0;
    for(i=0;i<square;i++){
        for(j=0;j<square;j++){
            printf("%c ",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<square;i++){
        for(j=0;j<square;j++){
            if(i==j){
                cadCod[x]=matrix[i][j];
                x++;
            }
        }
    }
    for(i=0;i<square;i++){
        for(j=0;j<square;j++){
            if(i<j){
                cadCod[x]=matrix[i][j];
                x++;
            }
        }
    }
     for(i=0;i<square;i++){
        for(j=0;j<square;j++){
            if(i>j){
                cadCod[x]=matrix[i][j];
                x++;
            }
        }
    }

}
/*
int main(){
    //---NO MODIFICAR EL MAIN!! (Para emplear el VPL)---
	char mensajeOrig[1000];
    fgets(mensajeOrig,1000,stdin);
    mensajeOrig[strlen(mensajeOrig)-1]='\0'; //por el enter
    char mensajeCod[1000];
    codificar(mensajeOrig,mensajeCod);
    printf("El mensaje codificado es:\n%s",mensajeCod);
	return 0;
}
*/
/*Para realizar pruebas en el CodeBlocks o DevC++, se puede emplear el siguiente main()
(Y por lo tanto, modificarlo)*/
int main(){
    char mensajeOrig[1000] = "Este es el 2do examen parcial de Programacion - FPUNA";
    //char mensajeOrig[1000] = "Este es el 2do(?) examen parcial de Programacion - FPUNA";
    //char mensajeOrig[1000] = "Este es el 2do";
    
    printf("El mensaje original es:\n%s\n",mensajeOrig);
    printf("La longitud de la cadena es: %ld\n",strlen(mensajeOrig));
    char mensajeCod[1000];
    codificar(mensajeOrig,mensajeCod);
    printf("\nEl mensaje codificado es:\n%s\n",mensajeCod);
    return 0;
}