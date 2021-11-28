#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define max 20
void ordenar(int *a,int elementos);
void contabilizador(int *v,int ini,int fin);
int main(){
	int n,i;
	printf("ingresar la cantidad de elementos del vector:\n");
	scanf("%d",&n);
	int n2=n+ceil(n/2);
	while(n%4!=0){
		printf("la dimension %d no es multiplo de 4, vuelva a ingresar:\n",n);
		scanf("%d",&n);
	}
	int vec[n];
	int vec2[n2];
	srand (time(NULL));
	for(i=0;i<n;i++){
		vec[i]=1+rand()%max;
		printf("\nvec[%d]= %d", i+1,vec[i]);
	}
	ordenar(vec,n);
	printf("\nVector ordenado: \n");
	for(i=0;i<n;i++){
		printf("%d ",vec[i]);
	}
	for(i=0;i<n;i++){
		vec2[i]=vec[i];
	}
	for(i=0;i<n;i++){
		vec2[i]=vec[i];
	}
	int j=0;
	printf("\nvector final: \n");
	while(j<n){
		if((j+1)%4==0){
			contabilizador(vec,j-3,j+1);
		}
		j++;
	}
/*	
	for(i=0;i<n2;i++){
		printf(" %d",vec2[i]);
	}*/
}
void contabilizador(int *v,int ini,int fin){
	int i,par=0,impar=0;
	
	//printf("pos i %d ",ini);
	//printf("pos f %d ",fin);
	for(i=ini;i<fin;i++){
		printf("%d ",v[i]);
		if(v[i]%2==0){
			par++;
		}else{
			impar++;
		}	
	}
	printf("%d %d ",par,impar);
}
void ordenar(int *a,int elementos){
	int aux_elem=0;
	int i,j;
	for ( i = 0; i < elementos-1; i++){
     	for (j = 1; j < elementos; j++){
        	if (a[j] > a[j-1]){   
             aux_elem = a[j];
			 a[j] = a[j-1];
             a[j-1] = aux_elem;
        	}
        }
 	}
}
