#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    FILE *fichero;
    char linea[100], nombre[40];
    int i=0;
   do
   {
      printf("\nNombre de fichero: ");
      gets(nombre);
   
      fichero = fopen(nombre, "rt");
   
      if (fichero == NULL)
      {
          printf("No existe el fichero\n\n");
          i++;
          if (i == 5)
             exit(1);
      } 
    }
    while (fichero == NULL);
    while (!feof(fichero))
    {
        for (i=0; i<25; i++){
            fgets(linea, 100, fichero);
            if (!feof(fichero))
            {
                puts(linea);                
            }
    }
    getchar();       
    }
    fclose(fichero);
    return 0;
}
