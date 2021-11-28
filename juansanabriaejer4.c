#include<stdio.h>
#include<stdlib.h>
#include<string.h>
///////CREAMOS LA ESTRUCTURA/////
struct alumno{
    char nombre[15];
    int nota1,nota2,nota3,nota4;
    float prom;
};

typedef struct alumno Punto;

int main(){
    FILE *as , *pr ;
    int cant,x=0;
    /////////CREAMOS EL ARCHIVO/////////
    char direccion1[]="Puntuaciones.txt";
    char direccion2[]="Ingresantes.txt";
    pr=fopen(direccion1,"w+");
    as=fopen(direccion2,"w+");
    printf("INGRESE CANTIDAD DE ALUMNOS: ");
    scanf("%d",&cant);
    Punto alum[cant];
    char nombre[15];
     fprintf(as,"ALUMNOS CON PROMEDIO MAYOR A 15\n");
     fprintf(pr,"Nombre\t\tNota 1\tNota 2\tNota 3\tNota 4\tProm\n");
     ////////CARGAMOS LOS ARCHIVOS////////
      while (x<cant){
        printf("\nINGRESE NOMBRE: ");
        fflush(stdin);
        gets(alum[x].nombre);
        fprintf(pr,"%s",alum[x].nombre);
        printf("\nINGRESE NOTA 1: ");
        scanf("%d",&alum[x].nota1);
       while(alum[x].nota1<1 || alum[x].nota1>25){//////VALIDAMOS RANGO DE NOTAS
         printf("PUNTAJE FUERA DE RANGO.\nVUELVE A INTRODUCIRLO\n");
         printf("\nINGRESE NOTA 1: ");
         scanf("%d",&alum[x].nota1);
       }
        fprintf(pr,"\t%d",alum[x].nota1);
        printf("\nINGRESE NOTA 2: ");
        scanf("%d",&alum[x].nota2);
       while(alum[x].nota2<1 || alum[x].nota2>25){
         printf("PUNTAJE FUERA DE RANGO.\nVUELVE A INTRODUCIRLO\n");//////VALIDAMOS RANGO DE NOTAS
         printf("\nINGRESE NOTA 2: ");
         scanf("%d",&alum[x].nota2);
       }
        fprintf(pr,"\t%d",alum[x].nota2);
        printf("\nINGRESE NOTA 3: ");
        scanf("%d",&alum[x].nota3);
        while(alum[x].nota3<1 || alum[x].nota3>25){//////VALIDAMOS RANGO DE NOTAS
         printf("PUNTAJE FUERA DE RANGO.\nVUELVE A INTRODUCIRLO\n");
         printf("\nINGRESE NOTA 3: ");
         scanf("%d",&alum[x].nota3);
       }
        fprintf(pr,"\t%d",alum[x].nota3);
        printf("\nINGRESE NOTA 4: ");
        scanf("%d",&alum[x].nota4);
        while(alum[x].nota4<1 || alum[x].nota4>25){//////VALIDAMOS RANGO DE NOTAS
         printf("PUNTAJE FUERA DE RANGO.\nVUELVE A INTRODUCIRLO\n");
         printf("\nINGRESE NOTA 4: ");
         scanf("%d",&alum[x].nota4);
       }
        fprintf(pr,"\t%d",alum[x].nota4);
        alum[x].prom=(float)(alum[x].nota1+alum[x].nota2+alum[x].nota3+alum[x].nota4)/4;
        fprintf(pr,"\t%.2f",alum[x].prom);
        fprintf(pr,"\n");
        ///////////////CARGAMOS LOS MEJORES PUNTAJES MAYORES A 15/////////////////
        if( alum[x].prom > 15){
            printf("entro");
            fprintf(as,"%s con promedio igual a: %.2f\n",alum[x].nombre,alum[x].prom);
        }
        x++;
      }


    fclose(pr);
    fclose(as);
return 0;
}
