#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50
struct bebidas{
	char codMarca[20];
	int CodGusto;
};
typedef struct bebidas p;
int main(){
	FILE *fp;
	char fichero[20];
	p producto[max];
	printf("ingrese el nombre del fichero: ");
	gets(fichero);
	fp=fopen(fichero,"r");	
	if(fp==NULL){
		printf("no se pudo abrir el archivo %s",fichero);
		exit(1);
	}
	int i=0;
	int totalxmarca=0;
	int total=0;
	int porcentaje;
	do{
		fflush(stdin);
		fscanf(fp,"%s\t%d\n",producto[i].codMarca,&producto[i].CodGusto);
		total=total+1;
		i++;
	}while(!feof(fp));
	int j;
	int marcax=0;
	int gustosx[5],total1,total2,total3,total4,tg5;
	for(i = 0 ; i < 5 ; i++)
    {
        gustosx[i] = 0;
    }
	total1=total2=total3=total4=tg5=0;
	char aux[20];
	strcpy(aux,producto[0].codMarca);
	printf("Marca\t1\t2\t3\t4\t5\tTotalXMarca\tporcentaje\n");
	for(j=1;j<total;j++){
		
			if(strcmp(producto[j].codMarca,aux)==0){
			marcax=marcax+1;
			if (producto[j].CodGusto==1) {
				gustosx[0]=gustosx[0]+1;
				total1++;
			}
			if (producto[j].CodGusto==2) {
				gustosx[1]=gustosx[1]+1;
				total2++;
			}
			if (producto[j].CodGusto==3) {
				gustosx[2]=gustosx[2]+1;
				total3++;
			}
			if (producto[j].CodGusto==4) {
				gustosx[3]=gustosx[3]+1;
				total4++;
			}
			if (producto[j].CodGusto==5) {
				gustosx[4]=gustosx[4]+1;
				tg5++;
			}
			if (strcmp(producto[j].codMarca,"99")==0) break;
		
		}else{
			strcpy(aux,producto[j].codMarca);
			totalxmarca=gustosx[4]+gustosx[3]+gustosx[2]+gustosx[1]+gustosx[0];
			porcentaje=(totalxmarca/total)*100;
			printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",producto[j].codMarca,gustosx[0],gustosx[1],gustosx[2],gustosx[3],gustosx[4],totalxmarca,porcentaje);
			gustosx[5]=0;
			totalxmarca=0;
		}
		
	}
	printf("\nTotal X Gusto: %d\t%d\t%d\t%d\t%d\t100\n",total1,total2,total3,total4,tg5,total);
	return 0;
}
