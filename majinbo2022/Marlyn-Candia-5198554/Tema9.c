#include<stdio.h>

void ordenar(int f, int c, int matriz[][c]);
int main(){
	int fil,col,i,j;
	scanf("%d%d",&fil,&col);
	int MAT[fil][col];
	
	for(i=0 ; i<fil ; i++){
		for(j=0 ; j<col ; j++){
			scanf("%d",&MAT[i][j]);
		}
	}	
	
	ordenar(fil,col,MAT);

	for(i=0 ; i<fil ; i++){
		if(i%2!=0){
			for(j=0 ; j<col ; j++){	
				printf("%d ",MAT[i][j]);
			}
			printf("\n");		
		}else{
			for(j=col-1 ; j>0 ; j--){	
				printf("%d ",MAT[i][j]);
			}
			printf("\n");
		}
	
	}	

	return 0;
}

void ordenar(int f, int c, int matriz[][c]){
	int i, j, aux,x,y;
	 for(i=0; i<f; i++)
     {
        for(j=0; j<c; j++)
        {
            for(x=0; x<f;x++)
            {
                for(y=0; y<c; y++)
                {
                    if(matriz[i][j]<matriz[x][y])
                    {
                        aux=matriz[i][j];
                        matriz[i][j]=matriz[x][y];
                        matriz[x][y]=aux;
                    }
 
                }
            }
         }
    }
 
} 
