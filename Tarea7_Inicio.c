#include<stdio.h>
#include<string.h>

void codificar(char s1[], char clave[], char s2[]){

}

void decodificar(char s1[], char s2[]){

}

int main(){
	/*NO MODIFICAR EL MAIN!*/
	char clave[11] = "8204975613";
	char mensajeOrig[101] = "LA CRIPTOGRAFIA ES LA CIENCIA DE CIFRAR Y DESCIFRAR MENSAJES USANDO TECNICAS MATEMATICAS";

	//Codificacion
	char mensajeCod[111];
	codificar(mensajeOrig,clave,mensajeCod);
	printf("Mensaje codificado:\n%s\n\n",mensajeCod);

	//Decodificacion
	char mensajeDecod[111];
	decodificar(mensajeCod,mensajeDecod);
	printf("Mensaje decodificado:\n%s\n",mensajeDecod);
	return 0;
}

