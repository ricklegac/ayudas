#include <stdio.h>
#include <string.h>

int validar(char *entrada)
{
    int n = strlen(entrada);
    char mayusculas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char minusculas[] = "abcdefghijklmnopqrstuvwxyz";

    //comprobamos si es una letra mayúscula
    int i;
    for ( i = 0; i < 26; i++)
    {
        if (strchr(entrada, mayusculas[i]) != NULL)
        {
            //se encontró un caracter mayúscula
            printf("Se encontró un caracter en mayúscula, ingrese una cadena válida\n");
            return 0;
        }
    }

    //comprobamos si es no es una letra minúsucula
    
    for ( i = 0; i < n; i++)
    {
        if (strchr(minusculas, entrada[i]) == NULL)
        {
            //el caracter no es una letra del alfabeto en minúscula
            printf("Se encontró un caracter no alfabético, ingrese una cadena válida\n");
            return 0;
        }
    }

    //tomamos un caracter y comprobamos si no se encuentra de nuevo en la misma
    //cadena más adelante
    int j;
    for ( i = 0; i < n - 1; i++)
    {
        for ( j = i + 1; j < n; j++)
        {
            if (entrada[i] == entrada[j])
            {
                //dos caracteres son iguales
                printf("Se encontraron dos caracteres iguales, ingrese una cadena válida\n");
                return 0;
            }
        }
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    int valida = 0;
    char entrada[50];
    int nroLineas;
    char *posicionCaracter;
    char *cadena;
    FILE *fp;       //puntero del archivi
    FILE *fsalida;  //puntero del archivo salida
    char texto[10]; //texto a cambiar, tamano 10

    printf("Ingrese una cadena:\n");
    scanf("%s", entrada);
    valida = validar(entrada);
    while (valida == 0)
    {
        printf("Ingrese una cadena:\n");
        scanf("%s", entrada);
        valida = validar(entrada);
    }

    if ((fp = fopen("texto.txt", "r")) == NULL)
    {
        printf("\nerror de apertura\n");
        return -1;
    }
    if ((fsalida = fopen("textocifrado.txt", "w")) == NULL)
    {
        printf("\nerror de apertura\n");
        return -1;
    }
	int i;
    while (feof(fp) == 0)
    {
        cadena = fgets(texto, 10, fp);
        for ( i = 0; i < strlen(cadena); i++)
        {
            //Buscamos al caracter cadena[i] en nuestra entrada
            posicionCaracter = strchr(entrada, cadena[i]);
            if (posicionCaracter != NULL)
            {
                //Si es el caracter final de la cadena, ponemos el primer caracter
                if (posicionCaracter[0] == entrada[strlen(entrada) - 1])
                {
                    cadena[i] = entrada[0];
                }
                else
                {
                    //Como strchr devuelve el puntero al caracter buscado, asignamos
                    //el siguiente caracter
                    cadena[i] = posicionCaracter[1];
                }
            }
        }

        //en texto se almacena la cadena a codificar
        printf("%s\n", cadena);
        fprintf(fsalida, "%s[^\n]", cadena);
    }

    fclose(fp);
    fclose(fsalida);

    return 0;
}
