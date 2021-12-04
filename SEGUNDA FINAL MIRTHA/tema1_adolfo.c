#include<stdio.h>
typedef struct articulos{
    char departamento;
    int seccion;
    int nroArticulo;
    int cantidad;
}Articulo;
int main(){
    FILE * fp = fopen("archivo.txt","r");    
    if(fp==NULL){               
        perror("No se encontro el archivo");
        return 1;
    }

    Articulo articulos [100];
    int i=0;
    while( !feof(fp) ){
        fflush(stdin);
        fscanf(fp,"%c\t%d\t%d\t%d\n",&articulos[i].departamento,&articulos[i].seccion,&articulos[i].nroArticulo,&articulos[i].cantidad);
        i++;
    }
    int j;
    for(j=0;j<i;j++){
        printf("%c %d %d %d\n",articulos[j].departamento,articulos[j].seccion,articulos[j].nroArticulo,articulos[j].cantidad);
    }
    printf("----------------------------------------------------------\n"); 
    char primer_departamento=articulos[0].departamento;
    int primera_seccion = articulos[0].seccion,totalseccion=articulos[0].cantidad;
    printf("%c %d %d %d\n",articulos[0].departamento,articulos[0].seccion,articulos[0].nroArticulo,articulos[0].cantidad);
    j=1;
    mayor=articulos[0].cantidad;
    int total=0;
    while(j<i){
        if(primera_seccion!=articulos[j].seccion){
            printf("\tTotal Seccion: %d \n",totalseccion);
            primera_seccion = articulos[j].seccion;
            totalseccion = 0;
        }
        
        j++;
    }
}