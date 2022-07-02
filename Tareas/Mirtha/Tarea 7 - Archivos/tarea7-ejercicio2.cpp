#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
float calc_dep(double inic,double dep);
struct OFICINA{
    char Codigo[15];
    double vinic;
    double dep;
};

int main(){
    FILE *ofi;
    char c;
    int cont=0,k=1;
    double valor=0,valorAnt=0,deprec=0,total_deprec;
    int anio=1;
    struct OFICINA oficina;
if ((ofi=fopen("datos.txt","r"))==NULL){

		printf ("\n\tError en archivo\n");
		return 0;

	}else{
		printf("\n\tEl Archivo ha sido leido con exito\n");
	}
    c=fgetc(ofi);

    while(!feof(ofi)){
        if(c=='\n'){
			cont++;
		}
		c=fgetc(ofi);

    }
	cont--;
    rewind(ofi);
    int i;

    for(i=0;i<cont;i++){
        fscanf(ofi,"%s\t%lf\t%lf",oficina.Codigo,&oficina.vinic,&oficina.dep);
        printf("Las depreciaciones de %s\t\t\t Nuevo valor\n",oficina.Codigo);
        valor=oficina.vinic;
        anio=1;
        while (k<=5)
        {
            valorAnt=valor;
            printf("Anio %d: %.2lf * %.2lf%c = ",anio,valor,oficina.dep,'%');
            valor= calc_dep(valor,oficina.dep);
            deprec=valorAnt - valor;
            printf("%.2lf\t\t",deprec);
            printf("%.2lf\n",valor);
            k++;
            anio++;
            total_deprec=total_deprec+deprec;
        }

        printf("\nEl total de despreciacion es: %.2lf\n\n",total_deprec);
        k=1;
        total_deprec=0;

    }
    return 0;
}


float calc_dep(double inic,double dep){


    return (inic-(inic*(dep/100)));

}
