//Buscar el menor numero 
#include<cmath>
#include<stdio.h>
//prototipo de la funci�n 
void proc(int a, int b){
	scanf("%d %d",&a,&b);
	if(a < b){
		printf("\n El numero menor es: %d \n \n",a);
	}
	else{
		printf("\n El numero menor es: %d \n \n",b);
	}
}
//curepo principal de la funncion 
int main(){
	int a,b;
	printf("\n Ingrese dos numeros: \n \n");
	//invocar funci�n
	proc(a,b);
	return 0;//finalizar el programa
}
