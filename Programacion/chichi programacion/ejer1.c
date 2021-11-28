#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sinespacios(char cadena [], char cadenasin[100]);
void estitulo(char cadena[]);
void invertir(char cadena[],char cadena2[]);
void ordenar(char cadena[]);
int main(){
	char texto[100];
	char texto2[100];
	char texto3[100];
	gets(texto);
	estitulo(texto);
	sinespacios(texto,texto2);
	invertir(texto2,texto3);
	ordenar(texto3);
	return 0;
}
void estitulo(char cadena[]){
	int i;
	int bandera=0;
	if(cadena[0]>='A' && cadena[0]<='Z'){
		for(i=1;i<strlen(cadena);i++){
			if(cadena[i]<='z' && cadena[i]>='a'){
				bandera=1;
			}
		}
	}
	if(bandera==0){
		printf("\nno es un titulo");
	}else{
		printf("\nsi es un titulo");
	}
}
void sinespacios(char cadena [], char cadenasin[])
{
int i=0,j=0;
while (cadena[i]!='\0'){
	if(cadena[i]!=' '){
   		cadenasin[j]=cadena[i];
   		j++;
  	}
  	i++;
}
printf("\n%s",cadenasin);
}
void invertir(char cadena[],char cadena2[]) {
	int i, e;
	for(i = strlen(cadena)-1, e = 0; 0 <=  i; i--, e++)
    cadena2[e] = cadena[i];
   	cadena2[e] = '\0';
    printf("\n%s",cadena2);
}
void ordenar(char cadena[]){
	char temp;
	int i,j;
	for (i=1; i<strlen(cadena); i++){
        for (j=0 ; j<strlen(cadena) - 1; j++){
            if (cadena[j] < cadena[j+1]){
               	temp = cadena[j];
                cadena[j] = cadena[j+1];
                cadena[j+1] = temp;
			}
        }
    }
    printf("\n%s",cadena);
}
