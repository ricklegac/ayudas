#include<stdio.h>
void frecuencia(int aux[],int m);
int main(){
	int m,n,i,j;
	printf("ingrese m y n:\n");
	scanf("%d",&m);
	scanf("%d",&n);
	while(m>20 || m<0){
		printf("vuelva a introducir m:\n");
		scanf("%d",&m);
	}
	while(n>25 || n<0){
		printf("vuelva a introducir n:\n");
		scanf("%d",&n);
	}
	int A[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
			while(A[i][j]>25 || A[i][j]<1){
				printf("rango no aceptado: vuelva a introducir A[%d][%d]",i,j);
				scanf("%d",&A[i][j]);
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	int x=0;
	int aux[m];
	while(x<n){
		for(j=0;j<m;j++){
			aux[j]=A[j][x];
			frecuencia(aux,m);
		}
		printf("\n");
		x++;
	}
	
	
	return 0;
}
void frecuencia(int aux[],int m){
	int i,j,temp;
	for ( i = 0;i < m; i++){
		for ( j = 0; j< m-1; j++){
			if (aux[j] < aux[j+1]){ 
				temp = aux[j]; 
				aux[j] = aux[j+1]; 
				aux[j+1] = temp;
			}
		}
	}
	for ( {
	.
	}i = 0;i < m; i++){
		if
	}
	
}
