#include<stdio.h>
#include<limits.h> //para int_max
#define R 7
#define C 7
//la matriz predefinida ya vale 7*7 
int min(int x, int y, int z);
 
/* retorna el camino mas corte desde el inicial hasta el punto dado*/
//algotitmo del minimo costo 
int minCost(int cost[R][C], int m, int n)
{
   if (n < 0 || m < 0)
      return INT_MAX;
   else if (m == 0 && n == 0)
      return cost[m][n];
   else
      return cost[m][n] + min( minCost(cost, m-1, n-1),
                               minCost(cost, m-1, n),
                               minCost(cost, m, n-1) );
}
 
//minimo de valores
int min(int x, int y, int z)
{
   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;
}
 
int main()
{
    int cost[R][C];
    //lectura de la matriz 
    printf("ingrese la matriz: \n");
    int i,j;
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            scanf("%d",&cost[i][j]);
        }
    }
    int a,b,c,d;
     printf("ingrese el punto inicial: ");
    scanf("%d%d",&a,&b);
    printf("ingrese el punto final: ");
    scanf("%d%d",&c,&d);
    printf(" %d ", minCost(cost, c, d));
    return 0;
}
