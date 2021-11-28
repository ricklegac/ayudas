#include<iostream>
#include<string>
#include <stdlib.h>
#include <string.h>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"ingrese un numero n"<<endl;
	cin>>n;
	string str_n;
	str_n= to_string(n);
	while(n<=1000 || n>=1000000 || str_n.size()%2!=0 ){ //validacion
		if(n<1000){
			cout<<"numero menor a 1000"<<endl;
			cin>>n;
			str_n= to_string(n);
		}else if(n>1000000){
			cout<<"numero mayor a 1000000"<<endl;
			cin>>n;
			str_n= to_string(n);
		}else{
			cout<<"error vuelva a ingresar: "<<endl;
			cin>>n;
			str_n= to_string(n);
		}
	}
	long long int n2= pow(n,2); //se usa long long int porque el numero es muy grande 
	string str_n2= to_string(n2);
	cout<<"\t"<<n<<"\t"<<n2;
	while(str_n2.size()<str_n.size()*2){ //agregamos los ceros si asi es necesario
		str_n2.push_back('0');
		cout<<str_n2<<endl;
	}
	string aux=str_n2.substr((str_n2.size()/3)-1,str_n.size());
	cout<<"\t"<<aux;
	//cout<<str_n2<<endl;
	return 0;
}

