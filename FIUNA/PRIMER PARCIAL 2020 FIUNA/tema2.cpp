#include<iostream>
#include<cstring>
#include<stdlib.h>
#include <time.h>
#include <ctime>
void ordenar(int *vec, int N);
using namespace std;
int main(){
	int N,i,j;
	
	srand(time(NULL));
	cout<<"ingrese dimension N de la matriz"<<endl;
	cin>>N;
	while(N<3 || N%2!=0){
		cout<<"ingrese una N valida (N>3 y N par)"<<endl;
		cin>>N;
	}
	int mat[N][N];
	int vec1[N/2],vec2[N/2],vec3[N/2],vec4[N/2];
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			mat[i][j]=0+rand()%(2*N-1);
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cout<<" "<<mat[i][j];
		}
		cout<<endl;
	}
	int x=0;
	int suma=0;
	for(i=0;i<N/2;i++){
		for(j=0;j<N/2;j++){
			vec1[x]=mat[i][j];
			x++;
			suma=vec1[x]+suma;
			//cout<<" "<<i+1<<" "<<j+1<<" ";
		}
	}
	int mayor=suma;
//	cout<<endl;
	x=0;
	suma=0;
	for(i=0;i<N/2;i++){
		for(j=0;j<N/2;j++){
			vec2[x]=mat[i][j+N/2];
			x++;
			suma=suma+vec2[x];
			if(suma>mayor){
				mayor=suma;
			}
			//cout<<" "<<i+1<<" "<<j+N/2+1<<" ";
		}
	}
//	cout<<endl;
	x=0,suma=0;
	for(i=0;i<N/2;i++){
		for(j=0;j<N/2;j++){
			vec3[x]=mat[i+N/2][j+1];
			x++;
			suma=suma+vec2[x];
			if(suma>mayor){
				mayor=suma;
			}
			//cout<<" "<<i+N/2+1<<" "<<j+1<<" ";
		}
	}
	x=0,suma=0;
//	cout<<endl;
	for(i=0;i<N/2;i++){
		for(j=0;j<N/2;j++){
			vec4[x]=mat[i+N/2][j+N/2];
			x++;
			if(suma>mayor){
				mayor=suma;
			}
			//cout<<" "<<i+N/2+1<<" "<<j+N/2+1<<" ";
		}
	}
	ordenar(vec1,N);
	ordenar(vec2,N);
	ordenar(vec3,N);
	ordenar(vec4,N);
	cout<<endl;
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
	cout<<endl;
	cout<<"suma mayor de los cuadrantes: "<<mayor<<endl;
	return 0;
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


