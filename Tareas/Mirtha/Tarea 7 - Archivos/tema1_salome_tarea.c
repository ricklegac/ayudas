#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
/*
Primer trimestre: 1 de enero hasta el 31 de marzo.
Segundo trimestre: 1 de abril hasta el 30 de junio.
Tercer trimestre: 1 de julio al 30 de septiembre.
Cuarto trimestre: 1 de octubre al 31 de diciembre.
*/


typedef struct Producto{
			int cod_suc;
            int cod_ven;
            int Fecha;
            int cod_libro;
            int Precio;
}producto;

int main(){
	FILE *libro;
	int i,j,k,s=1;
	int cont=0;
	int t1=0,t2=0,t3=0, t4=0,promedio=0;//Variables para guardar el total para cada trimestre
   

	if ((libro=fopen("archivo.txt","r"))==NULL){

		printf ("\n\tError en archivo\n");
		return 1;

	}
    char c;
    c=fgetc(libro);
    while(!feof(libro)){//cuenta la cantidad de lineas
        if(c=='\n'){
			cont++;
		}
		c=fgetc(libro);
    }

     int cod1=0,cod2=0,cod3=0,cod4=0;
    int libro1[1000];
    int libro2[1000];
    int libro3[1000];
    int libro4[1000];
    
	cont--;
    rewind(libro);
    producto sucursal[cont];

    for(i=0;i<cont;i++){
        fscanf(libro,"%d\t%d\t%d\t%d\t%d",&sucursal[i].cod_suc,&sucursal[i].cod_ven,&sucursal[i].Fecha,&sucursal[i].cod_libro,&sucursal[i].Precio);
    }
	for(i=0;i<cont;i++){

        if(sucursal[i].Fecha<=20220331 ){
            t1=t1+sucursal[i].Precio;
            if(libro1[sucursal[i].cod_libro]==0){
                cod1++;
            }
            libro1[sucursal[i].cod_libro]=1;
        }
        else if(sucursal[i].Fecha>=20220401 && sucursal[i].Fecha<=20190630 && libro2[sucursal[i].cod_libro]==0){//si cumple para el segundo trimestre comparando las fechas hace esta operacion
            t2=t2+sucursal[i].Precio;
           if(libro2[sucursal[i].cod_libro]==0){
                cod2++;
            }
            libro2[sucursal[i].cod_libro]=1;
        }
        else if(sucursal[i].Fecha>=20220701 && sucursal[i].Fecha<=20190930 && libro3[sucursal[i].cod_libro]==0){
            t3=t3+sucursal[i].Precio;
            if(libro3[sucursal[i].cod_libro]==0){
                cod3++;
            }
            libro3[sucursal[i].cod_libro]=1;
        }
        else if(sucursal[i].Fecha>=20211001 && sucursal[i].Fecha<=20191231 && libro4[sucursal[i].cod_libro]==0){
            t4=t1+sucursal[i].Precio;
            if(libro4[sucursal[i].cod_libro]==0){
                cod4++;
            }
            libro4[sucursal[i].cod_libro]=1;
        }
        j=i;
        j++;
        if(sucursal[j].cod_suc!=sucursal[i].cod_suc){
            printf("\t\tSucursal %d\n",s);
            printf("Trimestre\tTotal\tTitulos Distintos\n");
            printf("1\t\t%d\t\t%d\n",t1,cod1);
            printf("2\t\t%d\t\t%d\n",t2,cod2);
            printf("3\t\t%d\t\t%d\n",t3,cod3);
            printf("4\t\t%d\t\t%d\n",t4,cod4);
            promedio=t1+t2+t3+t4;
            t1=t2=t3=t4=cod1=cod2=cod3=cod4;
            s++;
            for(k=0;k<1000;k++){
                libro1[k]=0;
                libro2[k]=0;
                libro3[k]=0;
                libro4[k]=0;
            }
        }
	}
 printf("Precio Promedio: %.2f\n",(float)promedio/cont);
    return 0;
}
