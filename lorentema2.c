#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
struct s{
	int dia,cod,precio,cant;
};
typedef struct s p;
int main(){
	int i=0;
	int total=0;
	int dia[31]={0};
	char fichero[30];
	printf("ingrese nombre del archivo a ser leido: \n");
	scanf("%s",fichero);
	FILE *fp;
	p producto[max];
	fp=fopen(fichero,"r");	
	if(fp==NULL){
		printf("error");
		exit(1);
	}
	do{
		fflush(stdin);
		fscanf(fp,"%d\t%d\t%d\t%d\n",&producto[i].dia,&producto[i].cod,&producto[i].precio,&producto[i].cant);
		total=producto[i].cant+total;
		//dia[producto[i].dia]=producto[i].dia+dia[producto[i].dia];
		i++;
		
	}while(!feof(fp));
	int j,ultday;
	printf("dia\tcod.art\tprecio\tcant\n");
	for(j=0;j<i;j++){
		printf("%d\t%d\t%d\t%d\n",producto[j].dia,producto[j].cod,producto[j].precio,producto[j].cant);
		dia[producto[j].dia]=dia[producto[j].dia]+producto[j].precio;
		ultday=producto[j].dia;
	}
	int prom=0;
	prom=total/(ultday+1);
	printf("dia\timporte\n");
	for(j=0;j<ultday+1;j++){
		if(dia[j]!=0)	printf("%d %d\n",j,dia[j]);
	}
	printf("total mes: %d\n", total );
	printf("promedio de ventas: %d\n",prom);
	
	return 0;
}

