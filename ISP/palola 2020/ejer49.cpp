#include<iostream>
using namespace std;
int buscar(int x,int a[],int t);
int main(){
    int n,x,i;
    cout<<"ingrese la dimension del arreglo"<<endl;
    cin>>n;
    cout<<"ingrese los elementos del arreglo"<<endl;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"ingrese el valor buscado"<<endl;
    cin>>x;
    cout<<"el arreglo: ";
    for(i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<" \n contiene a "<<x<<" un total de "<<buscar(x,a,n)<< " veces"<<endl;
    return 0;
}
int buscar(int x,int a[],int t){
    int i,c=0;
    for (i=0;i<t;i++){
        if(x==a[i]){
            c++;
        }
    }
    return c;
}