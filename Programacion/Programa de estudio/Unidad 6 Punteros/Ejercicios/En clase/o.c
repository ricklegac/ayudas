// Buscador de elementos de la matriz

#include <stdio.h>
#define n 3 // se define una constante n=3
int main(){//abre el main
// declaración de variables 
 int i, x, c, f, j;
 int m[3][3]={1,2,3,
              4,5,6,
              7,8,9};

 for (i=0; i<3; i++) // lector de filas 
 {
    for (j=0; j<3; j++)  //lector de columnas
        printf("%d",m[i][j]);
        printf("\n");
 }
 printf("Introduce un valor a buscar: ");
 scanf("%d", &x);
 f=-1;
 do
    {   //abre el repetir mientras
        f=f+1;
        c=-1;
        do
        {
            c=c+1;
         }
    while ((m[f][c]!=x) && (c!=n-1));
     }//cierra el repetir mientras
    while ((m[f][c]!=x) && (f!=3-1));

         if (m[f][c]==x)
             printf("Encontrado en fila %d y columna %d", f, c);
         else
            printf("No existe el valor buscado");

    return (0);
}//fin del main