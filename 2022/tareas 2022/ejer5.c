#include <stdio.h>

int maysuma(int a[],int n)
{
  int i,j,k;
  int sum,mayorsuma = 0;
  	for(i=0; i<n; i++){
    	for(j=i; j<n; j++){
      		sum = 0;
      		for(k=i ; k<=j; k++){
				sum = sum + a[k];
      		}
      		if(sum>mayorsuma) mayorsuma = sum;
    	}
  	}
   return mayorsuma;
}
int main(){
	int i;
	printf("ingrese la dimension del vector: ");
	int n;
	scanf("%d",&n);
	while(n>100){
		printf("n tiene que ser como maximo 100 vuelve a ingresar \n");
		scanf("%d",&n);
	}
	printf("ingrese los elementos del vector: \n");
	int vec[n];
	for(i=0;i<n;i++) {
		scanf("%d", &vec[i]);
	}
	int tamano = sizeof(vec)/sizeof(vec[0]);
	printf("\n vector:  ");
	for(i = 0; i < tamano; i++) {
		printf("%d  ", vec[i]);
	}
	printf("\n");
	printf("la mayor suma es  : %d \n", maysuma(vec, tamano));
	return 0;
}