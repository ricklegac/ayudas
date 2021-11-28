#include <stdio.h>

int main()
{
    int n;
    float j,k,suma;
    do {
    printf(" Ingrese valor entero positivo de N: ");
            scanf ("%d", &n);
    }while(n<1);
    for(k=1;k<=n;k++){

        if (k==1)
            printf("\n S= ");
        else
           printf(" + ");
        j=k+1;
        if (k<n){
            suma = suma +k +(k/j);
            printf(" %.0f + %.0f/%.0f ", k, k, j);}
        else{
            suma=suma+k;
            printf(" %.0f ", k);}

    }
    printf("  = %.0f", suma);
    return 0 ;
}
