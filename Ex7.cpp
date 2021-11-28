#include <stdio.h>
#include <string.h>

int
main ()
{
  //Indicar la cantidad de palabras a ingresar.
  int n;			//Variable para guardar cantidad de palabras.
  printf ("Indique la cantidad de Palabras.\n");
  scanf ("%d", &n);		//Guardamos la cantidad de palabras.
  
  //Hacer un ciclo para almacenar las palabras.
  char palabra[21];//Variable para guardar la palabra.
  char mat[n][21];//Matriz de caracteres.
  int i, j;			//Indices para recorrer la matriz.
  
  for (i = 0; i < n; i++)
  {
      printf ("Ingrese la palabra.\n");
      scanf ("%s", palabra);
      for (j = 0; j < 21; j++)
      {
          mat[i][j] = palabra[j];//Guardamos el caracter de la palabra en la matriz.
      }
  }

  //Imprimir matriz sin ordenar.
  printf ("Matriz sin ordenar:\n");
  for (i = 0; i < n; i++)
  {
      for (j = 0; j < 21; j++)
      {
          printf ("%c ", mat[i][j]);//Imprime elemento de la matriz.
      }
      printf ("\n");
      printf("%s\n", mat[i]);//Imprime como string. (Queda mas lindo)
  }
    
  //Ordenar
  char texto1[21];//Variable para comparacion.
  char texto2[21];
  int a;//Indice extra.
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          //Copiar elementos de la matriz en texto1 y texto2 para la comparacion.
          for(a=0;a<21;a++)
          {
              texto1[a]=mat[i][a];//Copiamos las caracteres de las palabras para comparar.
              texto2[a]=mat[j][a];
          }
          //Comparacion.
          if(strcmp(texto1,texto2)>0)
          {
              for(a=0;a<21;a++)
              {
                  palabra[a]=texto1[a];//Guardamos texto1 en palabra temporalmente.
              }
              for(a=0;a<21;a++)
              {
                  texto1[a]=texto2[a];//Texto2 pasa a texto1.
              }
              for(a=0;a<21;a++)
              {
                  texto2[a]=palabra[a];//Texto2 queda con el valor anterior de texto1 que se guardó temporalmente en palabra.
              }
              for(a=0;a<21;a++)
              {
                  mat[i][a]=texto1[a];//Hacemos el cambio en la matriz.
                  mat[j][a]=texto2[a];
              }
          }
      }
  }
  
  //Imprimir matriz ordenada.
  printf ("Matriz ordenada:\n");
  for (i = 0; i < n; i++)
  {
      for (j = 0; j < 21; j++)
      {
          printf ("%c ", mat[i][j]);
      }
      printf ("\n");
      printf("%s\n", mat[i]);
  }
  
  return 0;
}
