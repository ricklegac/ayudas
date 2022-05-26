#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
typedef struct producto{
    int f;
    char codigo[20];
    int precio;
}productos;
int main(){
    int precio,fecha;
    char cod[20];
    FILE *fp = fopen("texto.txt","r");
    if(fp== NULL){
        printf("\nNO SE PUDO ABRIR EL ARCHIVO `texto.txt`\n");
        return 1;
    }
    int i=0;//contador 
    productos p[20]={0};
    while(!feof(fp)){
        fscanf(fp,"%d, %s , %d",&p[i].f, p[i].codigo ,&p[i].precio);
        if(strcmp(p[i].codigo,"fin")==0) break; //salimos si encontramos fin en codigo producto
        printf("%d %s %d\n",p[i].f,p[i].codigo,p[i].precio);
        i++;

        
        
    }

    return 0;
}