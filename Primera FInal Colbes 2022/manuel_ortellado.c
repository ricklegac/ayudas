#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void a_morse(char *x);
int main(){
    /*declaracion de variables */
    int dia;
    char texto[8]="";
    char caracter[5]="";
    printf("Ingrese el nombre del archivo: ");
    char archivo[20];
    scanf("%s",archivo);
    FILE *fp=fopen(archivo,"r+");
    /*salimos del programa si es que no se encuentra el archivo */
    if(fp==NULL){
        printf("No se pudo abrir el archivo");
        return 1;
    }
    /*lectura del  archivo*/
    while(!feof(fp)){ 
        fscanf(fp,"%c",caracter);
        if(caracter=="\n"){
            printf("\n");
        }
        //printf("%s",caracter);
        if(strcmp(caracter,";")!=0){
            strcat(texto,caracter);        
        }else{
            //printf("\n%s ",texto);
            a_morse(texto);
            
            if(strcmp(texto,"X")==0){
                printf("\n");

            }else{
                printf("%s",texto);
            }
            strcpy(texto,"");
            
            
        }
        
    }

    return 0;
}
/*funcion a_morse que parsea de morse a valores dados*/
void a_morse(char *x){
    char text[2]="";
    //printf("%s",x);
    if(strcmp(x,"-----")==0)
        strcpy(x,"0");
    else if (strcmp(x,".----")==0)
        strcpy(x,"1");
    else if (strcmp(x,"..---")==0)
        strcpy(x,"2");
    else if (strcmp(x,"...--")==0)
        strcpy(x,"3");
    else if (strcmp(x,"....-")==0)
        strcpy(x,"4");
    else if (strcmp(x,".....")==0)
        strcpy(x,"5");
    else if (strcmp(x,"-....")==0)
        strcpy(x,"6");
    else if (strcmp(x,"--...")==0)
        strcpy(x,"7");
    else if (strcmp(x,"---..")==0)
        strcpy(x,"8");
    else if (strcmp(x,"----.")==0)
        strcpy(x,"9");
    else if (strcmp(x,"--..")==0)
        strcpy(x,"Z");
    else if (strcmp(x,".--.")==0)
        strcpy(x,"P");
    else
        strcpy(x,"X");
    
   
}