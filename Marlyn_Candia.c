/*
	Marlyn A. Candia A
	5198554 - ICM

*/


#include<stdlib.h>
#include<string.h>
typedef struct {
	char intendente [10];	
	char consejal [10];
}Encuestas;
void Encuestaciudad(Encuestas * ciudad, int num);
void imprimirStruct(Encuestas * ciudad);
void mayorVotos(Encuestas *ciudad1, Encuestas * ciudad2,Encuestas * ciudad3 ,Encuestas * ciudad4,Encuestas * ciudad5);
void conteo(Encuestas * ciudad1, int num);
void ciudades(Encuestas *ciudad1, Encuestas * ciudad2,Encuestas * ciudad3 ,Encuestas * ciudad4,Encuestas * ciudad5);
void escuelas(Encuestas *ciudad1, Encuestas * ciudad2,Encuestas * ciudad3 ,Encuestas * ciudad4,Encuestas * ciudad5);
void conteoEscuelas(Encuestas * ciudad1, int num);
void Encuestaciudad(Encuestas * ciudad, int num){
	int i,j;
	for(i=0 ; i<5 ; i++){
		printf("\nCiudad %d\nElija:\n", num);
		for(j=0 ; j<10 ; j++){
			printf("Intendente:");
			scanf("%c", &ciudad[i].intendente[j]) ;
			printf("\nConcejal:");
			scanf("%c", &ciudad[i].consejal[j] );
		}
	}
}
void imprimirStruct(Encuestas * ciudad){
	int i,j;
	printf("\n\nTabla Resultante");
	for(i=0 ; i<5 ; i++){
		printf("\nCiudad %d\n",i+1);
		printf("Intendente:");
		for(j=0 ; j<10 ; j++){
			printf("%c, ",ciudad[i].intendente[j]);
		}
		printf("\nConcejal:");
		for(j=0 ; j<10 ; j++){
			printf("%c, ",ciudad[i].consejal[j]);
		}
		
	}
}
void mayorVotos(Encuestas *ciudad1, Encuestas * ciudad2,Encuestas * ciudad3 ,Encuestas * ciudad4,Encuestas * ciudad5){
	int i,j;
	int intendente [3];
	int consejal [3];
	intendente[0]=0;
	intendente[1]=0;
	intendente[2]=0;
	consejal[0]=0;
	consejal[1]=0;
	consejal[2]=0;
	for (i=0 ; i< 5 ; i++){
		for(j=0 ; j<10 ; j++){
			if(ciudad1[i].intendente[j] == 'A' || ciudad2[i].intendente[j] == 'A' || ciudad3[i].intendente[j] == 'A' || ciudad4[i].intendente[j] == 'A' || ciudad5[i].intendente[j] == 'A'){
				intendente[0]++;
			}
			if(ciudad1[i].intendente[j] == 'B' || ciudad2[i].intendente[j] == 'B' || ciudad3[i].intendente[j] == 'B' || ciudad4[i].intendente[j] == 'B' || ciudad5[i].intendente[j] == 'B'){
				intendente[1]++;
			}	
			if(ciudad1[i].intendente[j] == 'C' || ciudad2[i].intendente[j] == 'C' || ciudad3[i].intendente[j] == 'C' || ciudad4[i].intendente[j] == 'C' || ciudad5[i].intendente[j] == 'C'){
				intendente[2]++;
			}	
			if(ciudad1[i].consejal[j] == 'X' || ciudad2[i].consejal[j] == 'X' || ciudad3[i].consejal[j] == 'X' || ciudad4[i].consejal[j] == 'X' || ciudad5[i].consejal[j] == 'X'){
				consejal[0]++;
			}	
			if(ciudad1[i].consejal[j] == 'Y' || ciudad2[i].consejal[j]== 'Y' || ciudad3[i].consejal[j] == 'Y' || ciudad4[i].consejal[j] == 'Y' || ciudad5[i].consejal[j] == 'Y'){
				consejal[1]++;
			}	
			if(ciudad1[i].consejal[j] == 'Z' || ciudad2[i].consejal[j] == 'Z' || ciudad3[i].consejal[j] == 'Z' || ciudad4[i].consejal[j] == 'Z' || ciudad5[i].consejal[j] == 'Z'){
				consejal[2]++;
			}
		}
			
	}
	int ganadores1=0; 
	int ganadores2=0;
	int ban1=0;
	int ban2=0;
	for(i=0 ; i<3 ; i++){
		if(intendente[i]>ganadores1){
			ganadores1=intendente[i];
			ban1=i;
		}
		if(consejal[i]>ganadores2){
			ganadores2=consejal[i];
			ban2=i;
		}	
	}
	
	printf("\nPartido que tiene mas intendentes ganados:\n");
	if(ban1==0)
		printf("intendente: A\n");
	else if(ganadores1==1)
		printf("intendente: B\n");
	else
		printf("intendente: C\n");
	
	printf("\nPartido con mas votos para consejales\n");
	if(ban2==0)
		printf("consejal: X\n");
	else if(ganadores2==1)
		printf("consejal: Y\n");
	else	
		printf("consejal: Z\n");
}
void conteo(Encuestas * ciudad1, int num){
	int i,j;
	int intendente [3];
	int consejal [3];
	intendente[0]=0;
	intendente[1]=0;
	intendente[2]=0;
	consejal[0]=0;
	consejal[1]=0;
	consejal[2]=0;
	for (i=0 ; i< 5 ; i++){
		for(j=0 ; j<10 ; j++){
			if(ciudad1[i].intendente[j] == 'A' ){
				intendente[0]++;
			}
			if(ciudad1[i].intendente[j] == 'B' ){
				intendente[1]++;
			}	
			if(ciudad1[i].intendente[j] == 'C' ){
				intendente[2]++;
			}	
			if(ciudad1[i].consejal[j] == 'X' ){
				consejal[0]++;
			}	
			if(ciudad1[i].consejal[j] == 'Y' ){
				consejal[1]++;
			}	
			if(ciudad1[i].consejal[j] == 'Z' ){
				consejal[2]++;
			}
		}
			
	}
	int ganadores1=0; 
	int ganadores2=0;
	int ban1=0;
	int ban2=0;
	for(i=0 ; i<3 ; i++){
		if(intendente[i]>ganadores1){
			ganadores1=intendente[i];
			ban1=i;
		}
		if(consejal[i]>ganadores2){
			ganadores2=consejal[i];
			ban2=i;
		}	
	}
	printf("\nGanadores en cada ciudad %d\n",num);
	if(ban1==0)
		printf("intendente: A\n");
	else if(ganadores1==1)
		printf("intendente: B\n");
	else
		printf("intendente: C\n");
	
	if(ban2==0)
		printf("consejal: X\n");
	else if(ganadores2==1)
		printf("consejal: Y\n");
	else	
		printf("consejal: Z\n");	
	
	printf("\n");
}
void ciudades(Encuestas *ciudad1, Encuestas * ciudad2,Encuestas * ciudad3 ,Encuestas * ciudad4,Encuestas * ciudad5){
	int i;
	printf("Partido ganador en cada ciudad: \n");
	for(i=0 ; i<5 ; i++){
		conteo(ciudad1,i+1);
	}
}

