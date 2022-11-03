#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct jugadas{
	char nombre[20];
	char decision[7];
};
int contador_par(int a[], int n ){
	int i, cont = 0;
	for(i = 0 ; i < n; i++){
		if(a[i]%2==0) cont++;
	}
	return cont;
}
void quitar_espacios(char* s) {
    char* d = s;
    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*s++ == *d++);
}
int main(){
	int ban =0;
	char condicion[20];
	while(1){
		if (ban==1){
			printf("desea continuar? aprete una tecla para continuar en caso contrario escriba ###\n");
			fflush(stdin);
			scanf("%s",condicion);
			if(strcmp(condicion,"###")==0){
				break;
			}
		}

		printf("ingrese: nombre1, nombre2 ,(par-impar) \n");
		char nombre1[20], nombre2[20], decision2[7];
		scanf("%s %s %s",nombre1, nombre2, decision2);
		//printf("%s", nombre2);
		/*QUITAMOS LOS ESPACIOS Y ASIGNAMOS A UNA ESTRUCTURA CADA JUGADOR CON SU DECISION */
		struct jugadas jugada[2];
		quitar_espacios(nombre1);
		quitar_espacios(nombre2);
		quitar_espacios(decision2);
		strcpy(jugada[0].nombre, nombre1);
		if(strcmp(decision2,"par")==0) strcpy(jugada[0].decision,"impar");
		else strcpy(jugada[0].decision,"par");	
		strcpy(jugada[1].nombre, nombre2);
		strcpy(jugada[1].decision, decision2 );

		//printf("a%sa",nombre1);
		
		//printf("%s ", jugada[0].nombre);
		/*CONVERTIMOS TODOA MINUSCULAS PARA HACER LA COMPARACIONES LUEGO*/
		// strcpy(nombre1,tolower(nombre1)); 
		// strcpy(nombre2,tolower(nombre2));
		// strcpy(decision1,tolower(decision1));
		// strcpy(decision2,tolower(decision2));

		/*INGRESAMOS LA CANTIDAD DE JUGADAS POSIBLES*/
		int n;
		printf("ingrese la cantidad de jugadas: \n");
		scanf("%d", &n);
		while(n<1 || n>255){
			printf("vuelva a ingresar la cantidad de lanzamientos 𝑁, 1 ≤ 𝑁 ≤ 255 \n");
			scanf("%d",&n);
		}

		int a[n];
		int count = 0;
		printf("ingrese las jugadas separadas por un espacio: (jugada1, jugada2, ... ,jugadaN)\n");
		/*INGRESAMOS LAS JUGADAS POSIBLES */
		do {
	 
	        // tomamos un contador inicial y lo incrementamos cada vez que entra al while
	        scanf("%d", &a[count++]);
	 
	        // si hay un salto de linea o el vector se llena salimos del loop
	    
	    } while (getchar() != '\n' && count < n);
	    int i;
	    // for (i = 0 ; i< n;i++){
	    // 	printf("%d ", a[i]);
	    // }
	    int pares= 0;
	    pares = contador_par(a,n);
	    int impares;
	    impares = n - pares;
	    if (strcmp(jugada[0].decision,"par")==0){
			printf("%s gano %d veces\n",jugada[0].nombre, pares );
	    }else{
	    	printf("%s gano %d veces\n",jugada[0].nombre, impares);
	    }
	    if (strcmp(jugada[1].decision,"par")==0){
			printf("%s gano %d veces\n",jugada[1].nombre, pares );
	    }else{
	    	printf("%s gano %d veces\n",jugada[1].nombre, impares);
	    }	
	    ban = 1;
	}
	
	return 0;
}