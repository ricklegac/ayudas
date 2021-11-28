#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
	int a,b;
	printf("ingrese A y B:\n");
	scanf("%d%d",&a,&b);
	if(b==0){
		printf("division no valida denominador = 0\n");
		return 1;
	}
	int dividir,c=0,i,parte_entera,residuo;
	if(a<b){
		dividir=maximo_comun_divisor(a,b);
		printf("Dados los numeros A=%d y B=%d se deberia imprimir: %d/%d",a,b,a/dividir,b/dividir);		
	}
	if(a>b && b!=1){
		parte_entera=floor(a/b);
		residuo=a%b;
		dividir=maximo_comun_divisor(residuo,b);
		printf("Dados los numeros A=%d y B=%d se deberia imprimir:  %d %d/%d",a,b,parte_entera,residuo/dividir,b/dividir);	
	}
	if(b==1){
		printf("Dados los numeros A=%d y B=%d se deberia imprimir: %d",a,b,a);
	}
	if(a==b){
		printf("Dados los numeros A=%d y B=%d se deberia imprimir: 1",a,b);
	}
	
	return 0;
}

int maximo_comun_divisor(int a, int b) {
    int temporal;
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}
