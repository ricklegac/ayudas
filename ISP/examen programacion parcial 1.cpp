#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
void formato_print(char *t);
int main(){
	char texto[40];
	printf("Ingrese texto: ");
	gets(texto);
	formato_print(texto);
	return 0;
}
void formato_print(char *t){
	int j,i,cont,ban;
	cont=0;
	ban=0;
	for (i=0;t[i]!='\0';i++) //sacar cantidad de caracteres de la cadena
		cont=cont+1;
	// printf("cantidad de caracteres: %d",cont);
	i=0;
	for(i=0;i<cont;i++){
		if(t[i]=='<' && t[i+1]=='M' && t[i+2]=='>'){
			for(j=i+3;j<cont;j++){
				if(t[j]!='<' && t[j+1]!='/' && t[j+2]!='M' && t[j+3]!='>' && ban!= 1){
					printf("%c",toupper(t[j]));
				}
				else
					ban =1;
					
				}
				
	
				
			}
		}
		ban=0;
		for(i=0;i<cont;i++){
		if(t[i]=='<' && t[i+1]=='E' && t[i+2]=='>'){
			for(j=i+3;j<cont;j++){
				if(t[j]!='<' && t[j+1]!='/' && t[j+2]!='E' && t[j+3]!='>' && ban!= 1){
					printf(" %c ",t[j]);
				}
				else
					ban =1;
					
				}
				
			}
		
		}
		
	//	printf("%c",toupper(t[j]));
	}
	
	
	
		
	
	

