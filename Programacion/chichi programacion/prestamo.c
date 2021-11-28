#include<stdio.h>
int main(){
	int saldo;
	float prestamo=0,tiene=0;
	printf("ingrese saldo:\n");
	scanf("%d",&saldo);
	if(saldo<0){
		prestamo=10000+(saldo*-1); 
		tiene=10000;  
	}
	if(saldo>=0 && saldo<20000){
		prestamo=20000-saldo;
		tiene=20000;
	}else if(saldo>=0 && saldo>=20000){
		prestamo=0;
		tiene=saldo;	
	}
	tiene=tiene-7000;
	printf("\notorgara: %.2f a insumo y %.2f a incentivos: ", tiene/2,tiene/2);
	if(prestamo>0){
		printf("\npresto del banco: %.2f \n",prestamo);
	}else{
		printf("\nno presto del banco");
	}
	
	
	return 0;
}
