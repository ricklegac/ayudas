#include<iostream>
#include<cstring>
using namespace std;
#define TAMMAXCAD 1001

int morseANumero(char cad[]){
    if(strcmp(cad,".----")==0) return 1;
    if(strcmp(cad,"..---")==0) return 2;
    if(strcmp(cad,"...--")==0) return 3;
    if(strcmp(cad,"....-")==0) return 4;
    if(strcmp(cad,".....")==0) return 5;
    if(strcmp(cad,"-....")==0) return 6;
    if(strcmp(cad,"--...")==0) return 7;
    if(strcmp(cad,"---..")==0) return 8;
    if(strcmp(cad,"----.")==0) return 9;
    if(strcmp(cad,"-----")==0) return 0;
}

int main(){
    const int tam=5;
    char linea[TAMMAXCAD],codM[tam+1];
    int j=0,k,dig;
    cin.getline(linea,TAMMAXCAD);
    while(linea[j]!='\0'){
        for(k=0;k<tam;k++){
            codM[k]=linea[j];
            j++;
        }
        codM[tam]='\0';
        dig=morseANumero(codM);
        cout<<dig;
        if(linea[j]=='\0') break;
        if(linea[j]==' ' && linea[j+1]==' ' && linea[j+2]==' '){
            cout<<" ";
            j+=3;
        }
        else j++;
    }
    return 0;
}

