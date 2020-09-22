#include<stdio.h>
int main(){
	int f,c,i,m,pos;
	m=0;
	printf("ingrese una fila y columna");
	scanf("%d%d",&f,&c);
	int vec[f*c];	int vexaux[f*c+f];
	printf("ingrese donde quiere agregar una columna de cero(posicion)");
	scanf("%d",&pos);
	printf("ingrese elementos");
	for(i=0;i<f*c;i++){
		scanf("%d",&vec[i]);
	}
	
		for(i=1;i<f;i++){
			if(i==pos){
				printf(" %d 0",vec[i]);
			}else{
				printf(" %d ",vec[i]);
			}	
		
	

	}
	return 0;
	}
	

