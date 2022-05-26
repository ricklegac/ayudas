#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/*Función que codifica el mensaje en la cadena "cadOr" y lo guarda en la cadena "cadCod",
de acuerdo con lo establecido en el enunciado*/
void codificar(char cadOr[], char cadCod[]){
    int raiz = ceil(sqrt(strlen(cadOr)));
    char ch='?'; 
    int i,j,m=0;
    for(i=strlen(cadOr);i<pow(raiz,2);i++) strncat(cadOr, &ch, 1); 
    char matrix[raiz][raiz];
    for(i=0;i<raiz;i++){ 
        for(j=0;j<raiz;j++){
            matrix[i][j]=cadOr[m];
            m++;
        }
        
    }
    m=0;

    /*ACA RECORREMOS LAS DIAGONALES*/
    for(i=0;i<raiz;i++){ 
        for(j=0;j<raiz;j++){
            if(i==j){
                cadCod[m]=matrix[i][j];
                m++;
            }
        }
    }
    int verifico = 1;
    while(verifico<raiz/2){
        //printf("%d",verifico);
        for(i=0;i<raiz;i++){ //recorremos la matriz 
            for(j=0;j<raiz;j++){
                if(j-i==verifico){
                    cadCod[m]=matrix[i][j];
                    m++;
                }
            }
        }
        verifico++;
    }
    verifico = 1;
    while(verifico>raiz/2){
        //printf("%d",verifico);
        for(i=0;i<raiz;i++){ //recorremos la matriz 
            for(j=0;j<raiz;j++){
                if(i-j==verifico){
                    cadCod[m]=matrix[i][j];
                    m++;
                }
            }
        }
        verifico++;
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
    printf("La strlen longitud de la cadena es: %ld\n",strlen(mensajeOrig));
    char mensajeCod[1000];
    codificar(mensajeOrig,mensajeCod);
    printf("\nEl mensaje codificado es:\n%s\n",mensajeCod);
    return 0;
}
