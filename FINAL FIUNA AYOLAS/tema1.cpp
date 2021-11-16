#include<iostream>
#include <algorithm>
#include<string>
#include<stdlib.h>
#include<ctime>
#include<cstdlib>
using namespace std;
/*#define VERDADERO 1
#define FALSO 0
string numero;
int validar(string n);
void lectura(string *ptr);*/
int validar(int n);
void generarvector(int n);
int main(){
	int n;
	cout<<"ingrese un numero positivo y entero"<<endl;
	cin>>n;
	n=validar(n);
	cout<<n<<endl;
	generarvector(n);

	return 0;
}
int validar(int n){
	while(n<0){
		cout<<"ingrese un numero valido"<<endl;
		cin>>n;
	}
	return n;
}
void generarvector(int n){
	char charrandom[n];
	srand(time(NULL));
    for(int i=0; i < n; i++)
        charrandom[i] = 97 + rand() % (121 - 97);
    cout << charrandom;
    cin.get();
    sort(charrandom, charrandom+sizeof(charrandom));
    cout<<"\n array ordenado:"<<endl;
    cout<<charrandom<<endl;
}

/*int validar(string n){
	int i=0;
	int valido = VERDADERO;
	while(n[i]!='\0' && (valido==VERDADERO)){
		if(isdigit(n[i])){
			valido=VERDADERO;
		}else{
			valido=FALSO;
		}
		i++;
	}
	return valido;
}

void lectura(string *ptr){
	char c;
	int i;
	string auxiliar =NULL;
	if((*ptr)!=NULL){
		free(*ptr);
		(*ptr)=NULL;
	}
	i=1;
	while((getchar())!='\n'){
		auxiliar=(string)realloc(auxiliar,(i+1)*sizeof(char));
		if(auxiliar==NULL){
			cout<<"no posible";
			exit(EXIT_FAILURE);
		}
	}
	if(auxiliar==NULL){
		(*ptr)=(string)malloc(5*sizeof(char));
		strcpy((*ptr),"NULO");
	}else{
		(*ptr)=(string)malloc((strlen(auxiliar)+1)*sizeof(char));
		strcpy((*ptr),auxiliar);
	}
	free(auxiliar);

}*/