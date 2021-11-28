#include<stdio.h>
int main(){
	int n,i,j;
	printf("ingrese n dim de la matriz\n");
	scanf("%d",&n);
	int mat[n][n];
	printf("ingrese los valores");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	//precargamos para mejor correccion
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	int x=0;
	int ban=0;
	for(i=0;i<n;i++){
		if(mat[i][i]!=0){
			break;
			ban=1;
		}
	}
	/*verificamos si la diagonal es cero*/
	if(ban==1){
		printf("no es un matriz trebol\n");
	}
	int vec1[n/2],vec2[n/2];
	x=j+1;
	/*aca se plantea lo siguinte:
	*guardamos en dos vectores la diagonal por encima de la diagonal secundaria
	y por debajo de la misma
	y si son iguales cumple para que sea una matriz trebol*/
	int a=0;
	for(i=0;i<n;i++){
		for(j=0;j<x;j++){
			vec1[a]=mat[i][j];
			//printf("%d",vec1[a]);
			a++;
			x--;	
		}
	}
	x=0;	
	for(i=n;i>0;i--){
		for(j=n;j>x;j--){
			vec2[a]=mat[i][j];
			//printf("\n%d",vec2[a]);
			a++;
			x++;	
		}	
		
	}
	if(vec1==vec2){
		printf("matriztrebol\n");		
		
	}else{
		printf("no se cumple\n");
	}
	
	return 0;
}
