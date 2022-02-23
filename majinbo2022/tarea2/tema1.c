#include<stdio.h>
int main(){
	printf("ingrese su capital actual: ");
	float n;
	scanf("%f",&n);
	float prestamo;
	if(n<0){
		prestamo = -n + 10000;
		n = -n + n + 10000;
		
	}else if(n>=0 && n<20000){
		prestamo = 20000-n;
		n= prestamo + n;
	}else{
		prestamo = 0;
	}
	printf("prestamo otorgado: %.2f\n",prestamo);
	printf("capital actual: %.2f\n", n);
	printf("----------------------------------------\n");
	printf("p/ equipo de computo: 5000\n");
	printf("p/ equipo mobiliario: 2000\n");
	n = n-7000;
	printf("p/ compras de insumos: %2.f\n",n/2);
	printf("p/ otorgar incentivos al personal: %2.f\n", n/2);
	printf("----------------------------------------\n");
	return 0;
}