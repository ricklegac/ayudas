#include<iostream>
using namespace std;
int main(){
	int i,j,cont=0;
	int mat[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>mat[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d ",mat[i][j]);
		}
		cout<<""<<endl; 
	}
	/**MATRIZ TRANSPUESTA*/
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(mat[i][j]==mat[j][i]){
				cont++;
			}
		}
	}
	if(cont==9) cout<<"Es transpuesta"<<endl;
	else cout<<"no es transpuesta"<<endl;	
	return 0;
}
