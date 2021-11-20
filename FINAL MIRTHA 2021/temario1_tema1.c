#include <stdio.h>
#include <string.h>
#include <ctype.h>
void FuncionString(char *t, int wide); //funcion que resuelve el problema
int main(){
	/*
		INGRESO INICIAL Y DECLARACIONES
	*/
	char cadena[252];						
	char *aux;							
	int wide;							
	printf("Ingrese la cadena\n");				
	scanf("%[^\n]s",cadena);						
	/*
		VALIDACION:
	*/
	while( strlen(cadena)<=10 || strlen(cadena)>=250 ){ 
		if(strlen(cadena)<10) printf("la cadena tiene menos de 10 caracteres\n");		
		else if(strlen(cadena)>250) printf("la cadena tiene mas de 250 caracteres\n");		
		getchar();							
		scanf("%[^\n]s",cadena);//leemos la cadena hasta un salto de linea				
	}
	/*
		LECTURA DEL ANCHO:
	*/
	printf("\nIngrese el ancho\n");	
	scanf("%d",&wide);						
	FuncionString(cadena,wide); 				
	return 0;
}
void FuncionString(char * t, int wide){
	/*
		DECLARACIONES
	*/
	int i,j, cont=0;						
	char cadena [252];		

	/*
		AQUI EN EL SIGUIENTE CICLO HACEMOS LO QUE EL ENUNCIADO QUIERE RESOLVER
		CUANDO ENCONTRAMOS ESPACIO LO CAMBIAMOS POR EL #
		isalpha UTILIZAMOS ESTA FUNCION PARA SABER SI ES UNA VARIABLE ALFABETICA

	*/				
	for(i=0 ; i< strlen(t) ; i++){
		cont++;
		if(cont==wide){					
			if( isalpha(t[i]) ){				
				for(j=i-1 ; j>=0 ; j--){
					if( cadena[j] == ' ' ){	
						cadena[i] = '#';
						cont = 0;
						break;
					}
				}
			}else{						
				cadena[i]='#';
				cont = 0;
			}
		}
		else{							
			cadena[i]=t[i];
		}
	}
	cadena[i]='#';						
	cadena[i+1]='\0';						
	printf("%s\n",cadena);					
}
