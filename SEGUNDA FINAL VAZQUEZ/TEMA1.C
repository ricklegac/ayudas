#include<stdio.h>
#include<math.h>
//#include <climits>
float minimo(float a,float b);
void transformadaDistancia(int **matrix,int m,int n );
int main(){
	FILE *file = fopen("binario.txt", "r");
	FILE *fr = fopen("result.txt", "w+");
	if(file==NULL){
		printf("error no se encontro el archivo");
		return 1;
	}
	int m,n;
	fscanf(file,"%d\t%d\n",&m,&n);
	printf("%d %d \n",m,n);
	int A[m][n];
	int matriz[m][n];
	size_t i,j,k,l;
	for( i = 0; i < m; ++i){
        for( j = 0; j < n; ++j)
            fscanf(file, "%d\t", A[i]+j);
    }
    for( i = 0; i < m; i++){
        for( j = 0; j < n; j++){
        	matriz[i][j]=A[i][j];
            printf("%d ", matriz[i][j]);
        }
       	printf("\n");
    }
    float B[m][n];
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            B[i][j] = 1000;
           //printf("%.2f ",B[i][j]);
        }
        //printf("\n");
    }

    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
    		for(k=0;k<m;k++){
    			for(l=0;l<n;l++){
    				if(matriz[k][l]==1){
    					//printf("sqrt: %.2f \n",sqrt(pow((i-k),2)+pow((j-l),2)));
    					//printf("B: %d\n", B[i][j]);
    					//if(B[i][j]=minimo(B[i][j],abs(sqrt(pow((i-k),2)+pow((j-l),2))))>=0)
    						B[i][j]=minimo(B[i][j],abs(sqrt(pow((i-k),2)+pow((j-l),2))));
    				}	
    			}
    		}
    	}   
    }
      /*sqrt(pow((i-k),2)+pow((j-l),2))*/
    for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++)
           fprintf(fr,"%.4f ",B[i][j]);
 
        fprintf(fr,"\n");
    }
	//transformadaDistancia(matriz,m,n);
	fclose(file);
	return 0;
}
/*void transformadaDistancia(int **matrix,int m,int n ){
	int i,j,l,k;
	int B[m][n];
	for ( i = 0; i < m; i++)
        for ( j = 0; j < n; j++)
            B[i][j] = 1000;

	for( i = 0; i < m; ++i){
        for( j = 0; j < n; ++j){
            printf("%d ", matriz[i][j]);
        }
       	printf("\n");
    }

   for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++)
        {
        	//printf("%d ", matrix[k][l]);
            // Traversing the whole matrix
            // to find the minimum distance.
            for ( k = 0; k < m; k++)
                for ( l = 0; l < n; l++)
                {
                    // If cell contain 1, check
                    // for minimum distance.
                    if (matrix[k][l] == 1){
  
                        B[i][j] = min(B[i][j],sqrt(pow((i-k),2)+pow((j-l),2)));
                    }
                }
        }
     }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
            printf("%d ",B[i][j]);
 
        printf("\n");
    }*/

float minimo(float a,float b){
	//	printf("%.2f %.2f\n",a,b);
	if (abs(a)<=abs(b)) return a;
	else return b;
}

