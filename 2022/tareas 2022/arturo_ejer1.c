#include<stdio.h>
void bubblesort(int arr[], int n);
void buscar_repetidos(int vec[], int n);
int main(){
	printf("ingrese la longitud del vector: ");
	int n;
	scanf("%d",&n);
	printf("ingrese los elementos del vector: \n");
	int i,vec[n];
	for (i=0;i<n;i++){
		scanf("%d",&vec[i]);

	}
	bubblesort(vec,n);
	printf("vector ordenado: ");
	for (i=0;i<n;i++) printf("%d ",vec[i]);
	buscar_repetidos(vec,n);
	
	return 0;
}

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// funcion que implementa bubblesort
void bubblesort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
// funcion que implementa el mayor numero mas repetido
void buscar_repetidos(int vec[], int n){
	int mayor= vec[0];
	int i,cont=0,cont_mayor=0;
	for (i=1;i<n;i++){
		if(vec[i-1]==vec[i]){
			cont++;
			mayor = vec[i];
		}else{
			if(cont>=cont_mayor){
				cont_mayor = cont;
				mayor = vec[i-1];
			}
			cont = 0;
		}
	} 
	if(cont_mayor == 0) printf("\nno existen elementos repetidos: -1");
	if(cont_mayor>0) printf("\nel elemento más repetido es: %d",mayor);
}
