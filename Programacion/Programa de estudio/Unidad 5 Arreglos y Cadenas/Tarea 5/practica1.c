
#include<stdio.h>

int main(int argc, char * argv[])
{
  char letra;
  char * p = &letra, *q;
  int i;
  unsigned long base;
  printf("La dirección de letra es           %u\n", (unsigned int)p);
  q = p + 1;
  printf("La dirección dada por q = p + 1 es %u\n", (unsigned int)q);
  q = p + 2;
  printf("La dirección dada por q = p + 2 es %u\n", (unsigned int)q);
  q = p + 3;
  printf("La dirección dada por q = p + 3 es %u\n", (unsigned int)q);
  q = p + 4;
  printf("La dirección dada por q = p + 4 es %u\n", (unsigned int)q);
  printf("Escriba el valor de i: ");
  scanf("%d", &i);
  q = p + i;
  printf("q = p + %d vale                     %u\n", i, (unsigned int)q);
  base = (unsigned long)p;
  printf("El valor calculado es: %u\n",base + i*sizeof(char));
  return 0;
}
/*
La dirección de letra es           3221224104
La dirección dada por q = p + 1 es 3221224105
La dirección dada por q = p + 2 es 3221224106
La dirección dada por q = p + 3 es 3221224107
La dirección dada por q = p + 4 es 3221224108
Escriba el valor de i: 5
q = p + 5 vale                     3221224108
*/
