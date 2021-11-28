#include<stdio.h>
typedef struct t terr;
int main(){
	int r,i,j;
	printf("ingrese la cantidad de terrenos: ");
	scanf("%d",&r);
	int terrenos[r][4];
	printf("ingrese los datos de la matriz\n");	
	for(i=0;i<r;i++){
		for(j=0;j<4;j++){
			scanf("%d",&terrenos[i][j]);
		}
	}
/*	for(i=0;i<r;i++){
		for(j=0;j<4;j++){
			printf("lote %d, ",terrenos[i][0]);
			printf("ubicacion %d, ",terrenos[i][1]);
			printf("largo %d, ",terrenos[i][2]);
			printf("ancho %d ",terrenos[i][3]);
		}
		printf("\n");
	}*/
	int chico, largo, corto, ancho, angosto, grande;
	chico = corto = angosto = 99999;
	grande = largo = ancho = 0;
	int ubichico,ubicorto,ubiangosto,ubigrande,ubilargo,ubiancho;
	ubichico=ubicorto=ubiangosto=ubigrande=ubilargo=ubiancho=0;
	for(i=0;i<r;i++){
		for(j=0;j<4;j++){
			if((terrenos[i][2]*terrenos[i][3])<chico){
				chico=terrenos[i][2]*terrenos[i][3];
				ubichico=i;
			}
			if((terrenos[i][2])<corto){
				corto=terrenos[i][2];
				ubicorto=i;
			}
			if((terrenos[i][3])<angosto){
				angosto=terrenos[i][3];
				ubiangosto=i;
			}
			if((terrenos[i][2]*terrenos[i][3])>grande){
				grande=terrenos[i][2]*terrenos[i][3];
				ubigrande=i;
			}
			if((terrenos[i][2])>largo){
				largo=terrenos[i][2];
				ubilargo=i;
			}
			if((terrenos[i][3])>ancho){
				ancho=terrenos[i][3];
				ubiancho=i;
			}	
		}
	}
	
	printf("terreno mas grande %d %d\n", terrenos[ubigrande][1],terrenos[ubigrande][2]*terrenos[ubigrande][3]);
	printf("terreno mas chicho %d %d\n", terrenos[ubichico][1],terrenos[ubichico][2]*terrenos[ubichico][3]);
	printf("terreno mas largo %d %d\n",terrenos[ubilargo][1], terrenos[ubilargo][2]);
	printf("terreno mas corto %d %d \n",terrenos[ubicorto][1], terrenos[ubicorto][2]);
	printf("terreno mas ancho %d %d\n",terrenos[ubiancho][1], terrenos[ubiancho][3]);
	printf("terreno mas angosto %d %d\n",terrenos[ubiangosto][1], terrenos[ubiangosto][3]);
	return 0;
}
