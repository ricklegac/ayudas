/*Escriba un programa que lea una línea de texto desde el teclado e imprima el número
de ocurrencias de cada vocal, el número caracteres que son consonantes y el número de
caracteres que son caracteres especiales. 
a 1
e 7
i 1
o 2
u 0
Consonantes 11
Caracteres especiales 2*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>  
void contar(char frase[100],int v[7]);
int main(){
	char cadena[100];
	int v[7];
	int i;
	printf("Ingrese una cadena : " );
	gets(cadena);
	printf("\nLa cadena que fue incresada es : %s ",cadena );
	for(i=0;i<7;i++){
		v[i]=0;
	}
	contar(cadena,v);
	printf("\n a \t\t %i",v[0]);
	printf("\n e \t\t %i",v[1]);
	printf("\n i \t\t %i",v[2]);
	printf("\n o \t\t %i",v[3]);
	printf("\n u \t\t %i",v[4]);
	printf("\n Consonantes \t %i",v[5]);
	printf("\n Caracteres especiales \t %i",v[6]);
	getch();
	return 0;
}
void contar(char frase[100],int v[5]){
	int i,aux;
	aux=strlen(frase);
	printf("\nLongitud de la frase = %i",aux);
	i=0;
	while(frase[i]!='\0'){    // while(i<aux)
		switch(frase[i]){
			case 'a':case 'A': v[0]++;
			break;
			case 'e':case 'E': v[1]++;
			break;
			case 'i':case 'I': v[2]++;
			break;
			case 'o':case 'O': v[3]++;
			break;
			case 'u':case 'U': v[4]++;
			break;
		}
		frase[i]=toupper(frase[i]);
		if ( 65<=frase[i] && frase[i]<=90){
			v[5]++;
		}
		else if(32<frase[i] && 64>=frase[i] ||  91<=frase[i] && 96>=frase[i] || 123<=frase[i] && 127>=frase[i] ){
			v[6]++;
		}
		i++;
	}
	fflush(stdin);
	v[5]=(v[5]-v[0]-v[1]-v[2]-v[3]-v[4]);
}
