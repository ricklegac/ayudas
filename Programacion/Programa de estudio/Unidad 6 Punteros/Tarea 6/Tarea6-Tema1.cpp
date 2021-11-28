#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cadena[80] = "Tarea 6 punteros - cadena con vocales";
char * puntero_cadena = cadena;
int i,cv;


int vocal( char *cadena) {
	
 
 for(i=0;i<strlen(cadena);i++) {
   	if (cadena[i]=='a' || cadena[i]=='e' ||cadena[i]=='i' ||cadena[i]=='o' ||cadena[i]=='u' )
   	    cv++; 

      
   
   }
      printf("\n La cadena contiene  %d vocales ", cv) ;
 return cv ; 
}

int main() {
     
   printf("\n La cadena  es: %s \n", cadena) ;
   vocal(cadena) ;
    return 0; 
   }



