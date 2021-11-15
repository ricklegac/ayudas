/*
Maria Salome
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct inventario{
    char Codigo[20];
    int dep;
    int vinic;
}articulo;
int calc_dep(int inic , int dep);
typedef struct inventario articulo;

int main(){
	FILE *pd;
	articulo vec[1000];
	char direccion[]="equipos.txt";
	int i=0,j,t2,t3;
	char t1[20];
	pd=fopen(direccion,"rt");
	printf("Codigo\tInicial\t\tTotal de depreciacionesen 5 años\tValor depreciado final\n");
	while (!feof(pd)){
        fflush(stdin);
      	fscanf(pd,"%s\t%d\t%d\n",t1,&t2,&t3);
      	strcpy(vec[i].Codigo,t1);
      	vec[i].vinic=t2;
		vec[i].dep=t3;
		printf("%s\t%d\t\t%d\t\t",vec[i].Codigo,vec[i].vinic,vec[i].dep);
		printf("%d\n",calc_dep(vec[i].vinic,vec[i].dep));
		i++;
		
    }
    printf("\n");
	return 0;
}
int calc_dep(int inic , int dep){
	int total_depre;
	int i;
	for(i=0 ; i<5 ; i++){
		total_depre += inic-(inic*dep); 
		inic=inic*dep; 
	}
	printf("%d\t",total_depre);
return inic;
}
