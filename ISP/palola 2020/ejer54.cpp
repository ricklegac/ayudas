#include<iostream>
using namespace std;
int main(){
    int c,f,i,j,cont=0;
    cout<<"ingrese dimension m x n de la matriz"<<endl;
    cin>>f>>c;
    int m[f][c];
    int men[f];
    cout<<"ingrese los valores de la matriz"<<endl;
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            cin>>m[i][j];
        }
    }
     for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=0;i<f;i++){
        men[i]=m[i][0];
        
    }
    
    cont=0;
    for(j=0;j<c;j++){
        for(i=0;i<f;i++){
            if(m[cont][i]<men[cont]){
                men[cont]=m[cont][i];
            }
        }
    cont++;
    }
    cout<<"\n";
     for(i=0;i<f;i++){
        cout<<men[i]<< " ";
    }
    
    

    return 0;
}