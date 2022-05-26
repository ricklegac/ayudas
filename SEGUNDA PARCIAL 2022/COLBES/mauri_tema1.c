#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/*Función que codifica el mensaje en la cadena "cadOr" y lo guarda en la cadena "cadCod",
de acuerdo con lo establecido en el enunciado*/
void codificar(char cadOr[], char cadCod[]){
    int raiz = ceil(sqrt(strlen(cadOr)));
    char ch='?'; //agregamos este caracter para rellenar la matriz cuadrada
    int i,j,cont=0;
    for(i=strlen(cadOr);i<pow(raiz,2);i++) strncat(cadOr, &ch, 1); //rellenamos
    char matrix[raiz][raiz];
    for(i=0;i<raiz;i++){ //creamos la matriz
        for(j=0;j<raiz;j++){
            matrix[i][j]=cadOr[cont];
            cont++;
        }
        
    }
    cont=0;
    for(i=0;i<raiz;i++){ //recorremos la matriz 
        for(j=0;j<raiz;j++){
            if(i==j){
                cadCod[cont]=matrix[i][j];
                cont++;
            }
        }
    }
    for(i=0;i<raiz;i++){ //recorremos la matriz 
        for(j=0;j<raiz;j++){
            if(j-i==1){
                cadCod[cont]=matrix[i][j];
                cont++;
            }
        }
    }
    for(i=0;i<raiz;i++){ //recorremos la matriz 
        for(j=0;j<raiz;j++){
            if(j-i==2){
                cadCod[cont]=matrix[i][j];
                cont++;
            }
        }
    }
     for(i=0;i<raiz;i++){ //recorremos la matriz 
        for(j=0;j<raiz;j++){
            if(j-i==3){
                cadCod[cont]=matrix[i][j];
                cont++;
            }
        }
    }
    for(i=0;i<raiz;i++){ //recorremos la matriz 
        for(j=0;j<raiz;j++){
            if(j-i==-1){
                cadCod[cont]=matrix[i][j];
                cont++;
            }
        }
    }
    for(i=0;i<raiz;i++){ //recorremos la matriz 
        for(j=0;j<raiz;j++){
            if(j-i==-2){
                cadCod[cont]=matrix[i][j];
                cont++;
            }
        }
    }
     for(i=0;i<raiz;i++){ //recorremos la matriz 
        for(j=0;j<raiz;j++){
            if(j-i==-3){
                cadCod[cont]=matrix[i][j];
                cont++;
            }
        }
    }
    
    

}

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

/*Para realizar pruebas en el CodeBlocks o DevC++, se puede emplear el siguiente main()
(Y por lo tanto, modificarlo)*/
/*
int main(){
    char mensajeOrig[1000] = "Este es el 2do examen parcial de Programacion - FPUNA";
    //char mensajeOrig[1000] = "Este es el 2do(?) examen parcial de Programacion - FPUNA";
    //char mensajeOrig[1000] = "Este es el 2do";
    
    printf("El mensaje original es:\n%s\n",mensajeOrig);
    printf("La strlen longitud de la cadena es: %d\n",strlen(mensajeOrig));
    char mensajeCod[1000];
    codificar(mensajeOrig,mensajeCod);
    printf("\nEl mensaje codificado es:\n%s\n",mensajeCod);
    return 0;
}
*/