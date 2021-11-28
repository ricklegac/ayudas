 //Imprimir total de alumnos matriculados por asignatura
#include <stdio.h>
int main() {   
 int total;
 int matricula [3] [7];
 int i, j;
 for (i=0; i<=3; i++) //rellenamos la matriz
    for (j=0; j<=7; j++){//abre el for
        printf("Introduce el numero de alumnos matriculados para curso %d y asignatura %d:\n", i+1, j);
        scanf("%d", &matricula [i] [j]);
    }//cierra el for
 for (j=0; j<=7; j++)//contabilizamos alumnos
 {//abre el for
    total=0;
    for (i=0; i<=3; i++)
        total=total+matricula [i] [j];
        printf("Total de alumnos de asignatura %d es: %d\n", j, total);

    }//cierra el for
    return (0);
}//cierra el main
