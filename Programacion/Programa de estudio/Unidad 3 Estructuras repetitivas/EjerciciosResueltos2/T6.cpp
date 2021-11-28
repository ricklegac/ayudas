#include <stdio.h>
#include <stdlib.h>
int main () {
	int opcion,cont,calificacionFinal;
	float calificacionPromedio,notaParcial,notaFinal,calificacion,promedio;
	calificacionPromedio=0;
	cont=0;
	do{
		system("cls");
		printf("\n\t\tMENU");
		printf("\n\tINGRESE LA OPCION: ");
		printf("\n\t1) ingresar notas");
		printf("\n\t0) salir");
		printf("\n\t");
		scanf("%d",&opcion);
		switch(opcion){
			case 1:
				system("cls");
			printf("\n\t\t");
			printf("\n\tINGRESE LA NOTA DEL PARCIAL: ");
			scanf("%f",&notaParcial);
			printf("\n\tINGRESE LA NOTA DEL FINAL: ");
			scanf("%f",&notaFinal);
			calificacion=(notaParcial*0.4)+(notaFinal*0.6);
			if(calificacion>0 && calificacion<=59 ){
				calificacionFinal=1;
			}else{
			 	if(calificacion>59 && calificacion<=69 ){
					calificacionFinal=2;			
				}else{
					if(calificacion>69 && calificacion<=79 ){
						calificacionFinal=3;
					}else{
						if(calificacion>79 && calificacion<=89 ){
							calificacionFinal=4;					
						}else{
							calificacionFinal=5;				
						}
					}
				}
			}
			calificacionPromedio+=calificacionFinal;
			cont++;
			printf ("\n\t LA CALIFICACION DEL ALUMNO ES: %i",calificacionFinal);
			printf("\n\n\tPresiona una tecla numerica para continuar....");
			scanf("%d",&opcion);	
			case 0:
				continue;		
			default:
				system("cls");
				printf("\n\tLA OPCION NO ES CORRECTA");
				printf("\n\n\tPresiona una tecla numerica para continuar....");
				scanf("%d",&opcion);
		}

	}while(opcion!=0);
	if (cont!=0){
		if(cont==1){
			printf("\n\n\tLA CALIFICACION PROMEDIO DEL CURSO ES: %0.2f\n",calificacionPromedio);
		}else{
			promedio=calificacionPromedio/cont;
			printf("\n\n\tLA CALIFICACION PROMEDIO DEL CURSO ES: %0.2f\n",promedio);
		}
	}
	system ("pause");
	return 0;
}
