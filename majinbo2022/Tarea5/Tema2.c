#include<stdio.h>
void ordenar_vector(int *vec, int n);
void swap(int *xp, int *yp);
int main(){
    int m,n,i,j,x=0;
    printf("Ingrese las dimensiones de la matriz: \n");
    scanf("%d %d",&m,&n);
    int matriz[5][3] = {{1,2,4},{3,4,8},{5,8,2},{9,4,6},{8,0,1}};
    int vec[15];
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            //printf("%d",matriz[i][j]);
            vec[x]=matriz[i][j];
            x++;
        }
        //printf("\n");
    }
    ordenar_vector(vec,15);
    x=0;
    for (i=0;i<5;i++){
        for(j=0;j<3;j++){
            matriz[i][j]=vec[x];
            x++;
        }
    }

    /*TODO LO DE ARRIBA PODES COPIAR A7 */
     for (i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n"); 
    
    x=0;
    for(i=0;i<5;i=i+2){
        for(j=3;j>=0;j--){
            if(i%2!=0){
                matriz[i][x]=matriz[i][j];
            }
            x++;
        }
        x=0;
    }
    

     /*este ya esta la matriz ordenada: */
    for (i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
void ordenar_vector(int vec[], int n){
    int i, j;
   for (i = 0; i < n-1; i++)     
       for (j = 0; j < n-i-1; j++)
           if (vec[j] > vec[j+1])
              swap(&vec[j], &vec[j+1]);
    
}
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

