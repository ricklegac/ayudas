#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	int i,y,j=0;
	int x=0;
	char palabra[50],palabraaux[50];
	gets(palabra);
	int n=strlen(palabra);
	for(i=0;i<n+1;i++){
		if(palabra[i]!=' ' && palabra[i]!='\0'){//aca lo que hace simplemente es recorrer la palabra y guardar en la palabra auxiliar
		//una vez que encuentre un espacio o termine la oracion guarda esa palabra que encontro,
			palabraaux[j]=palabra[i];
			j++;//este es el incremento del indice de la palabra auxiliar
		}else{
			for(x=j;x>=0;x--){//si es un espacio lo que hace es imprimir la palabra, j es la longitud de la palabra 
				cout<<palabraaux[x];//recorremos el caracter de izquierda a derecha y lo imprimimos asi
			}
			x=strlen(palabraaux);//x es igual a la longitud de la cadena auxiliar, esta al pedo porque podia usar j nomas jajaja
			
			for(y=0;y<x;y++){// lo que hago aca es recorrer esa palabra auxiliar y vaciarla, para vaciar la palabra le pongo el \0
			// \0 es el finalizador de un string (cadena) en C
				palabraaux[y]='\0';
			}
			j=0;//inicializo de nuevo mi indice de la palabra auxiliar para poder cargar otra palabra que viene despues! 	
		}
	}
	//aca termina xd te odio fio. 
	
	return 0;
}
