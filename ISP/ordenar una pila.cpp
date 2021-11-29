#include<iostream>  //use el de c++ porque mi printf me
//imprimia basura, y use el cout 
using namespace std;
struct nodo{
	int dato;
	nodo *sig;
	
} *ptr;
void insertar_apila(nodo *p); //por cabeza
void recorrer(nodo *c);
void insertar(nodo *p);//por cola
void eliminar(int dato);
void ordenar();

int main(){
	//inicializamos los valores
	nodo *p = new nodo;
	p->dato=3;
	
	nodo *j = new nodo;
	j->dato =4;
	
	nodo *k = new nodo;
	k->dato=1;
	
	nodo *h = new nodo;
	h->dato=8;
	
	nodo *l = new nodo;
	l->dato=5;
	
	
	insertar(p);
	insertar(j);
	insertar(k);
	insertar(h);
	
	recorrer(ptr);
	ordenar();
	printf("------PILA ORDENADA CON BURBUJA------\n");
	recorrer(ptr);
	return 0;
}

void insertar_apila(nodo *p){
	p->sig=ptr;
	ptr=p;
}
void recorrer(nodo *c){
	nodo *k =c;
	while(k!=NULL){
		cout<<k->dato<<endl;
		k=k->sig;
	}
}
void insertar(nodo *p){
	if(ptr !=NULL){
		nodo *k = ptr;
		while (k->sig!=NULL){
			k=k->sig;
		}
		k->sig=p;
		p->sig=NULL;
	}else{
		insertar_apila(p);
	}
}
/*void eliminar(int dato){
	nodo *p=ptr;
	if(p->dato==dato){
		ptr = ptr ->sig;
		delete(p); // vaciamos de la memoria, se puede usar free tambien
		
	}else{
		
	}
}*/
void ordenar(){//burbuja mejorada
	nodo *p = ptr;
	while(p!= NULL){
		nodo *j = p->sig;
		while(j!=NULL){
			if(p->dato > j->dato){
				int aux = j->dato;
				j->dato = p->dato;
				p->dato = aux;
			}
			j=j->sig;
			
		}
		p=p->sig;
	}
}
