//Escriba una función IntergerPow (base, exponente) que devuelva el valor de la Base Exponente 
//Ejemplo IntergerPow (3,4) = 3*3*3*3. Suponga que es un entero positivo

#include<stdio.h>
//parte declarativa
void intergerpow(int, int);
//cuerpo principal 
int main()
{
	int base,exponente;
	printf("\n\t                   BASE EXPONENTE - B^E");
	printf("\n\n============================================================================");
	printf("\n\n\tINGRESE LA BASE: ");
	scanf("%d",&base);
	printf("\n\tINGRESE EL EXPONENTE: ");
	scanf("%d",&exponente);
	printf("\n\n=============================== SALIDA =========================================");
	printf("\n");
	intergerpow(base,exponente);
	printf("\n\n");
	return 0;
}
//prototipo
void intergerpow(int base, int exponente)
{
	int res=1;
	printf("\t\t%d^%d = ", base, exponente);	
	for(int k = 1; k <= exponente; k++)
	{
		res *= base;
		if(k != exponente)
			printf("%d * ", base);
		else
			printf("%d = ", base);
	}
	printf("%d", res);
}




