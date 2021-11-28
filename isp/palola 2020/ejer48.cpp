#include<iostream>
using namespace std;

int main(){
    int i,j,m,n;
    cout<<"ingrese n y m"<<endl;
    cin>>n>>m;
    int a[m];
    int b[n];
    cout<<"ingrese los valores del vecor a: "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"ingrese los valores del vecor b: "<<endl;
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    int c[m+n];
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(j=0;j<m;j++){
        c[i]=b[j];
        i++;
    }
    cout<<"\nvector c:\n";
    for(i=0; i<n+m;i++){
        cout<<" "<<c[i];
    }

    return 0;
}