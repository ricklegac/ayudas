#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 200
struct c{
	char marca[20];
	int gusto;
};
struct g{
	int g1,g2,g3,g4,g5;
};
typedef struct c p;
int main(){
	FILE *fp;
	char fichero[20];
	p bebida[max];
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
		fscanf(fp,"%s\t%d\n",bebida[i].marca,&bebida[i].gusto);
		total=total+1;
		i++;
	}while(!feof(fp));
	int j;
	int marcax=0;
	int g1,g2,g3,g4,g5,tg1,tg2,tg3,tg4,tg5;
	g1=g2=g3=g4=g5=tg2=tg3=tg4=tg5=0;
	char marcainicial[20];
	strcpy(marcainicial,bebida[0].marca);
//	printf("%s",marcainicial);
	printf("Marca\t1\t2\t3\t4\t5\tTotalXMarca\tporcentaje\n");
	for(j=1;j<total;j++){
		
			if(strcmp(bebida[j].marca,marcainicial)==0){
			marcax=marcax+1;
			if (bebida[j].gusto==1) {
				g1++;
				tg1++;
			}
			if (bebida[j].gusto==2) {
				g2++;
				tg2++;
			}
			if (bebida[j].gusto==3) {
				g3++;
				tg3++;
			}
			if (bebida[j].gusto==4) {
				g4++;
				tg4++;
			}
			if (bebida[j].gusto==5) {
				g5++;
				tg5++;
			}
			if (strcmp(bebida[j].marca,"99")==0) break;
		//printf("%s",bebida[j].marca);
		
			
		}else{
			strcpy(marcainicial,bebida[j].marca);
			totalxmarca=g1+g2+g3+g4+g5;
			porcentaje=(totalxmarca/total)*100;
			printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",bebida[j].marca,g1,g2,g3,g4,g5,totalxmarca,porcentaje);
			g1=g2=g3=g4=g5=totalxmarca=0;
		}
		
	}
	printf("\ntotalxgusto: %d\t%d\t%d\t%d\t%d\t100\n",tg1,tg2,tg3,tg4,tg5,total);
	return 0;
}
