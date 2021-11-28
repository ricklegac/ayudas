#include<stdio.h>
int main(){
	int n,f,c,j,i;
	printf("ingrese dimension cuadrada de la matriz A:\n");
	scanf("%d",&n);
	printf("ingrese dos numeros naturales: \n");
	scanf("%d%d",&f,&c);
	if(f>n || c>n || f<0 || c<0){
		printf("Indice de F o C fuera de rango...");
		return 1;
	}
	printf("elementos: \n");
	int A[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
	}
	int sumA=0,sumv=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j && i!=f && j!=c){
				if(j-1>0){
					sumv=sumv+A[i][j-1];
				}
				sumA=sumA+A[i][j];
			}
			
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",A[i][j]);
		}
		printf("\n");
	}
	printf("valores sumados: %d\n",sumA);
	printf("valores vecinos: %d",sumv);
	return 0;
}
