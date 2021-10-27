#include<stdio.h>
int main(){
    int n;
    printf("ingresar un numero entre 0 y 100");
    validar(n);
    return 0;
}
int validar(n){
    if(n>0 && n<100){
        retorno = 1;
    }else{
        retorno = 0;
    }
    return retorno;
}