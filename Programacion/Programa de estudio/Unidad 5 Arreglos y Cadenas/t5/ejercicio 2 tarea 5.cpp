
#include <stdio.h>
int i;
int main (){
int A[6][7]={
{6, 4, 3, 5, 3, 1, 3},
{8, 3, 1, 2, 1, 0, 1},
{3, 5, 6, 7, 6, 2, 7},
{1, 6, 5, 7, 5, 3, 7},
{3, 1, 3, 1, 3, 2, 2},
{2, 3, 4, 3, 4, 5, 5}};
/*	int A[6][7];
	printf("Ingrese los valores para la ");
	for(int i=0;i<7;i++){
		printf("columna %d \n",i+1);
		for(int j=0; j<6;j++){
			printf("fila %d:",j+1);
			scanf("%d",&A[j][i]);
		}

	printf("\n");
	}*/
	for(int i=0;i<6;i++){
		for(int j=0; j<7;j++){
			printf(" %d ",A[i][j]);
		}
		printf("\n");
	}

	int a,b,n,m;
	int fil1=0;
	int fil2=5;
	int col1=0;
	int col2=0;
	int aux=0;
	int cont=0;;
	int B[6][7];
	for(int k=0;k<6;k++){
    	for(int l=0;l<7;l++){
    		B[k][l]=0;
    	}
	}
	while(col1<=6){
		a=col1+1;
		b=col2+1;
		if(A[fil1][col1]==A[fil2][col2]){
			cont++;
		}
		if (cont==6){
			B[col2][col1]=1;
		}
		aux++;
		fil1++;
		fil2--;
		if ((fil1==6)&&(fil2==-1)){
			aux=0;
			cont=0;
			col2++;
			fil1=0;
			fil2=5;
		}
		if(col2==6){
			col1++;
			col2=0;
		}
	}
	printf("\n");

    	printf("\n");
	for(int i=0;i<6;i++){
    	for(int j=0;j<7;j++){
        	if(B[i][j]==1){
        		B[j][i]=0;
				printf("\nColumna %d \n   ",i+1);
				for(int k=0;k<6;k++){
					printf(" %d ",A[k][i]);
				}
				printf("\nes capicua con columna ");
				for (int f=0;f<7;f++){
					if (B[i][f]==1){
						B[f][i]=0;
						printf(" %d ",f+1);
						B[i][f]=0;
						m=i;
						n=f;
					}
				}
				printf("\n   ");
				for(int k=0;k<6;k++){
					printf(" %d ",A[k][n]);
				}
			}
    	}
    }
}
