#include<stdio.h>
int main(){
	int cont=0;
	int numsec=0;
	int num,num1;
	int repetir=-1;
	printf("ingrese secuencia de numeros");
	scanf("%d",&num);
	int mayor=0;
	while(repetir==-1){
		scanf("%d",&num1);
		if(num1-num==1){//esta estipulado que solo habra una secuencia antes del cero final.
		//no puede haber mas de dos secuencias antes o entre un cero
			cont++;
		}
		if(num1==0){
			numsec++; //se da el caso de que no se ingresa varios ceros consecutivos.
			//el problema no especifica pero el usuario puede hacerlo. 
			//no esta previsto.
			cont=0;
		}
		if(numsec>=4 && num1==0){//la cantidad minima de series leida debe de ser cuatro, luego preguntara si quiere mas series.
			printf("desea ingresar otra secuencia? ingrese -1 para continuar");
			scanf("%d", &repetir);
		}
		if(cont>mayor){
			mayor=cont;
		}
		num=num1;
	}
	printf("\ncantidad de secuencias: %d\nSecuencia mas larga: %d\n",numsec, mayor);
	return 0;
}
