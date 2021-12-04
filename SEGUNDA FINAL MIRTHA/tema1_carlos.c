#include<stdio.h>
typedef struct articulos{
    char departamento[30];
    int seccion;
    int nroArticulo;
    int cantidad;
}Articulo;
int main(){
    FILE * fp = fopen("archivo1.txt","r");    //abrimos el archivo que en este caso se llama "archivos1.txt"
    if(fp==NULL){                // Si no se encuentra el archivo, mandamos un error
        perror("No se encontro el archivo");
        return 1;
    }

    Articulo articulos [100];
    int i=0;
    int totSeccion=0;
    int totDepartamento=0;
    char seccionActual [2];

    while( !feof(fp) ){
        fflush(stdin);
        fscanf(fp,"%s\t%d%s%d",articulos[i].departamento,&articulos[i].seccion,articulos[i].nroArticulo,&articulos[i].cantidad);
        i++;
    }
}