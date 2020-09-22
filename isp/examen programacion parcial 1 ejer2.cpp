#include<stdio.h>
int main(){
	int f,c,i,m,pos;
	printf("ingrese una fila y columna");
	scanf("%d%d",&f,&c);
	int vec[f*c];	int vexaux[f*c+f];
	printf("ingrese donde quiere agregar una columna de cero(posicion)");
	scanf("%d",&pos);
	while(m<c){
	
	for(i=m;i<f;i++){
		if(i==pos){
			printf("0");
		}else	printf("%d",vec[i]);
		
	}
	printf("\n");
	}
	return 0;
	}
	

