/*cabeceras*/
#include<stdio.h>
typedef struct Empleados{
    int ci;
    int fecha;
    float entrada;
    float salida;
}empleados;
/*prototipado*/
void cant_total_prod(empleados datos[100], int i);
int main(){
    int i=0;
    char archivo[20];
    empleados datos[100];
    printf("nombre de archivo: ");
    scanf("%s",archivo);
    FILE *fp = fopen(archivo,"r+");
    //lectura r+ para read 
    if(fp==NULL){
        return 1;
    }
    //lectura del fichero
    while(!feof(fp)){
        fscanf(fp,"%d\t%d\t%f\t%f\n",&datos[i].ci,&datos[i].fecha,&datos[i].entrada,&datos[i].salida);
        i++; 
      //  printf("a");

    }
    int j;
    /*for(j=0;j<i;j++){
        printf("%d ", datos[j].ci);
    }*/
    cant_total_prod(datos,i);
    return 0;
}
//funcion principal que hace lo que pide el enunciado tomando 
//en cuenta que los empleados estan ordenados por ci 
void cant_total_prod(empleados datos[200], int i){
	int j,cont=0,vecessalidas=0,pagos;
    int cont_horas=0, cont_total =0;
    printf("Funcionario %d\n",datos[0].ci);
	 	for(j=0 ; j<i ; j++){
            cont += datos[j].salida - datos[j].entrada;
            vecessalidas++;
			if(datos[j].ci != datos[j+1].ci){
   				printf("Horas total trabajadas: %d\n",cont);
                if(vecessalidas>2){
                    pagos = cont * 9;
                }else{
                    pagos = cont * 10;
                }
                printf("Total monto a Pagar: %d\n", pagos);
                cont_total = cont_total + pagos;
                cont_horas = cont_horas + cont;
	   			cont=0;
                vecessalidas = 0;
                if(datos[j+1].ci != 0)
                printf("Funcionario %d\n",datos[j+1].ci);
			}
            
	}
    printf("TOTAL GENERAL\n");
    printf("Total de horas trabajadas: %d\n", cont_total);
    printf("Total monto a pagar: %d\n", cont_horas);
}