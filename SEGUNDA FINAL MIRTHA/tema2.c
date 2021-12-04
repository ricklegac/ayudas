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
        //printf("%c %c\n",primer_departamento,articulos[j].departamento);
        if(primer_departamento==articulos[j].departamento){
            if(primera_seccion==articulos[j].seccion){
                printf("%c %d %d %d\n",articulos[j].departamento,articulos[j].seccion,articulos[j].nroArticulo,articulos[j].cantidad);
                totalseccion+=articulos[j].cantidad;
                if(articulos[j].cantidad>=mayor){
                    articulo_existencia=articulos[j].nroArticulo;
                }

            }
            if(primera_seccion!= articulos[j].seccion || primer_departamento!=articulos[j+1].departamento ){
                primera_seccion=articulos[j].seccion;
                printf("Total seccion %d: %d\n", articulos[j-1].seccion,totalseccion);
                total+=totalseccion;
                totalseccion=0;
                printf("%c %d %d %d\n",articulos[j].departamento,articulos[j].seccion,articulos[j].nroArticulo,articulos[j].cantidad);
                totalseccion+=articulos[j].cantidad;
            }
        }else{
            primer_departamento=articulos[j].departamento;
            printf("Total departamento: %d\n", total);
            total=0;
            primera_seccion=articulos[j].departamento;
            printf("%c %d %d %d\n",articulos[j].departamento,articulos[j].seccion,articulos[j].nroArticulo,articulos[j].cantidad);
            totalseccion+=articulos[j].cantidad;

        }
        
        j++;
    }
}