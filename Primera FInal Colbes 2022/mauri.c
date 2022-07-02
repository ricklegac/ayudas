#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void a_morse(char *x);
int main(){
    /*LECTURAS INICILAES */
    printf("ingrese el nombre del archivo");
    char file[20];
    scanf("%s",file); 
    char caracter[2]; // LEEMOS CARACTER POR CARACTER YA QUE SI LEEMOS UN STRING NOS DETECTA ;
    FILE *fp = fopen(file, "r");
    char texto[8]="";
    FILE *fw = fopen("salida.txt", "w");
    printf("ver archivo salida.txt");
    while(!feof(fp)){
        fscanf(fp,"%c",caracter);
        if(strcmp(caracter,";")!=0){
            fprintf(fw,"%s",caracter);

        }
        if(strcmp(caracter,"\n")==0){
            fprintf(fw,"\n");
        }  
        if((strcmp(caracter,";")==0)){
            fprintf(fw,"\t");
        }    
        if(caracter=="\n"){
            printf("\n");
        }
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
    rewind(fw);

    /*AL COMIENZO QUISE PONER EN OTRO FICHERO QUE ESTE SEPARADO POR TABULACIONES*/
    //fclose(fw);
    //char id1[6], id2[6], id3[6], p1[6], p2[6];
    //int dia;
    //FILE *fw2 = fopen("salida.txt","r+");
  /*  while(!feof(fw)){
        fscanf(fw,"%s\t%s\t%s\t%s\t%s\t%d\n",id1,id2,id3,p1,p2,&dia);
        //printf("%s;%s;%s;%s;%s;%d\n",id1,id2,id3,p1,p2,dia);
    } */
    return 0;
}
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