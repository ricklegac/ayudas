#include<iostream>
#include<cmath>
using namespace std;

/*Función que devuelve el resultado de a^b.
Se supone que b es un número no-negativo.*/
int potencia(int a, int b){
    int i, p=1;
    for(i=0;i<b;i++) p*=a;
    return p;
}

/*Función que devuelve true si el número n es primo, y false en caso contrario.
Se supone que n es positivo.*/
bool esPrimo(int n){
    if(n==1) return false;
    int i;
    for(i=2;i<=sqrt(n);i++) if(n%i==0) return false;
    return true;
}

/*Función que devuelve la cantidad de dígitos de un número n.
Se supone que n es positivo.*/
int cantDigitos(int n){
    int dig=0;
    while(n>0){
        dig++;
        n/=10;
    }
    return dig;
}

/*Función solicitada para el problema planteado.*/
int cantPrimos_C_Digitos(int N, int C){
    int nroDig=cantDigitos(N);
    if(nroDig<C) return -1; //para el caso de que C sea mayor que la cantidad de dígitos de N.

    /*contPrimos contendrá la cantidad de números primos según lo que solicita el problema.
    La idea es, en cada paso, formar un número de C dígitos (comenzando a la derecha de N).

    Para ello, se calcula el resto de N con 10^C, lo que nos da el valor de "num".

    Luego de revisar si num es primo, se divide N entre 10 para descartar su último dígito, lo cual
    permitirá considerar los siguientes C dígitos en la siguiente iteración del while.
    Se sale del while cuando la cantidad de dígitos restantes de N es menor que C.
    La función devuelve el valor de contPrimos*/

    int num,contPrimos=0; //en num formaremos los "candidatos"
    int aux = potencia(10,C); //aux almacena el valor de 10^C
    while(nroDig>=C){
        //Tomamos los C primeros dígitos
        num = N%aux;
        if(esPrimo(num)) contPrimos++;
        nroDig--; N/=10;
    }
    return contPrimos;
}

/*Función principal: no modificar */
int main(){
    int N,C;
    cin>>N>>C;
    cout<<"Cantidad de primos de "<<C<<" digitos: "<<cantPrimos_C_Digitos(N,C)<<endl;
    return 0;
}
