#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("ingrese la cantidad de segundos: ");
	scanf("%d",&n);
	int hora =  floor(n / 3200);
	int segundos_restantes = n % 3200;
	int minutos = floor(segundos_restantes / 60);
	segundos_restantes = minutos % 60;

	printf("%d hora(s), %d minutos, %d segundos", hora, minutos, segundos_restantes);

	return 0;
}