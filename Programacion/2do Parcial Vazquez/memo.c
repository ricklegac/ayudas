#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct archivo{
	int n;
	int a;
	char c;
}numeros;
/*Función principal solicitada*/
void fmtMiles(int N, int A, char C, char sal[]){
	int n=0;
	int puntos;
	int i=0;
	char Nchar[20];
	printf("%d\t\t%d\t\t%c",N,A,C);
	if(N==0 || N<0 || A==0 || C=='+' || C=='-'){
		memset(sal,0,strlen(sal));
		printf("\t\t%s\n",sal);
	}else{
		//printf("\t\t%d\n",N);
	//	printf("\n");
		if(log10(N)<A){
			sprintf(Nchar, "%d", N);
			puntos=strlen(Nchar)%3;
			strcat(Nchar,sal);
			printf("\t\t%d",N);
			for(i=strlen(Nchar)+puntos;i<A;i++){
				printf("%c",C);
			}
			
		}
		printf("\n");	
	}
	
	
	int count=0, size=strlen(Nchar);
	
	
/*	if(log10(N)<A){ //si los digitos de N son menores a A
		if(log10(N)>3){
			sprintf(Nchar, "%d", N);
			
			
		}
			
		
	}
	
	printf("\n");*/
}
int main(){
	int i=0;
	FILE *fp=fopen("numeros.txt","r");
	if(fp==NULL){
		perror("no se pudo abrir.");
		exit(1);
	}
	numeros valores;
	int n,a;
	char c;
	char sal[25];
	
	char buffer[1024];
	int contador_columnas=0;
	int filas=0;
	printf("N\t\tA\t\tC\t\tsal\n");
	while(fgets(buffer,1024,fp)){
		contador_columnas=0;
		filas++;
		char *field = strtok(buffer,"\t");
		while(field){
			if(contador_columnas==0){
				n=atoi(field);
			}	
			if(contador_columnas==1){
				a=atoi(field);
			}
			if(contador_columnas==2){
				c=*field;
			}
			memset(sal,0,strlen(sal));
			field=strtok(NULL,"\t"); //actualizamos el valor de la columna
			contador_columnas++;
			
		}
		fmtMiles(n,a,c,sal);
	}
	//printf("%d",filas);
	return 0;
}
