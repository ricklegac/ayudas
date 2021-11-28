//Elaborado por: Lucas Valdez
//En DevC++
#include <stdio.h>
#include <string.h> 
#include <math.h>
#include <stdbool.h>

float calc_dep(float ,float);
	

// define la estructura
struct equipos{
	char codigo[10];
	float vinic; 
	float dep; 
};

int main(){
	//crea o abre el archivo 
	FILE *equipos;
	//float promedio=0; 
	int i,j;
	int cont=0;
	char c;
	//verifica si leyo corretamente
	if ((equipos=fopen("equiposven.txt","r"))==NULL){
		
		printf ("Error en archivo");
		return 0;
	
	}else{
		printf("\tEl Archivo ha sido leido con exito\n");	
	} 
    // lee el sgte caracter
	c=fgetc(equipos);
	// recorre mientras no encuentre eof
	while(!feof(equipos)){
		if(c=='\n'){
			cont++;
		}
		//lee
		c=fgetc(equipos);
	}
	
	printf ("\t%d\n\t",cont);
	rewind(equipos);  //vuelve a posicionar al inicio 
	
	//asocia la estructura al archivo de texto
	struct equipos equiposven[cont];
	float deprec;
	
	for (i=0;i<cont;i++){
		//permite leer datos formateados 
		fscanf (equipos,"%s\t%f\t%f",&equiposven[i].codigo, &equiposven[i].vinic, &equiposven[i].dep);
	}
	
	printf("\n\n\tLISTADO DE EQUIPOS: ");
	printf("\n\n\tCODIGO \tINICIAL\tPORCENTAJE \tTOT.DEPREC. \tVALOR DEPRECIADO FINAL");

	for(i=0;i<cont;i++){

		printf("\n\t%s\t%.0f\t    %.0f    ",equiposven[i].codigo,equiposven[i].vinic,equiposven[i].dep);
		deprec=calc_dep(equiposven[i].vinic,equiposven[i].dep);
		//printf("\t%f",deprec);

	}
	int cont1=0; 
   
}
///////////////////////////



float calc_dep(float vinic,float dep  ){
	int i; 
	float d,df,sd;
	df=vinic;  
	for (i=0;i<5;i++){
      d=df * (dep/100); 
	  sd=sd+d; 	
	  df=df - d; 
	}
	printf("\t%.2f\t%.2f",sd,df);
	return d; 
}

