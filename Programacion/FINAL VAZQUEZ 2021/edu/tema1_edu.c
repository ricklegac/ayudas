#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int n,m;

	FILE * fp = fopen("N.txt","r");	//Abrimos el archivo que contiene la anchura
	if(fp==NULL){				// Si no se encuentra el archivo, mandamos un error
		perror("No se encontro el archivo");
		return 1;
	}					// Sino hay error, proseguimos
	
	fscanf(fp,"%d",&n);	//leemos los registros
	fclose(fp);		//Cerramos el archivo
	if(n%2==0){
		printf("\tN es par, reescriba el archivo con un numero impar\n");
		return 1;
	}
	

	fp = fopen("M.txt","r");	//Abrimos el archivo que contiene los pasos del borracho
	if(fp==NULL){				// Si no se encuentra el archivo, mandamos un error
		perror("No se encontro el archivo");
		return 1;
	}					// Sino hay error, proseguimos
	
	fscanf(fp,"%d",&m);	//leemos los registros
	fclose(fp);		//Cerramos el archivo
	if(m>100){
		printf("\tM es mayor a 100, reescriba el archivo con un numero M>=100\n");
		return 1;
	}
	
	
	int inicio = (n+1)/2;
	int actual = inicio;
	int paso;
	int pasos_dados = 0;
	
	fp = fopen("pasos.txt","w");	//Abrimos el archivo que contiene los pasos del borracho
	if(fp==NULL){				// Si no se encuentra el archivo, mandamos un error
		perror("No se encontro el archivo");
		return 1;
	}
	
	//Generaremos el camino mientras no lleguemos a los extremos ni sobrepasemos los pasos que dicta la variable M
		srand (time(NULL));
	do{
		paso = rand() % 3 + 1;
		
		if( paso==1 ){
			actual -= 1;
		}
		else if( paso==3 ){
			actual += 1;
		}
		
		if(actual < 1){
			actual = 1;		
			fprintf(fp,"%d\n",actual);
		}
		else if(actual>n){
			actual = 15;		
			fprintf(fp,"%d\n",actual);
		}else{	
			fprintf(fp,"%d\n",actual);
		}
		pasos_dados++;
	
	}while( actual>1 && actual<n && pasos_dados<m);
	
	fprintf(fp,"Pasos dados: %d\n",pasos_dados);
	
	fclose(fp);		//Cerramos el archivo
	

return 0;
}
