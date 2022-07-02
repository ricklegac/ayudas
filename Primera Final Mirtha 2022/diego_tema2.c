#include<stdio.h>
#include<math.h>
int main(){
    //DECLARACIONES INICIALES
    int m,n,i,j;
    printf("ingrese el orden de la matriz: \n");
    scanf("%d",&m);
    scanf("%d",&n);
    if(m!=n){ //VERIFICACION DE SI ES CUADRADA LA MATRIZ
        printf("no es cuadrada");
         printf("no es trebol");
        return 1;
    }
    if (m%2==0){ //VERIFICACION SI LA COLUMNA NO ES IMPAR
        printf("es orden par");
         printf("no es trebol");
        return 1;
    }
    int mat[m][n]; //CREACION DE LA MATRIZ
    //LECTURA DE LA MATRIZ
    printf("ingrese una matriz: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    //VERIFICACION SI TIENE DIAGONAL PRINCIPAL CERO
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                if(mat[i][j]!=0){
                    printf("la matriz principal no son todos ceros! \n");
                     printf("no es trebol");
                    return 1;
                }
            }
        }
    }
    //VERIFICACION SI TIENE DIAGONAL SECUNDARIA CERO
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(abs(i-j)==1){
                if(mat[i][j]!=0){
                    printf("la matriz secundaria no son todos ceros! \n");
                    printf("no es trebol");
                    return 1;
                }
            }
        }
    }
    //CREAMOS LA MATRIZ ESPEJO PARA UNA NUEVA MATRIZ
    double mitad = floor(n/2);
    int b = (int)mitad;
    int new_matrix[m][b];
    for(i=0;i<m;i++){
        for(j=0;j<b;j++){
            new_matrix[i][j]= mat[i][j];
        }
    }
  /*  for(i=0;i<m;i++){
        for(j=0;j<b;j++){
            printf("%d",new_matrix[i][j]);
        }
    
    printf("\n");
    }*/
    int new_matrix2[m][b];
    for(i=0;i<m;i++){
        for(j=b+1;j<n;j++){
            new_matrix2[i][j]=mat[i][j];
        }
    }
    //COMPARAMOS LA MATRICES SI SON ESPEJO UNA DE OTRA 
    for(i=0;i<m;i++){
        for(j=0;j<b;j++){
            if(new_matrix2[i][j]!=new_matrix2[i][j]){
                printf("no es trebol");
                return 1;
            }
        }
    }
    printf("es una matriz trebol! ");
    return 0;
}