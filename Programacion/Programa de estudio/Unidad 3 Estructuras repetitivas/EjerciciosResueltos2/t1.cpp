/* Leer un número N por teclado, leer luego una secuencia de 70 números y determinar;
- Cuantas veces aparece el número en la secuencia
- Si el número no se encuentra, imprimir un mensaje apropiado, y los números más próximos a N
(menor y mayor más cercanos) y

la cantidad de veces que aparece cada uno. */

#include<stdio.h>

#include<conio.h>

int main (){

	int n,i,numero;

	int cont1=0;

	int vect[2],j,d1,cont=0,n_mejor1;

	printf("Ingrese un numero N : ");

	scanf("%i",&n);

	i=1;

	int d_mejor1=1;

	for(j=0;j<2;j++){

		vect[j]=0;

	}

	while(i<=10){

		printf("Ingrese un numero : ");

		scanf("%i",&numero);

		if(n==numero){

			cont1++;

		}

		else if(n!=numero){

			d1=(numero-n)*(numero-n);

			if(d1<=d_mejor1){

		    	d_mejor1=d1;

		    	n_mejor1=numero;

		    	vect[cont]=numero;

		    	cont++;

		    }

		}

		i++;

	}

	if(cont1==0){

		printf("\nEl numero no se encuentra en la serie ");

		for(j=0;j<2;j++){

		    if(vect[j]!=0){

		        printf("\n %i es cercano a %i ",vect[j],n);

	       }

	        else{

	    	    printf("\nSolo un numero se aproxima ");

		    }

	   }

	}

	else {

		printf("El numero aparece %i veces en la serie ",cont1);

	}

	getch();

	return 0;

}
