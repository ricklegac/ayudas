/* 2.Escribir un programa que permita leer 10 números enteros positivos e imprimir la sumatoria de los números pares y la
sumatoria de los impares. Se deben validar los datos de entrada. Utilizar el bucle do-while.*/
#include<stdio.h>
int main(){
    int c=0, nro= 0, sum_impar= 0, sum_par= 0;
    do{
        c++;
        do{
            printf("Nro%d: ",c);
            scanf("%d", &nro);
            if(nro<=0){printf("Error! Nro debe ser mayor a cero\n");}
        }while(nro<= 0);

        if(nro%2 == 0){ sum_par= sum_par + nro;}
        else{sum_impar= sum_impar + nro;}
    }while(c<10);
    printf("\n\tLa suma de los nros pares es: %d", sum_par);
    printf("\n\tLa suma de los impares es: %d", sum_impar);
return 0;
}
