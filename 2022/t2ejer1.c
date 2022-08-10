#include<stdio.h>
#define equipo_computo 5000
#define mobiliario 2000
int main(){
	printf("ingrese el capital: ");
	int c;
	scanf("%d",&c);
	int prestamo =0;
	if(c<0){
		prestamo = (-1*c)+10000;
		c = 10000;
	}else if(c>=0 && c<20000){
		prestamo = 20000-c;
		c= 20000;
	}else{
		prestamo = 0;	
	}
	int insumos = c - equipo_computo - mobiliario;
	printf("\ninsumos e incentivos: %d \nprestamo otorgado del banco: %d\n",insumos,prestamo);



	return 0;		
}