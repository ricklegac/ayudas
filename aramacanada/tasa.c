#include<stdio.h>
int main(){
	float monto=0,mi,ta,i=0;
	printf("ingrese el monto inicial y la tasa anual: \n");
	scanf("%d%d",&mi,&ta);
	monto=mi;
	while(mi*2<=monto){
		printf("XD");
		monto=monto*(ta/100)+monto;
		i++;
	}
	printf("en %d año(s) se duplicara el monto",i);
	return 0;
}
