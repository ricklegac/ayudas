#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Productos{
    char departamento [2] , nroArticulo [10];
    int seccion , cantidad;
}Articulo;

void totalGeneral(int x , int y);   //funcion que calcula el total general
void promedioDepartamento(Articulo * articulos , int len);      //funcion que calcula el promedio de articulos por departamento
void impresionFinal(int total_seccion , int total_departamento); //Funcion que se encarga de realizar las impresiones finales de los calculos restantes

int main(){
    
    FILE * archivo = fopen("archivo.txt","r");	//se abre el archivo llamdo "lista.txt"
	if( archivo == NULL ){				// Si no existe el archivo, lanzamos un error
		perror("El archivo no existe");
		return 1;
	}
    /*
        LECTURA Y ALGUNAS DECLARACIONES FUNDAMENTALES DEL CODIGO 
    */
    Articulo articulos [100];          
    int i=0 , total_seccion = 0;           
    int total_departamento = 0;            
    int articulo_mayor=0;         
    while( !feof(archivo) ){ 
        fflush(stdin);
        fscanf(archivo,"%s%d%s%d",articulos[i].departamento,&articulos[i].seccion,articulos[i].nroArticulo,&articulos[i].cantidad);
        i++;
    }
    int seccion_temporal = articulos[0].seccion;       
    char departamento_actual [2], articuloMayor [10];

    printf("Dpto.\tSeccion\t\tNo.Art.\t\tCantidad\n");
    strcpy(articuloMayor,articulos[0].nroArticulo);         
    strcpy(departamento_actual,articulos[0].departamento);     
    articulo_mayor = articulos[0].cantidad;

    /*
        CICLO PARA VERIFICAR CAMBIO DE DEPARTAMENTO Y SECCION ! 
    */
    int k;
    for(k=0 ; k<i ; k++){

        if( seccion_temporal != articulos[k].seccion){         //Cuando se cambia de seccion se imprime
            printf("\tTotal Seccion\t\t%d\n",total_seccion);
            total_seccion = 0;
            seccion_temporal = articulos[k].seccion;
        }
        if( strcmp(departamento_actual,articulos[k].departamento) != 0 ){  //Cuando se cambia de departamento se imprime
            printf("\tTotal Departamento\t%d\n",total_departamento);
            total_departamento=0;
            strcpy(departamento_actual,articulos[k].departamento);
        }
        printf("%s\t%d\t\t%s\t\t%d\n",articulos[k].departamento,articulos[k].seccion,articulos[k].nroArticulo,articulos[k].cantidad);
        total_seccion += articulos[k].cantidad;
        total_departamento += articulos[k].cantidad;
        /*
            USAMOS MENOR O IGUAL PARA PODER DEFINIR EL ULTIMO VALOR MAYOR QUE SE ENCUENTRA EN LA LISTA.TXT DE CANTIDAD
            DE PRODUCTO 

            
        */
        if( articulo_mayor <= articulos[k].cantidad ){        
            articulo_mayor = articulos[k].cantidad;
            strcpy(articuloMayor,articulos[k].nroArticulo);
        }
        
    }
    impresionFinal(total_seccion,total_departamento);
    totalGeneral(total_seccion,total_departamento);
    printf("\nArticulo con mayor existencias %s %d",articuloMayor,articulo_mayor); //Se muestra el articulo con mayor existencias
    promedioDepartamento(articulos,i);          // Se invoca la funcion que calcula el promedio de articulos por departamento
    return 0;
}

void promedioDepartamento(Articulo * articulos , int longitud){
    char departamento_actual [2];  
    int i;                 //Variable que controla el departamento actual
    strcpy(departamento_actual,articulos[0].departamento);
    int promedio=0, articulos_cantidad=0;          //Variables almacenadoras
    printf("\nPromedio de articulos por departamentos\n");
    for( i=0 ; i<longitud ; i++){
        if( strcmp(departamento_actual,articulos[i].departamento) != 0 ){  //Si se pasa a una nueva seccion, se realizan acciones
            printf("\t%s\t%d\n",departamento_actual,promedio/articulos_cantidad);
            strcpy(departamento_actual,articulos[i].departamento);
            promedio = articulos[i].cantidad;
            articulos_cantidad=0;
        }else{
            promedio += articulos[i].cantidad;
        }
        articulos_cantidad++;
    }
    printf("\t%s\t%d\n",departamento_actual,promedio/articulos_cantidad);
}


void totalGeneral(int x , int y){
    printf("\tTotal General\t\t%d\n",x+y);
}


void impresionFinal(int total_seccion , int total_departamento){
    printf("\tTotal Seccion\t\t%d\n",total_seccion);      
    printf("\tTotal Departamento\t%d\n",total_departamento);
}