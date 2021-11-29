#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//***problema de LCS****//
void sec_mas_larga(char C,char *S,int P);
int mayor(char *S,int i);
//void prueba(char *S);
int main(){
	char C;//C SOLO ES UN CARACTER COMO DICE BIEN EL ENUNCIADO, NO PODEMOS TOMARLO COMO UN STRING!
	char S[100];
	int P;
	scanf("%c",&C);
	fflush(stdin);
	gets(S);
	//prueba(S);
	sec_mas_larga(C,S,P);
		
	
	return 0;
}
void sec_mas_larga(char C,char *S,int P){//P SE PASA POR REFERENCIA, CREA UNA COPIA Y NO SE MODIFICA EN EL MAIN,
//POR ESO USARE UN VOID, PARA HACER EL TRABAJO EN LA SUBRUTINA E IMPRIMIR EL VALOR DE P
	int i=0;
	int ban=0;
	int j,impi;
	int maxsubsecuense=-1;
	char palabra[100];
	strcpy(palabra,S);//creamos una palabra identica a la ingresada para poder manipular 
//	printf("palabra: %s",palabra);
	while(S[i]!='\0'){
		if(S[i]==C){
			if(ban==0){
				maxsubsecuense = mayor(palabra,i);
				impi=i+1;
				ban=1;
			}
			if(mayor(S,i)>maxsubsecuense){
				maxsubsecuense = mayor(palabra,i);
				impi=i+1;//lugar donde empieza maxsubsecuense
			}
		}
		
		i++;	
	}
	printf("\n Subsecuencia de mayor longitud en S de C: %d, Posicion : %d\n",maxsubsecuense,impi);
}
int mayor(char *palabra,int i){
	int j=0;
	int cont=0;
	char cadena=palabra[i];
   // printf(" cadena: %c",cadena);
	for(j=i;j<strlen(palabra);j++){
		if(palabra[j]==cadena){
			printf("%c",palabra[j]);
			cont++;
		}else{
			return cont;
		}
		cont=0;
	}
	
}

