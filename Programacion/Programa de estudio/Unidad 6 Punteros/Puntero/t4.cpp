
#include<stdio.h>
int main(){
    int i,j,m,n;
    printf("Ingrese la cantidad de filas y columnas de la matriz:");
    printf("\nFilas: "); scanf("%d",&m);
    printf("Columnas: "); scanf("%d",&n);
    int mat[m][n];
    int *p[m],(*r)[n],**q;
    r=mat;
    q=p;
    for(i=0;i<m;i++) *(p+i)=*(mat+i);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("mat[%d][%d]: ",i,j); scanf("%d",(*(p+i)+j));
        }
    }
    printf("\nImprimiendo con p\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",*(*(p+i)+j));
        }
        printf("\n");
    }
    printf("\nImprimiendo con r\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",(*(r+i))[j]);
        }
        printf("\n");
    }
    printf("\nImprimiendo con q\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",*(*(q+i)+j));
        }
        printf("\n");
    }
    return 0;
}

