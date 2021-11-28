#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include <math.h>
 using namespace std;
 void leer_datos(struct Tirador datos);
 struct Puntaje{
 	char denominacion[7];
 	unsigned short puntaje;
 };
 void menu(){
 	cout<< "\n--.--DISPAROS AL BLANCO--.-- \n";
	cout<< "1. Leer datos de Tirador\n";
	cout<< "2. Salir\n"; 
	cout<< "Opcion :";
 }
 struct Punto{
 	unsigned short a,b;
 };
 
 struct Tirador{
 	char nombre[20];
 	struct Punto disparo[3];
 };
 
int main () {
	int opcion=0;
	struct Tirador datos;

   while(opcion != 2){	
   	menu();
	cin >> opcion;
	   switch(opcion){
	   		case 1: leer_datos(datos);
	   		break;
	   		case 2:;
	   }
	  
	  
   }
   
return 0;
}

void leer_datos(struct Tirador datos){
	fflush(stdin);
	int i,R;
	cout << "\nINGRESE NOMBRE Y APELLIDO: ";
	gets(datos.nombre);
	srand(time(NULL));
	for(i=0;i<3;i++){
		datos.disparo[i].a = (rand()%20)+1;
		datos.disparo[i].b = (rand()%20)+1;
		R=sqrt((datos.disparo[i].a)^2+(datos.disparo[i].b)^2);
		
	}
	for(i=0;i<3;i++){
		cout<<datos.disparo[i].a<<",";	
		cout<<datos.disparo[i].b<<endl;	
	}
	if(R>=0 && R<2) cout<<"Mejor tiro: CENTRO puntaje 10"<<endl;
	if(R>=2 && R<4)	cout<<"Mejor tiro: MEDIA puntaje 8"<<endl;
	if(R>=4 && R<6)	cout<<"Mejor tiro: EXTERNA puntaje 5"<<endl;
	if(R>=6 && R<=10)	cout<<"Mejor tiro: BORDE puntaje 1"<<endl;
	if(R>10)	cout<<"Mejor tiro: FUERA puntaje 0"<<endl;	
	
}
	
	
		


