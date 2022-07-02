/*
Primer trimestre: 1 de enero hasta el 31 de marzo.
Segundo trimestre: 1 de abril hasta el 30 de junio.
Tercer trimestre: 1 de julio al 30 de septiembre.
Cuarto trimestre: 1 de octubre al 31 de diciembre.
*/

#include<stdio.h>
typedef struct Registro{
    int cod_suc;
    int cod_venta;
    int fecha;
    int cod_libro;
    int precio;
}registro;

int main(){
    FILE *fp = fopen("archivo.txt","r");
    if(fp==NULL){
        printf("no se pudo abrir el archivo");
        return 1;
    }
    while(!feof(fp)){
        
    }

    return 0;
}