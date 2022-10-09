#include<stdio.h>
#include<stdlib.h>
char* sustraer(const char *src, int m, int n);
void uNir(char cad1[], char cad2[], int n);
int contador_letras(const char * str);
char* my_strcat(char* destination, const char* source);
void verSeguridad(char *cadena);
int main(){
	char cad1[50];
	char cad2[56];
	printf("ingrese cadena 1: ");
	scanf("%s",cad1);
	printf("ingrese cadena 2: ");
	scanf("%s",cad2);
	int n;
	printf("ingrese n: ");
	scanf("%d",&n);
	uNir(cad1,cad2,n);



	return 0;
}
void uNir(char *cad1, char *cad2, int n){
	int long1, long2;
	long1 = contador_letras(cad1);
	long2 = contador_letras(cad2);
	//printf("long1: %d long2: %d", long1,long2);
	int longitud_total = long1 + long2;
	char aux[]="";
	char *dest = sustraer(cad1, 0, n-1);
	char *sobrante = sustraer(cad1, n-1, long1);
	//printf("%s %s", dest,sobrante);
	my_strcat(aux,dest);
	my_strcat(aux,cad2);
	my_strcat(aux,sobrante);
	printf("\n%s",aux);
	verSeguridad(aux);
//	printf("%s", dest);

}


int contador_letras(const char * str)
{
    int length = 0;
    while( *str++ )
        ++length;
    return( length );
}

char* sustraer(const char *src, int m, int n)
{
    // obtener la longitud de la string de destino
    int len = n - m;
 
    // asignar (len + 1) caracteres para destino (+1 para carácter nulo adicional)
    char *dest = (char*)malloc(sizeof(char) * (len + 1));
 
    // extrae caracteres entre m'th y n'th índice de la string de origen
    // y copiarlos en la string de destino
    for (int i = m; i < n && (*(src + i) != '\0'); i++)
    {
        *dest = *(src + i);
        dest++;
    }
 
    // terminación nula de la string de destino
    *dest = '\0';
 
    // devuelve la string de destino
    return dest - len;
}

char* my_strcat(char* destination, const char* source)
{
    // hacer que `ptr` apunte al final de la string de destino
    char* ptr = destination + contador_letras(destination);
 
    // añade caracteres del origen a la string de destino
    while (*source != '\0') {
        *ptr++ = *source++;
    }
 
    // string de destino de terminación nula
    *ptr = '\0';
 
    // el destino es devuelto por el estándar `strcat()`
    return destination;
}
void verSeguridad(char *cadena){
	char simbolos[] = "*$%-?!#";
	char numericos[]="1234567890";
	int cont_numeros =0;
	int c=0;
	int cant_mayus = 0,cont_simbolos=0;

	if(contador_letras(cadena) > 12) c++;
	else printf("NO tiene al menos 12 caracteres");
	int i,j;
	for(i=0;i<contador_letras(cadena);i++){
		if(cadena[i]>='A' && cadena[i]<='Z'){
			cant_mayus++;
		}
	}
	if (cant_mayus >=3) c++;
	else printf("NO tiene al menos 3 caracteres en mayúscula");
	// for(i=0;i<contador_letras(simbolos);i++){
	// 	for(j=0;j<contador_letras(cadena);j++){
	// 		if(strcmp(cadena[j],simbolos[i])==0){
	// 			cont_simbolos ++;
	// 		}
	// 	}
	// }
	// if(cont_simbolos >=1) c++;
	// else printf("NO incluye al menos 1 símbolo *$%-?!#");
	// for(i=0;i<contador_letras(numericos);i++){
	// 	for(j=0;j<contador_letras(cadena);j++){
	// 		if(strcmp(cadena[j],numericos[i])==0){
	// 			cont_numeros ++;
	// 		}
	// 	}
	// }
	// if(cont_numeros<2) c++;
	// else printf("NO contiene al menos 2 caracteres numéricos");
	// if(c==4) printf("Es una contraseña segura");
	
}
// int strcmp(const char *X, const char *Y)
// {
//     while (*X)
//     {
//         // si los caracteres difieren o se llega al final de la segunda string
//         if (*X != *Y) {
//             break;
//         }
 
//         // pasar al siguiente par de caracteres
//         X++;
//         Y++;
//     }
 
//     // devuelve la diferencia ASCII después de convertir `char*` a `unsigned char*`
//     return *(const unsigned char*)X - *(const unsigned char*)Y;
//}