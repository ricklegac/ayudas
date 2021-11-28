/*Guillermo Jose Gill Ortiz 4.234.614*/
#include<stdio.h>
#include<string.h> //esta libreria nos sirvio para los strings
#include<stdlib.h>
int es_primo(int n);
void es_especial(char *acadena);
int main(){
	int n;
	printf("ingrese numero: \n");
	scanf("%d",&n);
	char acadena[13];
	while(n<1 || n>9999999999999){ //verificacion de que este en el rango, aca podiamos tambien poner strlen(string de n)>13
		if(n<=0){ //verificacion >0
			printf("El numero ingresado debe ser mayor a 0\n");
		}else{ //verificacion de 13 digitos, mayor a cero, 
			printf("La cantidad de digitos del numero debe de estar entre 1 y 13\n");
		}
		printf("ingrese numero: \n");
		scanf("%d",&n);
	}	
	sprintf(acadena,"%d",n); 
	printf("\n");
	es_especial(acadena);
	return 0;
}

void es_especial(char * acadena){ //funcion que verifica si es especial
	char aux[3];
    int i, num=0;
	for(i=0 ; i<strlen(acadena) ; i++){
		if(i != strlen(acadena)-i-1){
			aux[0] = acadena[i];
			aux[1] = acadena[strlen(acadena)-i-1];
			aux[2] = '\0'; //aca tenemos que poner el limitador, o sino nos crea conflicto al pasar referenciado al atoi
			num = atoi(aux);
			if(es_primo(num)){
				printf("\n%d ES PRIMO\n",num);
			}
			else{
				printf("\n%d NO ES PRIMO, %s por lo tanto NO ES ESPECIAL\n",num, acadena);
				break;
			}
		}
		else{
			aux[0] = acadena[i];
			aux[1] = '\0';
			num = atoi(aux);
			if(es_primo(num)){
				printf("\n%d es primo, %s por lo tanto ES ESPECIAL\n",num, acadena);
			}
			else{
				printf("\n%d no es primo, %s por lo tanto NO ES ESPECIAL\n",num, acadena);
				break;
			}
			break;
		}
	}
}
int es_primo(int n){ //codigo sacado de internet
	int i;
	for (i=2;i<n/2;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
