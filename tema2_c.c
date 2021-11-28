#include<stdio.h>
void extraer(int fila,int columna ,int M[fila][columna],int a,int b,int c,int d);
int main(){
	/*Ingresamos los valores de la matriz*/
	int a,b,c,d,fila,col,i,j; 
	scanf("%d",&fila);
	scanf("%d",&col);
	scanf("%d",&a);	 
	scanf("%d",&b);	 
	scanf("%d",&c);	 
	scanf("%d",&d);	
	int N[c-a][d-b];
	int M[fila][col]; 
	printf("ingrese los valores de la matriz: \n");
	/*leemos los valores de la matriz */
	for(i=0 ; i<fila ; i++){
		for(j=0 ; j<col ; j++){
			scanf("%d",&M[i][j]);
		}
	}
	extraer(fila,col,M,a,b,c,d); //llamamos a la funcion extraer 	
	return 0;
}
/*funcion extraer*/
void extraer(int fila,int columna ,int M[fila][columna],int a,int b,int c,int d){
int x=0,y=0,i,j;
	int N[c-a][d-b]; 
	for(i=a ; i<c; i++){ 
		for(j=b ; j<d; j++){ 
			N[x][y]=M[i][j]; 
			printf("%d",N[x][y]);
			y++;			
		}
		x++	;
		printf("\n");
	}
}
