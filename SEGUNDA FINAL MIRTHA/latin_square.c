#include<stdio.h>
void cuadrado_latino(int n)
{
    /*esta variable es por donde empezamos */
    int k = n+1,i,j;
 
    /*aca se juega con la impresion para que vaya haciendo lo que pide el problema */
    for ( i=1; i<=n; i++)
    {
        int temp = k;
        while (temp <= n)
        {
            printf("%d ", temp);
            temp++;
        }
        for ( j=1; j<k; j++)
            printf("%d ", j);
 
        k--; //reducimos k para ser el tope de donde se imprima 
        printf("\n");
    }
}
 
/*Funcio principal*/
int main(void)
{
    int n;
    printf("Ingrese N (orden de la matriz):  ");
    scanf("%d", &n);

    cuadrado_latino(n);
 
    return 0;
}