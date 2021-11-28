#include<stdio.h>
int invertir(int n,int b);
int main(){
	int num,result,b=0;
	printf("ingrese un numero\n");
	scanf("%d",&num);
	printf("invirtiendo...\nNumero invertido: ");
	invertir(num,b);
	return 0;
}
int invertir(int n,int b){
	if(n==0){
		return 0;
	}else{
		b=n%10;
		n=n/10;
		printf("%d",b);
		return invertir(n,b);
	}
}
