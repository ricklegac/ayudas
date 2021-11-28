#include <stdio.h>
#include <stdlib.h>

int main()
{
   struct datos
   {
      char nombre[21];
      int edad;
      char ciudad[21];
   }persona[10];            // Array de struct con datos para 10 personas.
   
   FILE *fichero;
   int i, numero=0;
   
   fichero = fopen("gente.dat", "wt");
   if (fichero == NULL)
      printf("No se pudo abrir el archivo.\n");
   else
   {
      for (i=0; i<10; i++) //Pide datos de 10 personas y los guarda en el fichero.
      {
         puts("Nombre:");
         gets(persona[i].nombre);
         fprintf(fichero, "%s", persona[i].nombre);
         puts("Edad:");
         scanf("%d", &persona[i].edad);
         getchar();
         fprintf(fichero, "%d", persona[i].edad);
         puts("Ciudad:");
         gets(persona[i].ciudad);
         fputs(persona[i].ciudad, fichero);
      }
   }
   fclose(fichero);
      fichero = fopen("gente.dat", "rt");
      if (fichero == NULL)
         printf("No se pudo abrir el archivo.\n"); 
      else
      {  
         do   
         {
            puts("Escriba el numero del fichero a leer:\n" // Pide número del 1 al 10.
                 "(Para salir, digite 0).");
            scanf("%d", &numero);
            for (i=0; i<numero; i++)  // Muestra los datos de la persona indicada por su número.
            {                            // Se leen todas las anteriores al número
               if (i == (numero-1))      // indicado, pero no se muestran.
               {
                  printf("Nombre:%s\nEdad:%d\nCiudad:%s\n", 
                     persona[i].nombre, persona[i].edad, persona[i].ciudad);   
                  getchar();   
               }
            }
         }
while(numero!=0);                                                  
         fclose(fichero);
     }
     return 0;
}

