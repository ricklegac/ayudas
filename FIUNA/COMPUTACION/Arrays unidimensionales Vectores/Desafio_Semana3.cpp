#include<iostream>
using namespace std;

/*Función que carga un vector de N elementos con valores introducidos por teclado*/
void cargarVector(int A[], int N){
    int i;
    for(i=0;i<N;i++) cin>>A[i];
}

/*Función que muestra en pantalla los elementos de un vector de N elementos*/
void imprimirVector(int A[], int N){
    int i;
    for(i=0;i<N;i++) cout<<A[i]<<" "; cout<<endl;
}

/*Función que indica con verdadero si un elemento x está en un vector de N elementos, y
falso en caso contrario.
El entero "salto" indica el incremento en el proceso de recorrer el vector*/
bool estaEnElVector(int A[], int N, int x, int salto){
    int i;
    for(i=0;i<N;i+=salto){
        if(x==A[i]) return true; //x está en el vector (en la posición i)
    }
    return false; //ya que no se encontró x en el proceso de búsqueda
}

/*Función que devuelve la cantidad de elementos distintos en un vector de N elementos*/
int contarElementosDistintos(int A[], int N){
    int elemDist=0; //contador con el nro de elementos distintos
    int B[N]; //vector que almacenará los elementos distintos de A (como máximo, hay N distintos)
    int i; //índice
    for(i=0;i<N;i++){
        if(!estaEnElVector(B,elemDist,A[i],1)) B[elemDist++] = A[i]; //si A[i] no estaba en B, lo agregamos
    }
    return elemDist;
}

/*Función para obtener la lista L2 según las especificaciones del problema*/
void obtenerListaL2(int L1[], int L2[], int N){
    int pos=0; //posicion de referencia en L2
    int i,j; //índices
    int nroAp; //numero de apariciones de un valor de L1
    for(i=0;i<N;i++){
        if(!estaEnElVector(L2,pos,L1[i],2)){
            L2[pos++] = L1[i]; //si L1[i] no estaba en L2, lo agregamos
            //Se cuenta el nro de apariciones de L1[i] en L1
            nroAp=1;
            for(j=i+1;j<N;j++) if(L1[j]==L1[i]) nroAp++;
            L2[pos++] = nroAp; //se coloca la cantidad de apariciones de L1[i]
        }
    }
}

int main(){
    int N; //Numero de elementos de L1
    cin>>N; //Cargamos N
    int L1[N]; //Vector que almacenará la lista de entrada
    cargarVector(L1,N); //Cargamos el vector
    int M = contarElementosDistintos(L1,N); //M debe contener la cantidad de números distintos en L1
    int L2[2*M]; //Vector que almacenará los números distintos con el nro de veces que aparecen en L1
    obtenerListaL2(L1,L2,N); //obtenemos la lista L2 según la descripción del problema
    imprimirVector(L2,2*M); //mostramos la lista L2
    return 0;
}
