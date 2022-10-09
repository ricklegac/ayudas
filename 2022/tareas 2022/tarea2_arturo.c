#include<stdio.h>
#include<math.h>
int potencia(int a, int b){
    int i, p=1;
    for(i=0;i<b;i++) p*=a;
    return p;
}

int esPrimo(int n){
    if(n==1) return 0;
    int i;
    for(i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
    return 1;
}

int cantDigitos(int n){
    int dig=0;
    while(n>0){
        dig++;
        n/=10;
    }
    return dig;
}

int cantPrimos_C_Digitos(int N, int C){
    int nroDig=cantDigitos(N);
    if(nroDig<C) return -1; 
    int num,contPrimos=0; 
    int aux = potencia(10,C); 
    while(nroDig>=C){
        
        num = N%aux;
        if(esPrimo(num)) contPrimos++;
        nroDig--; N/=10;
    }
    return contPrimos;
}

int main(){
    int N,C;
    printf("Ingrese N y C: \n");
    scanf("%d",&N);
    scanf("%d",&C);
    int cant_primos = cantPrimos_C_Digitos(N,C);
    printf("\nN\t\tC\t\t#Primos\n%d\t\t%d\t\t%d\n",N,C,cant_primos);
    return 0;
}
