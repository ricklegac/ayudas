#include<stdio.h>
int main(){
    int hora, minuto, segundo;
    printf("ingrese la cantidad de horas: ");
    scanf("%d", &hora);
    printf("ingrese la cantidad de minutos: ");
    scanf("%d", &minuto);
    printf("ingrese la cantidad de segundos: ");
    scanf("%d", &segundo);
    segundo = hora * 3600 + minuto * 60 + segundo;
    printf("la cantidad total de segundos es:  %d ", segundo);

    return 0;
}