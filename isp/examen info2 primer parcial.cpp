#include<iostream>
using namespace std;
bool validar_letra(char c);
int obtener_nro(char c);
int main(){
	char c;
	cout<< "introduce un caracter: ";
	cin.get(c);
	while(c!='@'){
		if(validar_letra(c)){
			printf("%d",obtener_nro(c));
			cout<<" "<<endl;	
		}
		cin.get(c);
	}
	
	return 0;
}
bool validar_letra(char c){
	if(c>='A' && c<='Z'){
		return true;
		
	}
	return false;
}
int obtener_nro(char c){
	int i,num;
	if(c>='A' && c<='B') num=2;
	if(c>='D' && c<='F') num=3;
	if(c>='G' && c<='I') num=4;
	if(c>='J' && c<='L') num=5;
	if(c>='M' && c<='O') num=6;
	if(c>='P' && c<='S') num=7;
	if(c>='T' && c<='V') num=8;
	if(c>='W' && c<='Z') num=9;
	return num;
}
