#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n=1;
	char ncad[13];
	do{
		printf("ingrese el numero N: ");
		scanf("%d",&n);
		if (n<0){
			printf("el numero ingresado debe ser mayor a cero: \n");
		}
		if (n>9999999999999 || n<-9999999999999){
			printf("la cantidad de digitos del numero debe estar entre 1 y 13\n");
		}
	}while(n<1 || n>9999999999999);//validar numero en el rango solicitado
	itoa(n,ncad,10);
	//printf("%s",ncad);
	int i=0;
	int longi=strlen(ncad);
	int j=longi;
	int especial;
	char letra;
	char letra2;
	int valor;
	char palabra[2];
	while(j>=i){
		if(i==j){
			letra=ncad[i];
			valor=atoi(letra);
		}else{
			letra=ncad[i];
			letra2=ncad[j];
			printf("%c %c",letra,letra2);
			strcat(palabra,letra);
			strcat(palabra,letra2);
			valor=atoi(palabra);
		}
		if(primo(valor)){
			especial=1;
		}else{
			especial=0;
		}
		i++;
		j--;
		if(especial){
			printf("Es Especial");
		}else{
			printf("No es especial");
		}
	}
	return 0;
}
int primo(int n){
	int i;
	for (i=2;i<n/2;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

