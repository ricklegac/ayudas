#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct Articulos{
    char departamento [2];
    int seccion;
    char nroArticulo [10];
    int cantidad;
}Articulo;

void promedioDepartamento(Articulo * articulos , int len);      //funcion que calcula el promedio de articulos por departamento

int main(){
    
    FILE * fp = fopen("archivo.txt","r");	//abrimos el archivo que en este caso se llama "archivos1.txt"
	if(fp==NULL){				// Si no se encuentra el archivo, mandamos un error
		perror("No se encontro el archivo");
		return 1;
	}

    Articulo articulos [100];       //definicion de la lista articulos
    int i=0;                        //iterador
    int totSeccion=0;               //variable que almacena la cantidad total de una seccion
    int totDepartamento=0;          //variable que almacena la cantidad total de un departamento
    int cantArticulos=0;            //Variable que cuenta la cantidad de articulos
    int mayor=0;                    //Variable que almacena la cantidad mayor de articulos

    //LECTURA DE ARCHIVOS
    while( !feof(fp) ){
        fflush(stdin);
        fscanf(fp,"%s%d%s%d",articulos[i].departamento,&articulos[i].seccion,articulos[i].nroArticulo,&articulos[i].cantidad);
        i++;
    }

    int seccionActual = articulos[0].seccion;       //Variable controladora de la seccion actual
    char departActual [2];                          //Variable controladora del departamento actual
    char articuloMayor [10];                        //Variable que almacena el nombre del articulo con mayor cantidad de existencias
    strcpy(departActual,articulos[0].departamento);
    strcpy(articuloMayor,articulos[0].nroArticulo);
    mayor = articulos[0].cantidad;

    printf("Dpto.\tSeccion\t\tNo.Art.\t\tCantidad\n");
    for(int j=0 ; j<i ; j++){

        if( seccionActual != articulos[j].seccion){         //Si se cambio de seccion, realizar acciones
            printf("\tTotal Seccion\t\t%d\n",totSeccion);
            seccionActual = articulos[j].seccion;
            totSeccion = 0;
        }
        if( strcmp(departActual,articulos[j].departamento) != 0 ){  //Si se cambio de departamento, realizar acciones
            strcpy(departActual,articulos[j].departamento);
            printf("\tTotal Departamento\t%d\n",totDepartamento);
            cantArticulos=0;
            totDepartamento=0;
        }
        //Se imprime la lista
        printf("%s\t%d\t\t%s\t\t%d\n",articulos[j].departamento,articulos[j].seccion,articulos[j].nroArticulo,articulos[j].cantidad);
        totSeccion += articulos[j].cantidad;
        totDepartamento += articulos[j].cantidad;
        cantArticulos++;

        if( mayor < articulos[j].cantidad ){        //Busqueda del mayor
            mayor = articulos[j].cantidad;
            strcpy(articuloMayor,articulos[j].nroArticulo);
        }
        
    }
    printf("\tTotal Seccion\t\t%d\n",totSeccion);      
    printf("\tTotal Departamento\t%d\n",totDepartamento);
    printf("\nArticulo con mayor existencias %s %d",articuloMayor,mayor); //Se muestra el articulo con mayor existencias
    promedioDepartamento(articulos,i);          // Se invoca la funcion que calcula el promedio de articulos por departamento
    return 0;
}

void promedioDepartamento(Articulo * articulos , int len){
    char departActual [2];                   //Variable que controla el departamento actual
    strcpy(departActual,articulos[0].departamento);
    int promedio=0, cantidadArt=0;          //Variables almacenadoras
    printf("\nPromedio de articulos por departamentos\n");
    for(int i=0 ; i<len ; i++){
        if( strcmp(departActual,articulos[i].departamento) != 0 ){  //Si se pasa a una nueva seccion, se realizan acciones
            printf("%s\t%d\n",departActual,promedio/cantidadArt);
            strcpy(departActual,articulos[i].departamento);
            promedio = articulos[i].cantidad;
            cantidadArt=0;
        }else{
            promedio += articulos[i].cantidad;
        }
        cantidadArt++;
    }
    printf("%s\t%d\n",departActual,promedio/cantidadArt);
}
