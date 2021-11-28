/*Hacer un programa que lea un n�mero natural (2<n<11), y calcule una matriz m�gica de orden n. 
Una matriz de orden n se dice que es m�gica si contiene los valores 1, 2, 3, ..., n�n y cumple la
condici�n de que la suma de los valores almacenados en cada fila y columna coinciden. 
Por ejemplo, la matriz m�gica de orden 3 y la matriz m�gica de orden 4.
..........
 8  3  4 . 15
 1  5  9 . 15
 6  7  2 . 15
.......... 
 15 15 15 
   


Para la construcci�n de la matriz m�gica de orden impar se deben seguir la siguientes reglas:
- Colocamos el n�mero 1 en la celda correspondiente al centro de la primera columna .
- Seguimos colocando los siguientes n�meros avanzando una celda hacia delante y a la derecha.
- Consideramos que la matriz cumple la propiedad de la circularidad, es decir, si salimos por la
derecha se vuelve a entrar por la izquierda, y si se sale por arriba se entra por abajo.
- Si la celda donde corresponde el siguiente n�mero de la lista est� ya ocupada, entonces se
coloca �ste en la celda que haya debajo del �ltimo n�mero colocado.

Para la construcci�n de la matriz m�gica de orden par se deben seguir la siguientes reglas:
- Colocamos los n�meros 1, 2, 3, ..., n�n consecutivamente, de izquierda a derecha y de arriba a
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
