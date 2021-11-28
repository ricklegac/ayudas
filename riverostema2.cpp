#include<stdio.h>
#define columna 4
/*struct t{
	int lote;
	int ubicacion;
	int largo,ancho;
};*/



typedef struct t terr;
int main(){

	int r,i,j;
	printf("ingrese R\n");
	scanf("%d",&r);
	terr terreno[r];
	int mat[r][columna];
	printf("ingrese los datos de la matriz\n");	
	for(i=0;i<r;i++){
		for(j=0;j<columna;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	/*for(i=0;i<r;i++){
		for(j=0;j<columna;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}*/
	/*for(i=0;i<r;i++){
		for(j=0;j<columna;j++){
			terreno[i].lote=mat[i][0];
			terreno[i].ubicacion=mat[i][1];
			terreno[i].largo=mat[i][2];
			terreno[i].ancho=mat[i][3];
		}
	}
	for(i=0;i<r;i++){
		printf("terreno[%d]: %d, %d, %d, %d\n",i+1,terreno[i].lote,terreno[i].ubicacion,terreno[i].largo,terreno[i].ancho);
	}
	int tmg=0,tmp=0,tml=0,tmc=0,tma=0,tmf=0;
	tmg=terreno[0].ancho*terreno[0].largo; /*terreno mas grande*/
	//tmp=terreno[0].ancho*terreno[0].largo; /*terreno mas pequenho*/
	//tml=terreno[0].largo; /*terreno mas largo*/
	//tmc=terreno[0].largo; /*terreno mas corto*/
	//tma=terreno[0].ancho; /*terreno mas ancho*/
	//tmf=terreno[0].ancho; /*terreno mas angosto*/
	/*for(i=1;i<r;i++){
		if((terreno[i].ancho*terreno[i].largo)>tmg){
			tmg=terreno[i].ancho*terreno[i].largo;
			tmgi=i;
		}
		if((terreno[i].ancho*terreno[i].largo)<tmp){
			tmp=terreno[i].ancho*terreno[i].largo;
			tmpi=i;
		}
		if(terreno[i].largo>tml){
			tml=terreno[i].largo;
			tmli=i;
		}
		if(terreno[i].largo<tmc){
			tmc=terreno[i].largo;
			tmci=i;
		}
		if(terreno[i].ancho>tma){
			tma=terreno[i].largo;
			tmai=i;
		}
		if(terreno[i].ancho<tmc){
			tmc=terreno[i].largo;
			tmci=i;
		}
	}
	printf("terreno mas grande con %d unidades cuadradas, el terreno ubicado: %d\n", terreno[tmgi].largo*terreno[tmgi].ancho , terreno[tmgi].ubicacion);
	printf("terreno mas chicho con %d unidades cuadradas, el terreno ubicado: %d\n", terreno[tmpi].largo*terreno[tmpi].ancho , terreno[tmpi].ubicacion);
	printf("terreno mas largo con %d unidades, el terreno ubicado: %d\n",terreno[tmli].largo,terreno[tmci].ubicacion);
	printf("terreno mas corto con %d unidades, el terreno ubicado: %d\n",terreno[tmci].largo,terreno[tmci].ubicacion);
	printf("terreno mas ancho con %d unidades, el terreno ubicado: %d\n",terreno[tmai].largo,terreno[tmai].ubicacion);
	printf("terreno mas angosto con %d unidades, el terreno ubicado: %d\n",terreno[tmfi].largo,terreno[tmfi].ubicacion);	
	*/
	return 0;
}
