#include<stdlib.h>
#include<stdio.h>
#include<time.h>
float Probabilidad(int inicial,int m, int n);
int main(){
	//ancho de la calle es N
	//pasos del borracho M
	int n,m;
	printf("ingrese N y M: \n");
	scanf("%d %d",&n, &m);
	FILE *fr = fopen("tema2guille.txt", "w");
	while(n%2==0){
		printf("%d es un numero par, vuelve a ingresar: \n",n);
		scanf("%d",&n);
	}
	while(n>100 || m>100 || n<2 || m<0){
		if(n>100){
			printf("%d es mayor a 100,  vuelve a ingresar:\n",n);
			scanf("%d",&n);
		}
		if(m>100){
			printf("%d es mayor a 100,  vuelve a ingresar:\n",m);
			scanf("%d",&m);
		}
		if(n<2){
			printf("%d es menor a 2,  vuelve a ingresar:\n",n);
			scanf("%d",&n);
		}
		if(m<0){
			printf("%d es menor a 0,  vuelve a ingresar:\n",m);
			scanf("%d",&m);
		}
	}
	//0 izquierda
	//1 derecha 
	//2 recto
	int casillero[n]; 
	int sum=0,x;
	printf("ingrese la cantidad de veces que quiere probar el proceso: \n");
	scanf("%d",&x);
	int inicial=((n+1/2));
	srand(time(0));
	int i=0;
	while(i<x){
		if(Probabilidad(inicial,m,n)){
			sum++;
		}
		i++;
	}
	float prob=sum/m;
	fprintf(fr,"Probabilidad de que llegue: %.2f",prob);

	return 0;
}
float Probabilidad(int inicial,int m, int n){
	srand(time(0));
	int counter=0,cant_pasos=0;
	int paso,ban=0;
	int x;
	
	float result=0.0;
	while(1){
		paso=rand()%3;
		if(paso==0) inicial++;	
		if(paso==1) inicial--;
		if(paso==2) counter++;
		//printf("%d \n", inicial);
		//fprintf(fr,"%d\n",inicial);	
		if(counter==m){
			//printf("\nllego a pasar la calle!!");
			//printf("cantidad de pasos dados: %d",cant_pasos);
			//fprintf(fr,"\ncantidad de pasos dados: %d\n",cant_pasos);	
			ban=1;
			result=1;
			break;
		}
		cant_pasos++;
		if(inicial==1) break;
	}
	if(ban!=1){
		//printf("el borracho se cayo antes de llegar!\n");
		//fprintf(fr,"\nel borracho se cayo antes de llegar!: \n");
		//fprintf(fr,"\nCantidad de pasos: %d\n",cant_pasos);
		//printf("\nCantidad de pasos: %d ", cant_pasos);
		result=0;
	}
	return result;
}