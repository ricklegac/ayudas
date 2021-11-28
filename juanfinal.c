#include<stdio.h>
#include <ctype.h>
#include<stdlib.h>
#include <string.h>
#define max 1000
void drop_blanks( char frase[max] );
void isPalindrome(char str[]);
int main(){
	FILE *fp;
	FILE *fr, *fp1;
	char frase[max],aux[max],guardar[max];	
	printf("ingrese las frases: \n");
	fr=fopen("Prueba2.txt","w+");
	fp=fopen("Prueba1.txt","r");
	fp1=fopen("Prueba1.txt","w");
	do{
		scanf("%s",frase);
		fputs(frase,fp1);
		
	}while(strcmp(frase,"#")!=0);	
	if(fp==NULL){
		printf("error");
		exit(1);
	}
	
	do{
		fgets(frase, max , fp);
		if( frase[strlen(frase)-1] == '\n' ) frase[strlen(frase)-1] = 0;
		strcpy(guardar,frase);
		drop_blanks( frase );
		int i;
		for( i = 0; i<strlen(frase); i++){
  			frase[i] = tolower(frase[i]);
		}
		strcpy(aux,frase);
		strrev(aux);
	//	printf("%s\n",aux);
    //	isPalindrome(frase);
		printf("%s\n",guardar);
		if(strcmp(aux,frase)==0){
			fprintf(fr,"%s\nSI\n",guardar);
			printf("SI\n");
		}else{
			printf("NO\n");
			fprintf(fr,"%s\nSI\n",guardar);
		}
	}while(!feof(fp));
	
	return 0;
}
/*void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
  
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s NO\n", str);
            return;
        }
    }
    printf("%s SI\n", str);
}*/
void drop_blanks( char frase[max] )
{
     int i, j;
     for( i = 0 ; frase[i] != '\0' ; i++ )
     {
          if( frase[i] == ' ' )
          {
              for( j = i+1 ; frase[j] != '\0' ; j++ )
              {
                   frase[j-1] = frase[j];
              }
              frase[j-1] = '\0';
             
          }
     }
}
