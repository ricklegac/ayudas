
#include <stdio.h>
#include <string.h> 
#include <math.h>
#include <stdbool.h>

//void ordenar(int ,struct libros * );
double Mes(int);
double mm; 
int cortesuc(int ,int ,struct libros *);
	

// define la estructura
struct libros{
	int CodSucc;
	int CodVend; 
	int Fecha; 
	int codLB; 
	int Precio;
	
	
};

int main(){
	//crea o abre el archivo 
	FILE *libros;
	int i,j;
	int cont=0;
	char c;
	//verifica si leyo corretamente
	if ((libros=fopen("Librosven.txt","r"))==NULL){
		
		printf ("Error en archivo");
		return 0;
	
	}else{
		printf("\tEl Archivo ha sido leido con exito\n");	
	} 
    // lee el sgte caracter
	c=fgetc(libros);
	// recorre mientras no encuentre eof
	while(!feof(libros)){
		if(c=='\n'){
			cont++;
		}
		//lee
		c=fgetc(libros);
	}
	
	printf ("\t%d\n\t",cont);
	rewind(libros);  //vuelve a posicionar al inicio 
	
	//asocia la estructura al archivo de texto
	struct libros librosven[cont];
	
	for (i=0;i<cont;i++){
		//permite leer datos formateados 
		fscanf (libros,"%d\t%d\t%d\t%d\t%d",&librosven[i].CodSucc,&librosven[i].CodVend,&librosven[i].Fecha,&librosven[i].codLB,&librosven[i].Precio);
	}
	
	printf("\n\n\tLISTADO DE LIBROS VENDIDOS: ");
	for(i=0;i<cont;i++){

		printf("\n\t%d\t%d\t%d\t%d\t%d",librosven[i].CodSucc,librosven[i].CodVend,librosven[i].Fecha,librosven[i].codLB,librosven[i].Precio);
		printf("\t%f", Mes(librosven[i].Fecha));
	
	}
	int montoTotal=0;
	//corte 1:  por sucursal 
   int cont1=1;
   int suc=librosven[0].CodSucc;  //inicializa con el pimer valor
	printf("\nSUCURSAL :\t%d ", librosven[cont1].CodSucc) ; 
			printf("\nTRIMESTRE \tTOTAL Gs. \t\tTITULO") ; 
   while(cont1!=(cont+1)){
   		// primero corte
   		if(librosven[cont1].CodSucc != suc){
   			printf("\nSUCURSAL :\t%d ", librosven[cont1].CodSucc) ; 
			printf("\nTRIMESTRE \tTOTAL Gs. \t\tTITULO") ; 	
			suc = librosven[cont1].CodSucc; 
		}
		// segundo corte
		  while( librosven[cont1].CodSucc != suc && tri !=  ) 
   	     cont1++;
   }
   return 0; 
}

///////////////////////////

double Mes(int Fecha){
	
	mm=	Fecha/100; 
	mm= Fecha - (mm*100); 

	return mm;
}

/*
void ordenar(int cont,struct libros *librosven ){
     int i,j,aux;
     
       for(i=0;i<cont;i++){
		for(j=0;j<cont;j++){
			if(Mes(librosven[i].Fecha) > Mes(librosven[i+1].Fecha)){
					
				aux = librosven[j].Fecha;
				librosven[j].Fecha = librosven[j+1].Cod_mat;
				librosven[j+1].Cod_mat = aux;	
			
				aux = librosven[j].Fecha;
				librosven[j].Fecha = librosven[j+1].Cod_mat;
				librosven[j+1].Cod_mat = aux;	
			
			int CodSucc;
	int CodVend; 
	int Fecha; 
	int codLB; 
	int Precio;
			}
	 	}
		}
	}

}
*/

