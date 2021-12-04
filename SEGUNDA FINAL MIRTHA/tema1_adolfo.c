/*
Adolfo Bernal Ríos 
C.I: 5.640.795
Ing. en Electricidad
*/
#include<stdio.h>
#define max 100
typedef struct articulos{
    char departamento;
    int seccion;
    int nroArticulo;
    int cantidad;
}Articulo;
int main(){

    //lectura del fichero archivo.txt
    FILE * fp = fopen("archivo.txt","r");    
    if(fp==NULL){               
        perror("No se encontro el archivo ");
        return 1;
    }
    //dimensionamos un array de maximo 100
    Articulo articulos [max];
    int i=0;
    while( !feof(fp) ){
        fflush(stdin);
        fscanf(fp,"%c\t%d\t%d\t%d\n",&articulos[i].departamento,&articulos[i].seccion,&articulos[i].nroArticulo,&articulos[i].cantidad);
        i++;
    }
    int j;
    /*for(j=0;j<i;j++){
        printf("%c %d %d %d\n",articulos[j].departamento,articulos[j].seccion,articulos[j].nroArticulo,articulos[j].cantidad);
    }*/
    printf("----------------------------------------------------------\n");
    //declaraciones de variables inicializamos con un valor de contador  
    char primer_departamento=articulos[0].departamento;
    int primera_seccion = articulos[0].seccion,totalseccion=0;
    int articuloMayor = articulos[0].nroArticulo;
    int cantArticulos=0;
    j=1;
    int mayor=articulos[0].cantidad;
    int total=0;
    int ptot=0;
    /*
        LOS PROMEDIOS SACAMOS ANTES DE PASAR DE SECCION!, NO EXACTAMENTE COMO SE IMPRIME EN EL EJEMPLO
    */
    while(j<i){ //recorremos y cortamos cada vez que encontramos seccion || departamento diferente 
        if(primera_seccion!=articulos[j].seccion){
            printf("\tTotal Seccion: %d \n",totalseccion);
            primera_seccion = articulos[j].seccion;
            totalseccion = 0;
            printf("promedio de articulos: %d\n",ptot/cantArticulos);
        }
        if(primer_departamento!= articulos[j].departamento){
            primer_departamento=articulos[j].departamento;
            printf("total departamento: %d \n", total);
            cantArticulos=0;
            total=0;
            ptot=0;
        }
        printf("%c %d %d %d\n",articulos[j].departamento,articulos[j].seccion,articulos[j].nroArticulo,articulos[j].cantidad);
        totalseccion += articulos[j].cantidad;
        total += articulos[j].cantidad;
        cantArticulos++;
        ptot+=articulos[j].cantidad;
        if( mayor < articulos[j].cantidad ){        
            mayor = articulos[j].cantidad;
            articuloMayor=articulos[j].nroArticulo;
        }
        j++;

    }
    //IMPRESIONES
    printf("\tTotal Seccion\t\t%d\n",totalseccion);      
    printf("\tTotal Departamento\t%d\n",total);
    printf("\nArticulo con mayor existencias  : NroArticulo: %d cantidad: %d\n",articuloMayor,mayor);

    return 0;
}