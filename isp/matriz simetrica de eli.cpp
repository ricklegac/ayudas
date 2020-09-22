#include<iostream>
using namespace std;
void pedirdatos();
void simetrica(int matriz[][100],int f);
void mostrarmatriz(int matriz[][100],int f,int c);
int matriz[100][100],f,c;
int main(){
	pedirdatos();
	simetrica(matriz,f,c);
  mostrarmatriz(matriz,f,c);
	system("pause");
	return 0;
}
void pedirdatos(){
	cout<<"ingrese la dimension de la matriz: "<<endl;
	cout<<"fila: ";cin>>f;
	cout<<"columna: ";cin>>c;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<"digite el elemento ["<<j<<","<<i<<"]: ";
			cin>>matriz[i][j];
		}
		
	}
}
	void mostrarmatriz(int matriz[][100],int f,int c){
		cout<<"la matriz original"<<endl;
		for(int i=0;i<f;i++){
			for(int j=0;j<c;j++){
				cout<<" "<<matriz[i][j];
			}
			cout<<endl<<endl;
		}
	}
	void simetria(int matriz[][100],int f,int c){
		int cont=0;
		if(f==c){
			for(int i=0;i<f;i++){
				for(int j=0;j<c;j++){
					if(matriz[i][j]==matriz[j][i]){
						cont++;
					}
				}
			}
		}
		else{
			cout<<"no es cuadrada,por lo tanto no es simetrica."<<endl;
		}

	if(cont==f*c){
			cout<<"la matriz es simetrica"<<endl;
		}
		else{
			cout<<"no es simetrica"<<endl;
		}
}

