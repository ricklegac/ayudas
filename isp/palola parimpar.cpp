#include<iostream>//LA FUNCION STANDART de input y output ESTA SIEMPRE USAS CUANDO VAS A PEDIR VARIABLES E IMPRIMIR ALGO, OSEA SIEMPRE. XD
#include<stdlib.h>//ESTA FUNCION ES LA QUE TIENE EL system("....") pause y cls
#include<math.h>//ESTA LIBRERIA CONTIENE EL pow(x,n)= x^n;
using namespace std;
int n;//ESTO ES UNA VARIABLE GLOBAL, QUE PODES USAR EN CUALQUIER FUNCION DENTRO DEL PROGRAMA 
void cubo();//DECLARAR FUNCIONES SIEMPRE, ESTO SE LLAMA PROTOTIPADO, ES COMO DECLARAR UNA VARIABLE PERO 
void pi();//ESTAS DECLARANDO FUNCIONES.... 
int opc();// DECLARAR FUNCIONES SE LLAMA PROTOTIPADO PALOLA :)
int main(){
	do{//HICE DENTRO DE UN CICLO do...while() PARA QUE CUANDO INGRESE 3 SALGA DEL CICLO, 
	//PORQUE PUEDE HACER TANTAS VECES COMO PIDE EL USUARIO PALOLA
		switch(opc()){//OPC ES UNA FUNCION QUE IMPRIME EL MENU Y PIDE LA OPCION
			case 1:
				cubo();//ESTE ES UNA FUNCION PARA ELEVAR AL CUBO 
				break;
			case 2:
				pi();//FUNCION PARA SABER SI ES IMPAR O PAR
				break;//ESTE ES PARA NO USAR {}
			case 3:
				cout<<"Saliendo..."<<endl;//SI ES 3 SALE
				break;//ESTE ES PARA NO USAR {}
			default://EN CASO DE QUE NO SEA NINGUN VALOR 1 2 O 3 IMPRIME LO QUE ESTA DENTRO DE default....
				printf("Opcion invalida...\n");
				break;//ESTE ES PARA NO USAR {}
		}
		system("pause");//system("Pause") LO QUE HACE ES PAUSAR, Y PONER UN MENSAJE DE QUE EL PROGRAMA PARO, Y PARA CONTINUAR DESPUES
		system("cls");//ESTE ES BORRADO DE PANTALLA, BORRA TODO LO QUE VES PARA EMPEZAR DE NUEVO
	}while(opc()!=3);
	return 0;
}
int opc(){//FUNCION QUE RETORNA UN int (QUE ES TU OPCION) E IMPRIME UN MENSAJE
	int x;//A ESTO SE LO LLAMA VARIABLE LOCAL, QUE ES LO CONTRARIO DE VARIABLE GLOBAR
	//LA VARIABLE LOCAL SOLO SIRVE DENTRO DE TU FUNCION
	//EN ESTE CASO LA FUNCION OPC, 
	// LA VARIABLE GLOBAL (n) PODEMOS USAR EN TODAS LAS FUNCIONES PALOLA
	printf("------------------------------------------\n");
	cout<<"Ingrese una opcion: \n1.Cubo de un numero\n2.Numero par o impar\n3.Salir "<<endl;
	printf("------------------------------------------\n");
	cin>>x;
	return x;
}
void cubo(){//FUNCION QUE NO RETORNA NADA PERO TE IMPRIME EL CUBO DEL NUMERO;
	cout<<"Ingrese el numero que desea elevar al cubo"<<endl;
	cin>>n;
	cout<<"El numero al cubro: "<<pow(n,3)<<"\n";
}
void pi(){//FUNCION QUE NO RETORNA NADA PERO TE IMPRIME SI ES PAR O IMPAR EL NUMERO QUE PEDIS
	cout<<"Ingrese el numero que desea saber si es par o impar"<<endl;
	cin>>n;
	if(n%2==0) printf("El numero %d es par\n",n);//ACA PALOLA VEMOS SI ES IMPAR PRINTF ES LA MISMA COSA QUE USAR cout Y %d SE USA PARA IMPRIMIR EN SU LUGAR
	//UNA VARIABLE
	else printf("El numero %d es impar\n",n);//ACA LA MISMA COSA QUE EL ANTERIOR
}

//PODES TAMBIEN PEDIR EL NUMERO N DENTRO DE TU main, PERO A MI ME PARECIO MAS LINDO PEDIR DENTRO DE LA FUNCION 
//LOS QUE VOS ME MOSTRASTE TAMBIEN ESTA BIENNNNN!!! EL TUYO EL FALTO PONER NOMAS UN CICLO
