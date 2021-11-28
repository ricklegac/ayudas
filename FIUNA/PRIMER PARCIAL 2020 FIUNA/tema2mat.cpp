#include<iostream>
#include<stdlib.h>
#include <time.h>
void imprimir(int *vec1, int *vec2, int *vec3, int *vec4, int N);
void ordenar(int *vec, int N);
void sumacuadrante(int *vec1, int *vec2, int *vec3, int *vec4, int N);
using namespace std;
int main(){
	int N,i,j;
	cout<<"Ingrese la dimension de la Matriz"<<endl;
	cin>>N;
	cout<<endl;
	if(N<3 || N%2!=0){
		cout<<"No valido"<<endl;
		exit(1);
	}
	int mat[N][N];
	srand(time(NULL));
	int vec1[N/2],vec2[N/2],vec3[N/2],vec4[N/2];
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			mat[i][j]=0+rand()%(2*N-1);
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	int x=0;
	for(i=0;i<N/2;i++){
		for(j=0;j<N/2;j++){
			vec1[x]=mat[i][j];
			x++;
		}
	}
	cout<<endl;
	x=0;
	for(i=0;i<N/2;i++){
		for(j=0;j<N/2;j++){
			vec2[x]=mat[i][j+N/2];
			x++;
		}
	}
	x=0;
	for(i=0;i<N/2;i++){
		for(j=0;j<N/2;j++){
			vec3[x]=mat[i+N/2][j+1];
			x++;
		}
	}
	x=0;
	for(i=0;i<N/2;i++){
		for(j=0;j<N/2;j++){
			vec4[x]=mat[i+N/2][j+N/2];
			x++;
		}
	}
	ordenar(vec1,N);
	ordenar(vec2,N);
	ordenar(vec3,N);
	ordenar(vec4,N);
	cout<<"Matriz ordenada por cada cuadrante: "<<endl;
	imprimir(vec1,vec2,vec3,vec4,N);
	cout<<endl;
	sumacuadrante(vec1,vec2,vec3,vec4,N);
	cout<<endl;
	return 0;
}
void sumacuadrante(int *vec1, int *vec2, int *vec3, int *vec4, int N){
	int vecsumatorias[N]={0};
	int j=0,i;
	for(i=0;i<N;i++){
		vecsumatorias[j]=vec1[i]+vecsumatorias[j];
	}
	j++;
	for(i=0;i<N;i++){
		vecsumatorias[j]=vec2[i]+vecsumatorias[j];
	}
	j++;
	for(i=0;i<N;i++){
		vecsumatorias[j]=vec3[i]+vecsumatorias[j];
	}
	j++;
	for(i=0;i<N;i++){
		vecsumatorias[j]=vec4[i]+vecsumatorias[j];
	}
	j++;
	for(i=0;i<N;i++){
		cout<<"Sumatoria de cuadrante " <<i<<": "<<vecsumatorias[i]<<endl;
	}
	ordenar(vecsumatorias,N);
	cout<<"La mayor de las sumatorias es: "<<vecsumatorias[N-1]<<endl;
	
}
void ordenar(int *vec, int N){
	int  temporal;
	for (int i = 0;i < N; i++){
		for (int j = 0; j< N-1; j++){
			if (vec[j] > vec[j+1]){ 
			temporal = vec[j]; 
			vec[j] = vec[j+1]; 
			vec[j+1] = temporal;
			}
		}
	}
}
void imprimir(int *vec1, int *vec2, int *vec3, int *vec4, int N){
	int i, j;
	for(i=0;i<N/2;i++){
		cout<<vec1[i]<<" ";
	}
	for(i=0;i<N/2;i++){
		cout<<vec2[i]<<" ";
	}
	cout<<endl;
	for(i=N/2;i<N;i++){
		cout<<vec1[i]<<" ";
	}
	for(i=N/2;i<N;i++){
		cout<<vec2[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<N/2;i++){
		cout<<vec3[i]<<" ";
	}
	for(i=0;i<N/2;i++){
		cout<<vec4[i]<<" ";
	}
	cout<<endl;
	for(i=N/2;i<N;i++){
		cout<<vec3[i]<<" ";
	}
	for(i=N/2;i<N;i++){
		cout<<vec4[i]<<" ";
	}
}

