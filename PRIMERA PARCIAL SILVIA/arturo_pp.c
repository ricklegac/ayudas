#include<stdio.h>
#include<math.h>
void analisis_num(int n,int cifras);
int cuantasCifras(int n);
int es_par(int forman);
int esPrimo(int n);
int main(){
	int n;
	printf("ingrese un numero (como maximo 4 cifras)\n");
	scanf("%d",&n);
	//hasta 4 cifras, 
	while(n<10 || n>9999){
		if(n<0) printf("El numero ingresado debe ser mayor a 0\n");
		else if(n>9999 || n<=0 ) printf("La cantidad de dígitos del número debe de estar entre 1 y 4\n");
		//else printf("El n debe ser de 4 cifras como maximo");
		scanf("%d",&n);
	}
	int cifras;
	cifras = cuantasCifras(n);
	analisis_num(n,cifras);

	return 0;
}
void analisis_num(int n,int cifras){
	
	int divisor = 10;
	int residuo = 0;
	int digito = 0;
	int i = 0;
	int digitos[4]={0};	
	int cifras_aux = cifras;
	divisor = pow(divisor, (cifras_aux));
	//printf("divisor: %d\n",divisor);
	  
	while (cifras_aux >= 0){
	   //El cociente son Digitos de izquiera a derecha
	   	digito = n / divisor;
	     
	   //El residuo se convierte en el n
   		residuo = n % divisor;
	   	n = residuo;
	     
	   //El divisor disminuye
	   	divisor = divisor / 10;
	   	digitos[i] = digito;
	   	i++;
	   	printf("digito: %d\n",digito); 
	   	cifras_aux--;
	}
	int j=0;
	// for(j=0;j<i;j++){
	// 	printf("%d ",digitos[j]);
	// }
	/* SECCION A */
	printf("a) ");
	int pd, ud, sd, ped;
	pd = digitos[0];
	int forman;
	ud = digitos[i-1];
	printf("%d -> primer digito; \t%d -> ultimo digito",pd,ud);
	forman = pd *10 + ud;
	printf("\nForman: %d ",forman);
	if(es_par(forman)){
		printf("-> es par -> %d+%d -> imprime -> %d",pd,ud,pd+ud);
	}else{
		printf("-> no es par -> imprime: no cumple primera condicion");
	}
	int ban = 0;

	/* SECCION B */
	printf("\nb) ");
	if (i>1){
		sd = digitos[1];	
	}else{
		printf("no tiene segundo ni penultimo digito  \n");
		ban= 1;
	}
	if(i<3){
		printf("tiene menos de 3 cifras no podemos obtener el penultmo digito\n");
		ban = 1;
	}else{
		ped = digitos[i-2];
	}
	if (ban){
		printf("item b incalculable");
	}else {
		printf("%d -> seg undo digito; %d -> penultimo digito ", sd, ped);
		forman = sd * 10 + ped;
		printf("\nForman: %d ",forman);
		if(!es_par(forman)){
			printf("-> es impar -> ");
			if(esPrimo(forman)){
				printf(" es primo -> imprime -> impar primo ");
			}else{
				printf(" no es primo -> imprime -> no cumple segunda condicion ");
			} 
			
		}else{
			printf(" -> no es impar -> ");
			if(esPrimo(forman)){
				printf(" es primo -> imprime -> no cumple segunda condicion ");
			}else{
				printf(" no es primo -> imprime -> no cumple segunda condicion ");
			} 

		}

	}
}
int cuantasCifras(int n) {
	int divisor = 10;
	int residuo = 0;
	int cifras_aux = 0;
	while (residuo != n){
	  	residuo = n % divisor;
	  	divisor = divisor * 10;
	  	cifras_aux++;
	}
	cifras_aux--;
	return cifras_aux;
}
int es_par(int forman){
	if(forman %2 ==0) return 1;
	else return 0;
}
int esPrimo(int n) {
  if (n == 0 || n == 1) return 0;
  if (n == 4) return 0;
  for (int x = 2; x < n / 2; x++) {
    	if (n % x == 0) return 0;
  }
  return 1;
}
char* my_strcat(char* destination, const char* source)
{
    // hacer que `ptr` apunte al final de la string de destino
    char* ptr = destination + strlen(destination);
 
    // añade caracteres del origen a la string de destino
    while (*source != '\0') {
        *ptr++ = *source++;
    }
 
    // string de destino de terminación nula
    *ptr = '\0';
 
    // el destino es devuelto por el estándar `strcat()`
    return destination;
}
