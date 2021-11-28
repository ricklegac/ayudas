#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (){
	char cad,cadena[100];
	int vector[100],vectorin[100];
	int i=0,j=0,k=0,num=0,num_ori=0,y=0,n=0,base=0;
	printf("Ingrese un numero de hasta 5 cifras: ");
	scanf("%s",cadena);
	k=strlen(cadena);
	int numero[k];
	//printf("%d\n",k);
	for(i=0;i<k;i++){
		cad=cadena[i];
		numero[i]=atoi(&cad);
	}
	for (i=0;i<k;i++){
		num_ori=num_ori+numero[i]*pow(10,(k-1)-i);
	}
	for (base=2;base<=16;base++){
		num=num_ori;
		y=0; n=0; j=0;
		while(y==0){
			if(num>=base){
				vector[n]=num%base;
				num=num/base;
				n++;
			} else{
				vector[n]=num;
				y=1;
			}
		}
		for (k=n;k>=0;k--){
			vectorin[n-k]=vector[k];
		}
		for(k=0;k<=n;k++){
			if(vector[k]==vectorin[k]){
				j++;
			}
		}
		if(j==(n+1)){
			printf("\nEl numero es capicua en base: %d",base);
		
		}
		
	}
	return 0;
}
