//para este ejercicio me guie en las siguientes fuentes:
//https://programmerclick.com/article/60311064068/
//https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/
//https://www.geeksforgeeks.org/c-program-for-min-cost-path/
#include<stdio.h>
#include<limits.h>
#include <stdlib.h>
int min(int x, int y, int z);
int dijkstra(int longitud, int costo[longitud][longitud], int m, int n, int i, int j);
int main()
{
    int longitud;
    printf("Ingrese tamanio de matriz\n");
    scanf("%d", &longitud);
    int i, k, m, n;
    printf("posicion inicial: ");
    scanf("%d %d", &i, &k);
    printf("posicion final: ");
    scanf("%d %d", &m, &n);
    
   int costo[longitud][longitud];
   
   printf("ingrese los elementos de la matriz:\n")
   for(int j = 0; j < longitud; j++){
       for(int l = 0; l < longitud; l++){
           scanf("%d",&costo[j][l]);
       }
   }
    for(int j = 0; j < longitud; j++){
       for(int l = 0; l < longitud; l++){
           printf("%d ", costo[j][l]);
       }
       
       printf("\n");
   }
   printf("camino mas corto:  %d ", dijkstra(longitud,costo, 2, 2, 1, 0));
   return 0;
}
//aca vemos el menor valor para luego comparar en el algoritmo dijkstra
int min(int x, int y, int z)
{
   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;
}


//retorna el peso de la matriz, el menor de ellos para llegar a posfin
int dijkstra(int longitud, int costo[longitud][longitud], int m, int n, int i, int j)
{

   int total_cost[4][4];
   total_cost[0][0] = costo[0][0];
   for (i; i <= m; i++)
   total_cost[i][0] = total_cost[i - 1][0] + costo[i][0];
   for (j; j <= n; j++)
      total_cost[0][j] = total_cost[0][j - 1] + costo[0][j];
   for (i= 1; i <= m; i++)
      for (j = 1; j <= n; j++)
         total_cost[i][j] = min(total_cost[i - 1][j - 1], total_cost[i - 1][j], total_cost[i][j - 1])
         + costo[i][j];
      return total_cost[m][n];
}

