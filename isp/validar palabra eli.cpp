#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;
bool validar_palabra(char palabra[]);
void voltear_palabra(char palabra[]);
int main(){
	char palabra[100];
	cout<<"Ingrese una palabra"<<endl;
	gets(palabra);
	if(validar_palabra(palabra)){//enviamos a la funcion que es booleana para entrar en la condicion si cumple o no
		voltear_palabra(palabra);//damos la vuelta la palabra
	}
	return 0;
}
bool validar_palabra(char palabra[]){
	int x=0;
	for(int i=0;i<strlen(palabra);i++){
		if(palabra[i]==toupper(palabra[i])){//toupper: toupper sirve para poner en mayuscula un caracter
		//lo que hice fue preguntar si el caracter de esa posicion era igual a su mayuscula en esa posicion 
			x++;//si era igual sumaba uno a la x
		}
	}//preguntaba si x era igual a la longitud de la palabra
	//si x era igual a la longitud de la palabra significaba que todos los caracteres eran mayuscula
	
	if(x==strlen(palabra) && strcmp(palabra,"FIN")) return true; //si eran todos mayuscula y la palabra era distinto de FIN retornaba true
	else return false;// sino false
	//strcmp sirve para comparar dos strings(cadenas) retorna true si son iguales y false si no lo son
}
void voltear_palabra(char palabra[]){//EXISTE UNA FUNCION PARA VOLTEAR CADENAS QUE ES strrev, pero no creo que el profesor quiera
    char invertido[strlen(palabra)];//creamos otra cadena para poder manejarnos y poder invertir la cadena
    for (int x=0, y=strlen(palabra)-1; x<strlen(palabra); x++, y--)//strlen para la longitud de nuestra cadena inicial, 
    {
        invertido[x]=palabra[y];//en el invertido de la primera posicion le pasamos la ultima de nuestra original 
        // al segundo le pasamos la penultima  y asi sucesivamente hasta llegar a strlen(palabra) la longitud de la palabra
    }
    invertido[strlen(palabra)] = '\0';
    cout<<"> "<<palabra<<endl;
    cout<<endl<<"> "<<invertido<<endl<<endl;    return;
}

/*RESUMEN DE LAS FUNCIONES QUE PODES USAR EN C++ PARA CADENAS */
/*-
memcpy	copia n bytes entre dos áreas de memoria que no deben solaparse
memmove	copia n bytes entre dos áreas de memoria; al contrario que memcpy las áreas pueden solaparse
memchr	busca un valor a partir de una dirección de memoria dada y devuelve un puntero a la primera ocurrencia del valor buscado o NULL si no se encuentra
memcmp	compara los n primeros caracteres de dos áreas de memoria
memset	sobre escribe un área de memoria con un patrón de bytes dado
strcat	añade una cadena al final de otra
strncat	añade los n primeros caracteres de una cadena al final de otra
strchr	localiza un carácter en una cadena, buscando desde el principio
strrchr	localiza un carácter en una cadena, buscando desde el final
strcmp	compara dos cadenas alfabéticamente ('a'!='A')
strncmp	compara los n primeros caracteres de dos cadenas numéricamente ('a'!='A')
strcoll	compara dos cadenas según la colación actual ('a'=='A')
strcpy	copia una cadena en otra
strncpy	copia los n primeros caracteres de una cadena en otra
strerror	devuelve la cadena con el mensaje de error correspondiente al número de error dado
strlen	devuelve la longitud de una cadena
strspn	devuelve la posición del primer carácter de una cadena que no coincide con ninguno de los caracteres de otra cadena dada
strcspn	devuelve la posición del primer carácter que coincide con alguno de los caracteres de otra cadena dada
strpbrk	encuentra la primera ocurrencia de alguno de los caracteres de una cadena dada en otra
strstr	busca una cadena dentro de otra
strtok	parte una cadena en una secuencia de tokens
strxfrm	transforma una cadena en su forma de colación (??)
strrev	invierte una cadena
steodioeli odio hacia las Elis
*/
