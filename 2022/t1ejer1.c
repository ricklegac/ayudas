#include<stdio.h>
int main(){
    printf("ingrese salario bruto: ");
    int n;
    scanf("%d",&n);
    float hacienda = n * 0.16; 
    float ips = n * 0.055;
    n = n - hacienda - ips;
    printf("Salario liquido:  %d \nDescuento de IPS: %.2f \nDescuento de Hacienda: %.2f", n, ips,hacienda);
    return 0;
}