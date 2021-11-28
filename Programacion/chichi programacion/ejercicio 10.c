/*Celeste A Esquivel P */
#include<stdio.h>
int main(){
	char num[6]; //variable num de tipo array de caracter
	int i; //variable i para recorrer el ciclo for
	printf("ingresar numero de 4 cifras\n");//impresion por pantalla
	scanf("%s",num);//lectura por pantalla
	//printf("%s",num);	
	for(i=5;i>=0;i--){//recorrido inverso de lo leido 
		printf("%c",num[i]);//impresion de la posicion i del array de carater num
	}
	return 0;//retorno numerico 0 fin del programa main
}
