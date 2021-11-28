#include <stdio.h>

int main()
{
    int A, B, C, D, RESU;


    do{
        A=0; B=0; C=0; D=0; RESU=0;
        printf("\n Ingrese valor de A (9999999 para salir) : ");
        scanf ("%d", &A);
        if (A != 9999999) {
            printf(" Ingrese valor de B                      : ");
            scanf ("%d", &B);
            printf(" Ingrese valor de C                      : ");
            scanf ("%d", &C);
            printf(" Ingrese valor de D                      : ");
            scanf ("%d", &D);
            if( (A >= C && A <= D) && !( B>=C && B <= D) ) {
                RESU = A + B;
                printf("\nEL VALOR DE A ES: %d , EL VALOR DE B ES: %d, EL RESULTADO DE LA SUMA ES: %d", A, B, RESU);}

            else {
                RESU = A - B;
                printf("\nEL VALOR DE A ES: %d , EL VALOR DE B ES: %d, EL RESULTADO DE LA RESTA ES: %d", A, B, RESU);

            }
        }
    }while(A!=9999999);
    return 0 ;
}

