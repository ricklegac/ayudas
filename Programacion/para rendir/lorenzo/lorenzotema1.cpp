#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
struct s{
	char marca[2];
	int cant_vend;
};
typedef struct s p;
int main(){
	int i=0;
	p producto[max];
	FILE *fp;
	int total=0;
	fp=fopen("datos.txt","r");	
	if(fp==NULL){
		printf("error");
		exit(1);
	}
	do{
		fflush(stdin);
		fscanf(fp,"%s\t%d\n",producto[i].marca,&producto[i].cant_vend);
		//printf("%s\t%d\n",producto[i].marca,producto[i].cant_vend);
		total=producto[i].cant_vend+total;
		if(strcmp(producto[i].marca,"**")==0);
		i++;
	}while(!feof(fp));
	printf("total productos: %d\n",total);
	char marcainicial[2];
	int j;
	float marcax=0;
	float porcent=0;

	strcpy(marcainicial,producto[0].marca);
	for(j=1;j<i;j++){
		if(strcmp(producto[j].marca,marcainicial)==0){
			marcax=marcax+producto[j].cant_vend;
			porcent=(marcax/total)*100;
		
		}else{
			strcpy(marcainicial,producto[j].marca);
			if(strcmp(producto[j].marca,"**")!=0)
			printf("marca %s :%.2f%\n",producto[j].marca,porcent);
			marcax=0;
		}
	}
}

