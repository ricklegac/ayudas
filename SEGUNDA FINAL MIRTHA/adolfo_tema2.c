/*
Adolfo Bernal Ríos 
C.I: 5.640.795
Ing. en Electricidad
Lenguaje C  -std=C11 
*/
#include <stdio.h>
void generar_cuadrado_latino(int n) {
   int final_primero = n + 1;
   /*primero , final_primero, segundo son las filas que tengo que rotar con orden que va cambiando de una fila a otra*/
   for (int i = 1; i <= n; i++) {
      int primero = final_primero;
      while (primero <= n) {
         printf("%d ",primero);
         primero++;
      }

      for (int segundo = 1; segundo < final_primero; segundo++){
         printf("%d ",segundo);
      }
      final_primero--;
   printf("\n");
   }
   printf("\n");
}

int main() {
   generar_cuadrado_latino(6);
   return 0;
}