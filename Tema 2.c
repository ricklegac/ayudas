/*FECHA: 05/06/2021
  NOMBRE APELLIDO:
  NUMERO DE CEDULA:
  TEMA 2 EXAMEN DE PROGRAMACION
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
    int C[1000],SG[1000];
    char fecha[8];
    int k,i,cuenta,importe,operacion
    for (i=0 ; i < 1000 ; i ++) {
    	C[i] = 0;
        SG[i] = 0;
  	}
    scanf("%d%s%d%d",cuenta,fecha,importe,operacion)
    FILE* fichero;     
    fichero = fopen("Movimientos.txt", "wt");
    while(cuenta=!0){
        fprintf (fichero, cuenta,fecha,importe,operacion);
        k=cuenta-1
        C[k]++ ;
        SG[k]++;
        scanf("%d%s%d%d",cuenta,fecha,importe,operacion)
    }
    for (i=0 ; i < 1000 ; i ++) {
    	si(cuentas[i]=!0){
            fprintf (fichero, "Cliente %d", i, "\tSaldo %d", C[i], "\tCantidad de sobregiros %d",SG[i]);
        }
  	}
    fclose(fichero);
    printf("Proceso completado");
    return 0;
}