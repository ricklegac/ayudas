#include<stdio.h>
int main(){
	printf("ingrese un numero de dos digitos: ");
	int n;
	scanf("%d",n);
	while(n<10 || n>99){
		printf("numero no valido, vuelva a ingresar: ");
		scanf("%d",n);
	}
	decena = n % 10;
	printf("decena: %d", decena );
	return 0;
}