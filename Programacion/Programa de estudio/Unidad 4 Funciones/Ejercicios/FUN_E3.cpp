#include<stdio.h>
//Crear una funcion que reciba como parámetro un numero entero
//y escriba la tabla de multiplicar de ese numero
//(por ejemplo: para el 3 debera llegar desde 3x0=0 hasta 3x10=30)
//Prototipo de funcion 
void imp(int x){
	for(int i = 0;i <= 10;i++){
		printf(" %d x %d = %d \n \n",x,i,x * i);
	}
}
//cuerpo principal
int main(){
	int x;
	printf("\n Ingrese un numero: \n \n");
	scanf("%d",&x);
	printf("\n La tabla de multiplicar del numero ingresado es: \n \n");
	imp(x);
	return 0;
}	
