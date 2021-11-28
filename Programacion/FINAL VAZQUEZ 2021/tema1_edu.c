#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(){
	//ancho de la calle es N
	//pasos del borracho M
	int n,m;
	printf("ingrese N y M: \n");
	scanf("%d %d",&n, &m);
	srand(time(0));
	FILE *fr = fopen("salida.txt", "w");
	while(n%2==0){
		printf("numero par! vuelve a ingresar: \n");
		scanf("%d",&n);
	}
	int c=0,cant_pasos=0;
	int inicial=((n+1/2)),paso,ban=0;
	while(1){
		paso=rand()%3;
		if(paso==0) inicial++;	
		if(paso==1) inicial--;
		if(paso==2) c++;
		printf("%d \n", inicial);
		fprintf(fr,"%d\n",inicial);	
		if(c==m){
			printf("\nllego a pasar la calle!!");
			printf("cantidad de pasos dados: %d",cant_pasos);
			fprintf(fr,"\ncantidad de pasos dados: %d\n",cant_pasos);	
			ban=1;
			break;
		}
		cant_pasos++;
		if(inicial==1) break;
	}
	if(ban!=1){
		printf("el borracho se cayo antes de llegar!\n");
		fprintf(fr,"\nel borracho se cayo antes de llegar!: \n");
		fprintf(fr,"\nCantidad de pasos: %d\n",cant_pasos);
		printf("\nCantidad de pasos: %d ", cant_pasos);
	}


	return 0;
}
