#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct coordenada{
    int x,y;
};
typedef struct coordenada punto;

void  transformadaDistancia(int**A,float**B ,int M, int N);
float distancia_Euclidiana(punto a, punto b);

int main(){
	int M,N;
	FILE  *pr; //PUNTERO PARA EL ARHICVO
	char direccion1[]="binaria.txt"; // NOMBRE  EL .TXT
	pr=fopen(direccion1,"r");// ABRIMOS EL ARCHIVO PARA LECTURA
	// HACEMOS LA LECTURA DE  LAS DIMENSIONES DE LA  MATRIZ Y LA VALIDAMOS
	fscanf(pr,"%d\t%d\n",&M,&N);

	while( M<1 || M>10){
		printf("Ingrese el valor de M (1<=M<=10): ");
		scanf("%d",&M);
	}

	while( N<1 || N>10){
		printf("Ingrese el valor de N (1<=N<=10): ");
		scanf("%d",&N);
	}
	int A[M][N];
	float B[M][N];
	size_t i,j;
	// CARGAMOS LA MATRIZ EXTRAYENDO LOS VALORES DEL ARCHIVO
	for( i = 0; i < M; ++i){
       	for( j = 0; j < N; ++j)
        	fscanf(pr, "%d", A[i] + j);
    }
    int *p[M];
    for(i=0 ; i<M;i++){
    	p[i]=&A[i][0];
	}
	int **q=p;
	
	int *s[M];
    for(i=0 ; i<M;i++){
    	s[i]=&B[i][0];
	}
	int **l=s;
	
    //LLAMAMOS A LA FUNCION
	transformadaDistancia(q,l,M,N);
	
	//CERRAMOS EL ARCHIVO
	fclose(pr);
return 0;
}

void  transformadaDistancia(int**A,float**B, int M, int N){
	FILE *pt;
	char direccion2[]="distancia.txt"; // NOMBRE  EL .TXT
	pt=fopen(direccion2,"w");// ABRIMOS EL ARCHIVO PARA ESCRITURA
	punto a,b;
	int i,j,z,d;
	float dist;
	for(i=0 ; i<M ; i++){
		for(j=0 ; j<N ; j++){
			a.x=i;
			a.y=j;
			for(z=i+1 ; z<M ; z++){
				for(d=j+1 ; d<N ; d++){
					if(A[z][d]==1){
						A[z][d]==0;
						b.x=z;
						b.y=d;
						dist= distancia_Euclidiana(a,b);
						B[i][j]=dist;
					}
				}
			}
		}
	}
	
	for(i=0 ; i<M ; i++){
		for(j=0 ; j<N ; j++){
			fprintf(pt,"%.4f\t",B[i][j]);
		}
		fprintf(pt,"\n");
	}
	

	printf("ARCHIVO DISTANCIA.TXT CREADO");
}


// FUNCION PARA HALLAR LA DISTANCIA EUCLIDIANA
float distancia_Euclidiana(punto a, punto b){
	float dist;
		dist += (pow((a.x - b.x),2) + pow((a.y - b.y),2));
		sqrt(dist);
return dist;
}
