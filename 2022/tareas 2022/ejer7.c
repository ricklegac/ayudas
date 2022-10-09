#include<stdio.h>
#include <stdlib.h>
#include<time.h>
void swap(int* xp, int* yp);
void bubbleSort(int arr[], int n);
void insertionSort(int A[], int n);
int ordenar_vector(int v[],int n, char parametro);
int main(){
	printf("ingrese la longitud del vector V: ");
	int n;
	scanf("%d",&n);
	//caso A:
	int v[n];
	int i;
	printf("ingrese los elementos del vector V:\n");
	for ( i = 0; i < n; ++i)
	{
		scanf("%d",&v[i]);
	}
	char parametro;
	printf("ordenacion: Ascendentemente(A) - Descentemente (D)\n");
	fflush(stdin);
	scanf("%c",&parametro);
	ordenar_vector(v,n,parametro);
	printf("\n--- CON VALORES RANDOM: -----\n");
	srand(time(NULL));
	for(i=0;i<n;i++){
		v[i]	= rand()%100;
	}
	printf("\nvector random: \n");
	for(i=0;i<n;i++){
		printf("%d ", v[i]);
	}
	printf("ordenacion: Ascendentemente(A) - Descentemente (D)\n");
	fflush(stdin);
	scanf("%c",&parametro);
	ordenar_vector(v,n,parametro);
	return 0;
}
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] < arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void insertionSort(int A[],int n)
{
       int i,j,v;
 
      for (i = 1; i < n; i++)
        {
             v = A[i];
             j = i - 1;
             while (j >= 0 && A[j] > v)
             {
                  A[j + 1] = A[j];
                  j--;
             }
             
             A[j + 1] = v;
      }   
}
int ordenar_vector(int v[], int n,char parametro){
	int i;
	printf("%c",parametro);
	if(parametro == 'D'){
		printf("escentemente: ");
		bubbleSort(v,n);
	}else if(parametro=='A'){
		printf("scendentemente: ");
		insertionSort(v,n);
	}else{
		printf("parametro no valido... saliendo");
		return 1;
	}
	for(i=0;i<n;i++){
		printf(" %d",v[i]);
	}
	return 0;
}