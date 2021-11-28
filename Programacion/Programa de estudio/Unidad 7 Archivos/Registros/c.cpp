#include<stdio.h>
#include<conio.h>

struct pais {
    char nombre[40];
    int cantidadhab;
};


int main()
{
    struct pais pais1,pais2,pais3;

    printf("Ingrese el nombre del pais:");
    gets(pais1.nombre);
    printf("Ingrese la cantidad de habitantes:");
    scanf("%i",&pais1.cantidadhab);
    fflush(stdin);
    printf("Ingrese el nombre del pais:");
    gets(pais2.nombre);
    printf("Ingrese la cantidad de habitantes:");
    scanf("%i",&pais2.cantidadhab);
    fflush(stdin);
    printf("Ingrese el nombre del pais:");
    gets(pais3.nombre);
    printf("Ingrese la cantidad de habitantes:");
    scanf("%i",&pais3.cantidadhab);
    if (pais1.cantidadhab>pais2.cantidadhab && pais1.cantidadhab>pais3.cantidadhab)
    {
        printf("Pais con mayor cantidad de habitantes: %s",pais1.nombre);
    }
    else
    {
        if (pais2.cantidadhab>pais3.cantidadhab)
        {
            printf("Pais con mayor cantidad de habitantes: %s",pais2.nombre);
        }
        else
        {
            printf("Pais con mayor cantidad de habitantes: %s",pais3.nombre);
        }
    }
    getch();
    return 0;
}
