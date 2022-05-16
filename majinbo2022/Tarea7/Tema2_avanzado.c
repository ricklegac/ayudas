#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct articulos{
    int pos;
    char nenes[20];
    int cant_nenes;
    char nenas[20];
    int cant_nenas;
}articulo;
int main(){
    int ano;
    printf("Ingrese el año que quiere saber el ranking: ");
    scanf("%d",&ano);
    while(ano<2017 || ano>2020){
        printf("no tenemos registros del año %d, ingrese años desde el 2017 al 2020\n",ano);
        scanf("%d",&ano);
    }
    char ano_c[5];
    sprintf(ano_c,"%d",ano);
    printf("%s",ano_c);
    char* cadena_inicial = "ranking_ventas_";
    char archivo[100];
    strcat(strcpy(archivo, "ranking_ventas_"), ano_c);
    strcat(archivo, ".txt");
    printf("\nabriendo: %s\n",archivo);
    FILE *fp = fopen(archivo,"r+");
    articulo a[100];
    int i=0;
    while(!feof(fp)){
        fscanf(fp,"%d\t%s\t%d\t%s\t%d\n",&a[i].pos,a[i].nenes,&a[i].cant_nenes,a[i].nenas,&a[i].cant_nenas);
        printf("%d\t%s\t%d\t%s\t%d\n",a[i].pos,a[i].nenes,a[i].cant_nenes,a[i].nenas,a[i].cant_nenas);
        i++;
    }
    int j=0;
    int sexo;
    printf("ingrese el sexo\n1 - niño\n2 - niña\n");
    scanf("%d",&sexo);
    while(sexo<1 || sexo>2){
        printf("ingrese un sexo valido,1 o 2\n");
        scanf("%d",&sexo);
    }
    printf("ingrese el producto (guantes, gorritos, pijama, chaqueta,medias)\n");
    char p[20];
    scanf("%s", p);
    for(j=0;j<i;j++){
        if(sexo==1){
            if(strcmp(a[j].nenes,p)==0){
                printf("el producto %s para niños se encuentra en la posicion: %d\n",p,a[j].pos);
            }
        }else{
            if(strcmp(a[j].nenas,p)==0){
                printf("el producto %s para niñas se encuentra en la posicion: %d\n",p,a[j].pos);
            }
        }
    }


    // agregando cosas que se pide en el segundo ejercicio 

    printf("\n\n------PUNTOS QUE SE PIDE EN EL SEGUNDO EJERCICIO: ----\n");
    printf("ingrese el producto (guantes, gorritos, pijama, chaqueta)\n");
    scanf("%s",p);
    for(j=0;j<i;j++){
        if(strcmp(a[j].nenes,p)==0){
            printf("el producto %s se encuentra en la posicion %d para niños\n",p,a[j].pos);
        }else if(strcmp(a[j].nenas,p)==0){
            printf("el producto %s se encuentra en la posicion %d para niñas\n",p,a[j].pos);
        }
    }
    
    return 0;
}