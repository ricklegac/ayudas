
#include<stdio.h>
int main(){
	int b,c;
	int j=6;
	int V[7];
	
	for (int i=0;i<7;i++){
		c=i+1;
		printf("Ingrese el valor del vector en la posicion %d= ",c);
		scanf("%d",&V[i]);
	}
	printf("El nuevo vector es: \n");
	for (int i=0;i<7;i++){
		b=V[i];
		if(i<3){
			V[i]=V[j];
			V[j]=b;
		}
		j--;
		printf("%d ",V[i]);
	}
	
	return 0;
}
