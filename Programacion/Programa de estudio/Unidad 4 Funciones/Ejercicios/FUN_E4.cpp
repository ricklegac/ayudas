#include<cmath>
#include<stdio.h>
//declaracion de funcion
int funcion_divisor(int numero,int divisor);

//cuerpo principal 
int main(){

// declaración de variables 
	int d,max,m,a,resto;
	printf("Introduce el dia: ");
	scanf("%d",&d);
	printf("\nIntroduce el mes: ");
	scanf("%d",&m);
	printf("\Introduce el anyo: ");
	scanf("%d",&a);
	printf("\nHoy es dia %d de %d del %d",d,m,a);
	if (m==4 || m==6 || m==9 || m==11) max=30;
	if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) max=31;
		if (m==2){
			resto = funcion_divisor(a,4);
			if (resto==0) max=29;
			else max=28;
			}
			d++;
			if (d>max){
				d=1;m++;
				if (m>12) {
					 m=1; 
					 a++;	
				 }
				}
				printf("\n\ny mañana sera %d de %d del %d",d,m,a);
				printf("\n\n");
return 0;
}
			
// Prototipo de funcion			
int funcion_divisor(int numero,int divisor)
				{
					int resto = numero % divisor;
					return (resto);
				}

