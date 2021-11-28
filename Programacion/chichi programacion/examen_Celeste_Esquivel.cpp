//Celeste Anahi Esquivel Peña 5651111 IEL
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sinespacios(char cadena [], char cadenasin[100]);
void estitulo(char cadena[]);
void invertir(char cadena[],char cadena2[]);
void ordenar(char cadena[]);
int longitud(char cad[]);
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
		for(i=1;i<100;i++){
			if(cadena[i]<='z' && cadena[i]>='a'){
				bandera=1;
			}
		}
	}
	if(bandera==0){
		printf("\nno es un titulo");
	}else
		printf("\nsi es un titulo");
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
	int l,i;
    int x=0;
    l=longitud(cadena);
    for(i=l-1;i>=0;i--){
       if(cadena[i] != ' '){
        cadena2[x]=cadena[i];
        x++;
       }
    }
    printf("\n%s",cadena2);
}
void ordenar(char cadena[]){
	char temp;
	int i,j,l;
	l=longitud(cadena);
	for (i=1; i<100; i++){
        for (j=0 ; j<l - 1; j++){
            if (cadena[j] > cadena[j+1]){
               	temp = cadena[j];
                cadena[j] = cadena[j+1];
                cadena[j+1] = temp;
			}
        }
    }
    printf("\n%s",cadena);
}

int longitud(char cad[]){
    int cont=0,i=0;
    while(cad[i] != '\0'){
        cont++;
        i++;
    }
return cont;
}
