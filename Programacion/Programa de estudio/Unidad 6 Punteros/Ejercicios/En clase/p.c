//Programa que nos dice los valores máximo y mínimo y sus posiciones dentro de una matriz.
#include <stdio.h>
#include <math.h>

int main (){
 int num, i, j;
 int tablanum[3][3]={0};
 int t[3][3]={0};
 int may, fmax=0, cmax=0, min, fmin=0, cmin=0;
//carga de matriz 
 printf ("Introduce un numero: ");
 for (i=0;i<3;i++)
 {
    for (j=0;j<3;j++)
    {
       
        scanf ("%d", &tablanum[i][j]);
    }
 }
 // establecer valores iniciales 
 may= tablanum[0][0];
 min= tablanum[0][0];
 // busqueda de valores minimos y maximos 
 for (i=0;i<3;i++)
 {
    for (j=0;j<3;j++)
     {
     if (tablanum[i][j]>may)
        {   // valor maximo 
             may=tablanum[i][j];
             fmax=i;
            cmax=j;
         }
    if (tablanum [i][j]<min)
    {   // valor minimo 
        min=tablanum[i][j];
         fmin=i;
        cmin=j;
    }
  }
 }
 // imprime resultados 
 printf ("El mayor es: %d y su posicion es: %d fila y %d columna\n", may, fmax, cmax);
 printf ("El menor es: %d y su posicion es: %d fila y %d columna\n", min, fmin, cmin);

return (0);
}