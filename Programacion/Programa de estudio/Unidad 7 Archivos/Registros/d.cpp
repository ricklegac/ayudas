#include <iostream>
#include <windows.h>
#define max 100 /*Constante*/
using namespace std;
 
int main(void){
    /*Declara las variables para los ciclo for*/
    int i = 0;
 
    /*Declara estructura persona*/
    struct persona{
        char nombre[15];
        char apellido[15];
        int edad;
        char sexo;
        char direccion[50];
        int telefono;
    };
    /*Declara alumno, arreglo de la estructura persona*/
    struct persona amigo[max];
 
    /*Ciclo for que va a recorrer 5 veces*/
    for (i = 0; i < 5; i++){
 
        cout<<"\nEscriba el Nombre "<< i+1<<":";
        cin>> amigo[i].nombre;
 
        cout<<"\nEscriba el Apellido "<< i+1<<":";
        cin>> amigo[i].apellido;
 
        cout<<"\nEscriba la Edad de "<< i+1<<":";
        cin>> amigo[i].edad;
 
        cout<<"\nEscriba el sexo "<< i+1<<":";
        cin>> amigo[i].sexo;
 
        cout<<"\nEscriba la Direccion de "<< i+1<<":";
        cin>> amigo[i].direccion;
 
        cout<<"\nEscriba el Telefono de "<< i+1<<":";
        cin>> amigo[i].telefono;
    }
 
    cout<<"/nEl registro de Alumnos que se introdujeron son: \n\n";
 
    /*Ciclo for que muestra el listado de 5 registro ingresados*/
    for (i = 0; i < 5; i++){
        /*Se llama al arreglo amigo seguido de la variable*/
        cout<<"\t"<<amigo[i].nombre;
        cout<<"\t"<<amigo[i].apellido;
        cout<<"\t"<<amigo[i].edad;
        cout<<"\t"<<amigo[i].sexo;
        cout<<"\t"<<amigo[i].direccion;
        cout<<"\t"<<amigo[i].telefono<<"\n\n";
   }
 
   system("pause");
}
