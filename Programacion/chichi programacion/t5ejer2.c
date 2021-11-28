#include<stdio.h>
void ordenar(int l1[],int n);
int main(){
	int n,i;
	printf("ingrese la dimension del vector L1: \n");
	scanf("%d",&n);
	int l1[n];
	printf("ingrese los elementos del vector l1: \n");
	for(i=0;i<n;i++){
		scanf("%d",&l1[i]);
	}
	ordenar(l1,n);
	
	return 0;
}
void ordenar(int l1[],int n){
	int i,j,aux;
	for ( i = 0;i < n; i++){
		for ( j = 0; j< n-1; j++){
			if (l1[j] > l1[j+1]){ 
				aux = l1[j]; 
				l1[j] = l1[j+1]; 
				l1[j+1] = aux;
			}
		}
	}
	printf("\nvector ordenado: \n");
	for(i=0;i<n;i++){
		printf("%d ",l1[i]);
	}
	printf("\nvector simplificado:\n");
	int k;
	for(i = 0; i < n; i++){
		for(j = i+1; j < n; j++){
			if(l1[i] == l1[j]){
				k = j;
				while(k < n){
					l1[k] = l1[k+1];
					++k;
				}
				--n;
				--j;
 			}
		}
	}
	for(i = 0; i < n; i++)
		printf("%d ",l1[i]);
}
