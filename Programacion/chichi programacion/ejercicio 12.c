/*Celeste A Esquivel P*/
#include<stdio.h>
//#include<stdlib.h>
int main(){
	int H,M,S,tot=0; //inicializacion de variales H M S tot como variables integer
	printf("ingrese el horario\n");//impresion por pantalla
	scanf("%d:%d:%d",&H,&M,&S);//lectura de la forma HH:MM:SS 
	tot=H*3600+M*60+S;//calculo de segundos 
	printf("%d",tot);//impresion por pantalla
	return 0;//retorno numerico fin de main
}

