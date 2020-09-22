#include<iostream>
#include<stdlib.h>
#include<string.h>
void invertir(char ca[]);
using namespace std;
int main(){
	char c[50],ca[50];
	int j=0,n;
	cout<<"Inserte su palabra:"<<endl;
	gets(c);
	n=strlen(c);
	c[n]=' '; c[n+1]='\0';
	cout<<c<<endl;
	for(int i=0;i<n;i++){
		if(c[i]!=' '){
			ca[j]=c[i];
			j++;
		}else{
			invertir(ca);
			j=0;
		}
	}
	return 0;
}
void invertir(char ca[]){
	strrev(ca);
	cout<<ca;
}
