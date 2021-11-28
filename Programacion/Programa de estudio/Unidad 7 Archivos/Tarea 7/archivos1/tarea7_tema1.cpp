//Elaborado por: Lucas Valdez
//En DevC++
#include <stdio.h>
#include <string.h> 
#include <math.h>
#include <stdbool.h>

//void ordenar(int ,struct libros * );
double Mes(int);
double mm,tri,trimestre; 
//int cortesuc(int ,int ,struct libros *);
	

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
	float promedio=0; 
	int i,j;
	int cont=0,tit=0;
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
		printf("\t%.0f", Mes(librosven[i].Fecha));
		promedio = promedio + librosven[i].Precio; 
	
	}
	promedio = promedio / cont; 
	int montoTotal=0;
	//corte 1:  por sucursal 
   int cont1=0;
   
   int tot=0,cantit=1; 
   tit=librosven[0].codLB; 
   int suc=librosven[0].CodSucc; 
   trimestre= Mes(librosven[0].Fecha) ;  //inicializa con el pimer valor
   //printf("\nTRI:\t%f ", tri) ; 

	printf("\n\nSUCURSAL :\t%d ", librosven[cont1].CodSucc) ; 
	printf("\nTRIMESTRE \tTOTAL Gs. \t\tTITULO") ; 
   while(cont1!=(cont+1)){
       //if (librosven[cont1].Precio > 0)  {
   		// primer corte
   		if(librosven[cont1].CodSucc != suc && librosven[cont1].CodSucc > 0 ){
   			printf("\n %.0f", trimestre ); 
  			printf(" \t\t%d \t\t\t%d", tot, cantit ); 

   			printf("\n\nSUCURSAL :\t%d ", librosven[cont1].CodSucc) ; 
			printf("\nTRIMESTRE \tTOTAL Gs.\tTITULO") ; 	
			suc = librosven[cont1].CodSucc; 
		 
			////// corte por trimestre
		
  			trimestre=Mes(librosven[cont1].Fecha); 
  			tot=0; 
  			cantit=0; 
  			///
  			
		 
		 } 
		
		//}
		// segundo corte por trimestre 
		 while(  trimestre != Mes(librosven[cont1].Fecha)  ) {
  			printf("\n %.0f", trimestre ); 
  			printf(" \t\t%d \t\t\t%d", tot, cantit ); 

  			trimestre=Mes(librosven[cont1].Fecha); 
  			tot=0; 
  			cantit=0; 
		 }
	
		 tot = tot + librosven[cont1].Precio; 
		 if (tit != librosven[cont1].codLB  ) {
		       cantit=cantit+1; 
		 } 
   	     cont1++;
   }
    printf("\n\n  EL PROMEDIO DE PRECIO DE LIBROS ES: %.0f", promedio ); 
    return 0; 
}
///////////////////////////

double Mes(int Fecha){
	
	mm=	Fecha/100; 
	mm= Fecha - (mm*100); 
    if (mm < 4) 			tri=1; 
    if (mm > 3 & mm < 7)  	tri=2; 
    if (mm > 6 & mm < 10) 	tri=3; 
    if (mm > 9) 			tri=4; 

	return tri;
}