void escuelas(Encuestas *ciudad1, Encuestas * ciudad2,Encuestas * ciudad3 ,Encuestas * ciudad4,Encuestas * ciudad5){
	int i;
	printf("Partido ganador en cada escuela:");
	for(i=0 ; i<5 ; i++){
		conteoEscuelas(ciudad1,i+1);
	}
	//printf("sda")
}
void conteoEscuelas(Encuestas * ciudad1, int num){
	int i,j;
	int intendente [3];
	int consejal [3];
	intendente[0]=0;
	intendente[1]=0;
	intendente[2]=0;
	consejal[0]=0;
	consejal[1]=0;
	consejal[2]=0;	
	for (i=0 ; i< 5 ; i++){
		for(j=0 ; j<10 ; j++){
			if(ciudad1[i].intendente[j] == 'A' ){
				intendente[0]++;
			}
			if(ciudad1[i].intendente[j] == 'B' ){
				intendente[1]++;
			}	
			if(ciudad1[i].intendente[j] == 'C' ){
				intendente[2]++;
			}	
			if(ciudad1[i].consejal[j] == 'X' ){
				consejal[0]++;
			}	
			if(ciudad1[i].consejal[j] == 'Y' ){
				consejal[1]++;
			}	
			if(ciudad1[i].consejal[j] == 'Z' ){
				consejal[2]++;
			}
		}	
		int ganadores1=0; 
		int ganadores2=0;
		int ban1=0;
		int ban2=0;
		for(i=0 ; i<3 ; i++){
			if(intendente[i]>ganadores1){
				ganadores1=intendente[i];
				ban1=i;
			}
			if(consejal[i]>ganadores2){
				ganadores2=consejal[i];
				ban2=i;
			}	
		}
		/*
		for(i=0 ; i<3 ; i++){
			if(intendente[i]>ganadores1){
				ganadores1=intendente[i];
				ban1=i;
			}
			if(consejal[i]>ganadores2){
				ganadores2=consejal[i];
				ban2=i;
			}	*/
		printf("\nGanadores por escuela, ciudad %d\n",num);
		if(ban1==0)
			printf("intendente: A\n");
		else if(ganadores1==1)
			printf("intendente: B\n");
		else
			printf("intendente: C\n");
		if(ban2==0)
			printf("consejal: X\n");
		else if(ganadores2==1)
			printf("consejal: Y\n");
		else	
			printf("consejal: Z\n");	
		printf("\n");			
	}

}
int main(){
	int i,j;
	Encuestas ciudad1 [5];
	Encuestas ciudad2 [5];
	Encuestas ciudad3 [5];
	Encuestas ciudad4 [5];
	Encuestas ciudad5 [5];
	Encuestaciudad(ciudad1,1);
	Encuestaciudad(ciudad2,2);
	Encuestaciudad(ciudad3,3);
	Encuestaciudad(ciudad4,4);
	Encuestaciudad(ciudad5,5);
	escuelas(ciudad1, ciudad2, ciudad3 , ciudad4, ciudad5);
	ciudades(ciudad1, ciudad2, ciudad3 , ciudad4, ciudad5);
	mayorVotos(ciudad1, ciudad2, ciudad3 , ciudad4, ciudad5);
return 0;
}


























