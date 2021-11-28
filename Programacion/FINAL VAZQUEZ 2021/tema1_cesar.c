#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(){
	int n,m;
	printf("ingrese N y M: \n");
	scanf("%d %d",&n, &m);
	FILE *fr = fopen("salida.txt", "w");
	srand(time(0));
	while(n%2==0){
		printf("numero par! vuelve a ingresar: \n");
		scanf("%d",&n);
	}
	int c=0,cant_pasos=0;
	int pos=((n+1)/2),paso,bandera=0;
	printf("%d",pos);
	/*
		USAMOS RAND CON SEMILLA PARA MOVERNOS!
	*/
	while(pos!=1){ 
		paso=rand()%3;
		if(paso==0){
			pos=pos+1;
		} 	
		if(paso==1){
			pos=pos-1;
		} 
		if(paso==2){
			c=c+1;
		} 
		fprintf(fr,"%d\n",pos);	
		if(c==m){ //si llega al final sale, salimos del while
			fprintf(fr,"\ncantidad de pasos dados: %d\n",cant_pasos);	
			bandera=1; //para verificar que llego a la meta
			break;
		}
		cant_pasos++;
		if(pos==1 || pos==n) break; //si llego a los bordes se cayo!, salimos del while
	}
	if(bandera!=1){ 
		fprintf(fr,"\nel borracho se cayo antes de llegar!: \n");
		fprintf(fr,"\nCantidad de pasos: %d\n",cant_pasos);
	}
	printf("VERIFICAR EL ARCHIVO DE SALIDA \"salida.txt\"\n");	
	fclose(fr);
	return 0;
}
