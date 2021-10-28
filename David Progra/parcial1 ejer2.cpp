#include<stdio.h>
int main(){
	int m,n,x,y,j,h,k,num;
	printf("ingresar dimensio mat:\n");
	scanf("%i%i",&m,&n);
	printf("ingresar posicion en x y\n");
	scanf("%i%i",&x,&y);
	printf("ingresar numero\n");
	scanf("%i",&num);
	int mat[m][n];
	int i=1;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			mat[i][j]=num;
		}
	}
	i=0;
	j=0;
	while(i<m || i< n){
		mat[x-i][y]=mat[x-i][y]-1;
		mat[x+i][y]=mat[x+i][y]-1;
		mat[x+i][y+i]=mat[x+i][y+i]-1;
		mat[x+i][y-i]=mat[x+i][y-i]-1;
		mat[x-i][y-i]=mat[x-i][y-i]-1;
		mat[x-i][y+i]=mat[x-i][y+i]-1;
		mat[x][y+i]=mat[x][y+i]-1;
		mat[x][y-i]=mat[x][y-i]-1;
	/*	for(h=0;h<m;h++){
			for(k=0;k<n;k++){
				printf(" %i ",mat[h][k]);
			}
			printf("\n");
		}*/
		i++;
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf(" %i ",mat[i][j]);
		}
		printf("\n");
	}
	/*ACA LO QUE PENSABA HACER ES UN BUCLE DE i QUE CUANDO IBA AUMENTANDO IBA TAMBIEN AUMENTANDO EL TAMAñO 
	DE MI EXPANSION
	NO ME DIO EL TIEMPO PARA TERMINAR E IMPRIMIR PERO ESE ES LA IDEA
	OJALA PUEDA CONSIDERARSE ALGUNOS PUNTOS
	*/
	return 0;
}
