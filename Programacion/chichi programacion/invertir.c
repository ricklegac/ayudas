#include<stdio.h>
#include<string.h>
int main(){
    int l,i;
    char cadena[100];
    gets(cadena);
    l=strlen(cadena);
    for(i=l;i>=0;i--){
        if(cadena[i] != ' '){
            printf("%c",cadena[i]);
        }

    }
return 0;
}
