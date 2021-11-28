//Celeste Esquivel 5651111 IEL
#include<stdio.h>
#include <ctype.h>
#include<stdlib.h>
#include <string.h>
#define max 1000
void eliminarespacios( char frase[max] );
int isPalindrome(char str[]);
int main(){
	/*FILE lo que hace es crea un puntero para el fichero*/
	
	FILE *fp,*fp1; 
	FILE *fr;
	int i;
	char frase[max],guardar[max];
	/*fr es para escribir en un fichero (w+)*/
	/*fp es para abrir un fichero (r)*/
	fr=fopen("Prueba2.txt","w+");
	fp=fopen("Prueba1.txt","r");
	fp1=fopen("Prueba1.txt","w+");
	do{
		gets(frase);
		fprintf(fp1,"%s\n",frase);
	}while(strcmp(frase,"#")!=0); //strcmp compara dos strings 
	if(fp==NULL){//si fp apunta a vacio (NULL) entonces no pudo abrir el archivo
		printf("error");
		exit(1);
	}
	printf("--VER ARCHIVOS CREADOS--");	//imprimir en consola
	do{
		fgets(frase, max , fp); //para leer el archivo creado Prueba1.txt
		/*
		Ana Lava Lana
		
		*/
		if( frase[strlen(frase)-1] == '\n' ) frase[strlen(frase)-1] = 0;//quitar el salto de linea 
		/*
		frase <- Ana Lava Lana
		*/
		strcpy(guardar,frase);//strcpy guardar se guarda la frase original,
		/*
		guardar <- Ana Lava Lana
		*/
		*/
		eliminarespacios( frase ); //elimina espacios
		/*
		frase <- AnaLavaLana
		*/
		*/
		for( i = 0; i<strlen(frase); i++){
  			frase[i] = tolower(frase[i]); //este es para poner todo en minuscula
		}
		/*
		frase <- analavalana
		*/
		
		/* podimos usar strrev y salia mas facil 
		strrev(aux,frase)
		frase=aux
		si o no
		*/ 
		
    	if(isPalindrome(frase)){ //si es palindromo 
    		fprintf(fr,"%s \nSI\n",guardar); 
    		/*
			Prueba2.txt <- Ana Lava Lana 
						   SI
			*/
		}else{
			fprintf(fr,"%s \nNO\n",guardar);
			/*
			Prueba2.txt <- Lenguaje de Programacion
						   NO
			*/
		}
	}while(!feof(fp));
	
	return 0;
}
void eliminarespacios(char frase[max]){
     int i,j;
     for(i=0;frase[i]!='\0';i++)//recorre hasta fin de texto
     {
          if( frase[i] == ' ')//donde encuentra vacio elimina el vacio 
          {
              for( j = i+1 ; frase[j] != '\0' ; j++ ){
                frase[j-1] = frase[j];
              }
              frase[j-1] = '\0'; 
          }
     }
}
int isPalindrome(char str[]) //para ver si es palindromo 
{
    int l = 0;
    int h = strlen(str) - 1;
  	
    while (h > l)//controlar si se lee a la inversa igual.
    {
        if (str[l++] != str[h--])
        {
            return 0;
        }
    }
    /*
		analavalana
	*/
    return 1;
}
