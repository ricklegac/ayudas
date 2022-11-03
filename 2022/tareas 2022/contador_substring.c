#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char cadena[100], subcadena[100];
    fflush(stdin);
    scanf("%[^\n]s",subcadena);
    fflush(stdin);
    scanf("%[^\n]s", cadena);
    int M = strlen(subcadena);
    int N = strlen(cadena);
    int res = 0;
    //recorremos la cadena hasta N-M M es la longitud de la subcadena
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (cadena[i+j] != subcadena[j]) //vemos si coinciden 
                break;
        //si coincide el largo de j con el largo de la subcadena contamos 
        if (j == M) 
        {
           res++;
        }
    }
    printf(" --> %d",res);
}