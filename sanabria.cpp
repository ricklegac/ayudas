#include<stdio.h>
#include<stdlib.h>
//defina la estructura fecha con los campos int d, m y a
struct fecha{
	int d;
	int m;
	int a;
};
/*complete la funcion bisiesto que recibe el año y devuelve 1
si el año es bisiesto, 0 si no lo es*/
int bisiesto(int a){
	int v=0;
    if ( a % 4 == 0 && a % 100 != 0 || a % 400 == 0 ) v=1;
    else v=0;
	return v;
}
/*complete la funcion que recibe el mes y año, y devuelve
la cantidad de dias del mes de ese año tenga en cuenta
que el mes de febrero puede ser bisiesto*/
int cantidaddiasmes(int m, int a){
	int cd;
    int mes[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(m==2){
        if(bisiesto(a)==1){
            cd=mes[1]+1;
        }else{
            cd=mes[1];
        }
    }else{
        cd=mes[m-1];
    }
	
	return cd;
}
/*calcule y retorne la fecha siguiente en esta funcion, f es la fecha
ingresada por teclado*/
fecha fechasiguiente(fecha f){
    int diaMax = cantidaddiasmes(f.m, f.a);
	if (f.d<diaMax){
		f.d=f.d+1;
		return f;
	}else if(f.d==diaMax){
		if(f.m==12){
			f.d=1;
			f.m=1;
			f.a=f.a+1;
			return f;
		}else{
			f.m=f.m+1;
			f.d=1;
			return f;
		}
	}
}
// imprima en formato requerido
void impresion (fecha f){
	if(f.d<10){
		printf("0%d/",f.d);
	}else{
		printf("%d/",f.d);
	}
	if(f.m<10){
		printf("0%d/",f.m);
	}else{
		printf("%d/",f.m);
	}
	printf("%d",f.a);
	
}
//complete el main solo en las partes solicitadas, no modifique en otra parte
main(){
  struct fecha fechainicio, fechanueva;
  printf("Ingrese el dia, mes y anho de la fecha:\n");
  //lea el dia, el mes y el año de una fecha
  scanf("%d",&fechainicio.d);
  scanf("%d",&fechainicio.m);
  scanf("%d",&fechainicio.a);
  fechanueva=fechasiguiente(fechainicio);
  impresion(fechanueva);
  printf("\n");
  // imprimir la fecha en el formato dd/mm/aaaa, ejemplo: 09/05/2021
  system("pause");
}
