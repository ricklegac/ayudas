#include<stdlib.h>
#include<stdio.h>
int main(){
	int n,i,j,x,iini,jini,jfin;
	printf("ingrese n\n");
	scanf("%d",&n);
	int mat[n][n];
	printf("ingrese valores");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	//recorremos la matriz y donde encontramos 1 recorremos de forma paralela
	int ban=0,cont=0,may;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(mat[i][j]==1){
				for(x=j+1;x<n;x++){
					if(mat[i][x]==mat[i][j]){
						cont=cont+1;
						//la mayor cantidad inicialmente es la primera aparicion de 1 consecutivos
						if(ban==0){
							may=cont;
							ban=1;
						}
						//contamos los 1 y vemos si es mayor a la cantidad anteriormente
						//encontrada
						if(may>=cont){
							iini=i;
							jini=j;
							jfin=x;
							may=cont;
						}
					}
				}
			}
		}
	}
	//imprimimos con +1 para que la matriz empiece en 1 y no en 0 como es en c
	
	printf("empieza en (%d,%d)\ntermina en (%d,%d)\n",iini+1,jini+1,iini+1,jfin+1);
	return 0;
}
