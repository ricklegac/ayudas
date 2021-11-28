/*Hacer un programa que lea un número natural (2<n<11), y calcule una matriz mágica de orden n. 
Una matriz de orden n se dice que es mágica si contiene los valores 1, 2, 3, ..., n×n y cumple la
condición de que la suma de los valores almacenados en cada fila y columna coinciden. 
Por ejemplo, la matriz mágica de orden 3 y la matriz mágica de orden 4.
..........
 8  3  4 . 15
 1  5  9 . 15
 6  7  2 . 15
.......... 
 15 15 15 
   


Para la construcción de la matriz mágica de orden impar se deben seguir la siguientes reglas:
- Colocamos el número 1 en la celda correspondiente al centro de la primera columna .
- Seguimos colocando los siguientes números avanzando una celda hacia delante y a la derecha.
- Consideramos que la matriz cumple la propiedad de la circularidad, es decir, si salimos por la
derecha se vuelve a entrar por la izquierda, y si se sale por arriba se entra por abajo.
- Si la celda donde corresponde el siguiente número de la lista está ya ocupada, entonces se
coloca éste en la celda que haya debajo del último número colocado.

Para la construcción de la matriz mágica de orden par se deben seguir la siguientes reglas:
- Colocamos los números 1, 2, 3, ..., n×n consecutivamente, de izquierda a derecha y de arriba a
abajo.
- Invertimos los valores de la diagonal principal.
- Invertimos los valores de la segunda diagonal principal
*/
#include<stdio.h>
int pos_sig(int l, int n);

int main() {
  int cuad[21][21];
  int i,j,n, k;
  do {
    printf( "\nIngrese el orden (impar): " );
    scanf( "%i", &n );
  }while(!(n % 2));
  printf( "\nMatriz Magica de orden %ix%i :\n\n", n, n);

   //inicializando la matriz
  for(i = 0; i < n; i++)
   for(j = 0; j < n; j++)
    cuad[i][j]=0;

   //generando la matriz magica de orden impar
  for(i=n/2, j=0, k=1; k <= n*n;) //se hace N*N iteraciones...
   if(cuad[i][j] == 0) {
    cuad[i][j] = k++;  
    i= pos_sig(i+1, n); //se incrementa i en 1
    j= pos_sig(j-1, n); //se decrementa j en 1
   } else {
    i= pos_sig(i-1,n); //se decrementa i en 1
    j= pos_sig(j+2,n); //se incrementa j en 2
}
  for(i = 0; i < n; i++) {
    printf("\n");
    for(j = 0; j < n; j++)
      printf("%3i", cuad[i][j] );
  }
  return 0;
}

int pos_sig(int l, int n) {
   if (l < 0) 
     l = n + (l % n);
   if (l >= n)
     l = l % -n; 
   return l;
}
