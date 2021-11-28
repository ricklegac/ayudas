#include <stdio.h>
#include <string.h>
 
int main()
{
   FILE* ptFichero;
   char fin[]="fin";  
   char frase[60];
       
   ptFichero = fopen("datos.txt", "wt");
   printf(" PROGRAMA para ESCRIBIR FRASES.\nCuando quiera salir," 
          "escriba la palabra fin.\n\n");
   do
   {
      puts("\nEscriba una FRASE:\n(o fin). \n");
      gets(frase);
      if (strcmp(frase, fin) == 0)
         break;
      fprintf(ptFichero, "%s\n", frase);
   }
   while (strcmp(frase, fin) != 0);
      
   fclose(ptFichero);
   return 0;
}
