#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char cadena[100], subcadena[100];
	int largo1, largo2;
	int count1 = 0, count =0, i=0, j=0;
	printf("ingrese una cadena inicial: "); // %[^\n]s es para aceptar todos los caracteres excepto el salto de linea 
	scanf("%[^\n]s", cadena);
	printf("ingrese una palabra: ");
	fflush(stdin);
	scanf("%[^\n]s",subcadena);
	largo1 = strlen(cadena);
	largo2 = strlen(subcadena);
	for (i = 0; i < largo1;){
		while ((cadena[i] == subcadena[j])){
	        count++;
	        i++;
			j++;
	    }
	    if (count == largo2)
	    {
	        count1++;                                   
	        count = 0;
	    }else{
	        i++;
	    } 
	}
	printf("%s aparece %d veces en %s", subcadena, count1,cadena);
	return 0;
}    

