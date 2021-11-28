#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"ingrese un numero n"<<endl;
	cin>>n;
	string ns;
	ns= to_string(n);
	while(n<=1000 || n>=1000000 || ns.size()%2!=0 ){ 
		if(n<1000){
			cout<<"numero menor a 1000"<<endl;
			cin>>n;
			ns= to_string(n);
		}else if(n>1000000){
			cout<<"numero mayor a 1000000"<<endl;
			cin>>n;
			ns= to_string(n);
		}else{
			cout<<"error vuelva a ingresar: "<<endl;
			cin>>n;
			ns= to_string(n);
		}
	}
	long long int n2= pow(n,2); 
	string n2s= to_string(n2);
	cout<<"\t"<<n<<"\t"<<n2;
	while(n2s.size()<ns.size()*2){ 
		n2s="1"+n2s;
	}
	string aux=n2s.substr((n2s.size()/3)-1,ns.size());
	cout<<"\t"<<aux;
	return 0;
}

