#include<stdio.h>
#include <ctype.h>
#include<stdlib.h>
#include <string.h>
#define max 1000
void eliminarespacios( char frase[max] );
int isPalindrome(char str[]);
int main(){
	FILE *fp,*fp1;
	FILE *fr;
	int i;
	char frase[max],guardar[max];
	fr=fopen("Prueba2.txt","w+");
	fp=fopen("Prueba1.txt","r");
	if(fp==NULL){
		printf("error");
		exit(1);
	}
	printf("--VER ARCHIVOS CREADOS--");	
	do{
		fgets(frase, max , fp);
		if( frase[strlen(frase)-1] == '\n' ) frase[strlen(frase)-1] = 0;
		strcpy(guardar,frase);
		eliminarespacios( frase );
		for( i = 0; i<strlen(frase); i++){
  			frase[i] = tolower(frase[i]);
		}
    	if(isPalindrome(frase)){
    		fprintf(fr,"%s \nSI\n",guardar);
		}else{
			fprintf(fr,"%s \nNO\n",guardar);
		}
	}while(!feof(fp));
	
	return 0;
}
void eliminarespacios(char frase[max]){
     int i,j;
     for(i=0;frase[i]!='\0';i++)
     {
          if( frase[i] == ' ')
          {
              for( j = i+1 ; frase[j] != '\0' ; j++ ){
                frase[j-1] = frase[j];
              }
              frase[j-1] = '\0'; 
          }
     }
}
int isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
  
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return 0;
        }
    }
    return 1;
}
