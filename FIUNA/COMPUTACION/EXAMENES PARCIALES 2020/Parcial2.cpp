#include<iostream>
using namespace std;

/*Función que devuelve la cantidad de apariciones del número x en el vector A de N elementos*/
int nroApariciones(int x, int A[], int N){
    int cont=0,i;
    for(i=0;i<N;i++){
        if(A[i]==x) cont++;
    }
    return cont;
}

/*Función que devuelve el elemento que menos veces aparece en el vector A de N elementos
(si hay más de uno, devuelve el que aparece primero en el vector -de izq a der-)*/
int elementoQueMenosAparece(int A[], int N){
    int i,elemMenosAparece=A[0];
    int nroAp,nroMinApariciones=nroApariciones(A[0],A,N);
    for(i=1;i<N;i++){
        nroAp = nroApariciones(A[i],A,N);
        if(nroAp<nroMinApariciones){
            elemMenosAparece = A[i];
            nroMinApariciones = nroAp;
        }
    }
    return elemMenosAparece;
}

/*Función que devuelve true si los elementos del vector A de N elementos están en orden no-descendente
(de izq a der); y false en caso contrario*/
bool estaOrdenadoNoDesc(int A[], int N){
    int i;
    for(i=0;i<N-1;i++){
        if(A[i]>A[i+1]) return false;
    }
    return true;
}

/*NO MODIFICAR EL MAIN!!!!!!!!!*/
int main(){
    int opcion,N,i,x;
    cin>>opcion;
    cin>>N;
    int A[N];
    if(opcion==1) cin>>x;
    for(i=0;i<N;i++) cin>>A[i];
    if(opcion==1) cout<<nroApariciones(x,A,N)<<endl;
    if(opcion==2) cout<<elementoQueMenosAparece(A,N)<<endl;
    if(opcion==3) cout<<estaOrdenadoNoDesc(A,N)<<endl;
    return 0;
}
