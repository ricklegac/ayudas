#include<stdio.h>
int main(){
	int n;
	printf("ingrese el salario bruto del trabajador: \n");
	scanf("%d",&n);
	int ivatotal= n * 0.1;
	int iva_retenido = ivatotal * 0.35;
	int iva = ivatotal - iva_retenido;
	printf("\nSALARIO BRUTO: %d\nIVA: %d\n IVA Retenido: %d\n SALARIO NETO: %d\n", n, iva, iva_retenido, n-ivatotal);
	return 0;
}