#include<stdio.h>
#include<math.h>
#define MAX 100
typedef struct Empleados{
    int ci;
    int fecha;
    float hora_ent;
    float hora_salida;
}funcionario;
void corte(funcionario datos[MAX], int i);
int main(){
    /*inicializacion de variables */
    int i=0;
    char archivo[20];
    funcionario datos[MAX];
    printf("ingrese el nombre del archivo: ");
    scanf("%s",archivo);
    FILE *fp = fopen(archivo,"r+");
    if(fp==NULL){
        printf("archivo no encontrado");
        return 1;
    }
    /*LECTURA DEL ARCHIVO*/
    while(!feof(fp)){
        fscanf(fp,"%d\t%d\t%f\t%f\n",&datos[i].ci,&datos[i].fecha,&datos[i].hora_ent,&datos[i].hora_salida);
        i++; 
    }
    corte(datos,i);
    return 0;
}
void corte(funcionario datos[MAX], int i){
    double parteDecimal, parteEntera;
	int j,cont=0,entradavarias=0,pagos;
    int cont_horas=0, cont_total =0;
    printf("Funcionario %d\n",datos[0].ci);
	 	for(j=0 ; j<i ; j++){
            cont += datos[j].hora_salida - datos[j].hora_ent;
            entradavarias++;
            printf("%d %d ",datos[j].ci,datos[j].fecha);
            parteDecimal = modf(datos[j].hora_ent, &parteEntera);
            printf("%.0f:%.0f - ", parteEntera, parteDecimal);
            parteDecimal = modf(datos[j].hora_salida, &parteEntera);
            printf("%.0f:%.0f", parteEntera, parteDecimal);
            printf(" %d \n",cont);
			if(datos[j].ci != datos[j+1].ci){
   				printf("Horas total trabajadas: %d\n",cont);
                /*CONDICION DE PAGO CONT ES LAS VECES QUE SALIO */
                if(entradavarias>2){
                    pagos = cont * 9;
                }else{
                    pagos = cont * 10;
                }
                /*ACA CORTAMOS PARA CADA CI DE EMPLEADO */
                printf("Total monto a Pagar: %d\n", pagos);
                cont_total = cont_total + pagos;
                cont_horas = cont_horas + cont;
	   			cont=0;
                entradavarias = 0;
                if(datos[j+1].ci != 0)
                printf("Funcionario %d\n",datos[j+1].ci);
			}
            
	}
    printf("TOTAL GENERAL\n");
    printf("Total de horas trabajadas: %d\n", cont_total);
    printf("Total monto a pagar: %d\n", cont_horas);
}