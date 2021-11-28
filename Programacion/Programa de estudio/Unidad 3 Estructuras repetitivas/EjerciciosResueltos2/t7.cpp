/*A fin de recaudar fondos para la fiesta de principio del semestre, 
*se decide realizar una rifa con las siguientes reglas: a) se prepara 
*un talonario con números del 1001 al 1500; b) cada persona que adquiere
* la rifa debe abonar un importe igual al número que elige. Suponiendo que 
*se venden todos los números,escribir un algoritmo que calcule el monto total recaudado. 
*El algoritmo deberá tomar como datos elnúmero inicial y final del talonario, 
* para permitir calcular que monto se recaudaría si decidimos cambiar estos parámetros.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {
	int j,inicial,final,suma,i;
	printf ("\n\n\t");
	printf ("INGRESE EL NUMERO INICIAL DEL TALONARIO: ");
	scanf("%d",&inicial);
	printf ("\n\n\t");
	printf ("INGRESE EL NUMERO FINAL DEL TALONARIO: ");
	scanf("%d",&final);
	printf ("\n\n\t");
	suma=0;
	for(i=inicial;i<=final;i++){
		suma+=i;
	}
	printf ("El MONTO FINAL ES: %d\t",suma);
	printf ("\n\n");
	system ("pause");
	return 0;
}
