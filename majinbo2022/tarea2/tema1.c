#include<stdio.h>
int main(){
	printf("ingrese su capital actual: ");
	float n;
	scanf("%f",&n);
	float prestamo;
	if(n<0){
		n = -n + n + 10000;
		prestamo = -n + 10000;
		printf("prestamo otorgado: %.2f",prestamo);
	}

	return 0;
}