#include<stdio.h>
#include<stdlib.h>
int suma(int a, int b){
    return a+b;
}
int resta(int a, int b){
    return a-b;
} 
//int (*funcion1)(int, int);    
//int (*funcion2)(int, int);  
void  total(int(*funcion1)(int, int), int(*funcion2)(int, int), int a , int b){
     int x, y;  
     x = funcion1(a,b);
     printf("\nLa suma es %d :", x);
     y= funcion2(a,b);
     printf("\nLa resta  es %d:", y);
}    

main(){
        int a , b;
        printf("Ingrese el vaor de a:");
        scanf("%d", &a);
        printf("Ingrese el vaor de b:");
        scanf("%d", &b); 
        total(suma, resta, a, b);
        system("pause");
       }
