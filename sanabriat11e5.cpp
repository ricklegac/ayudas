#include<stdio.h>
struct alumnos{
	int id;
	char nombre[20],apellido[20];
	int puntaje;
};
typedef struct alumnos alumno;
int main(){
	alumno a[72];
	FILE *fp=fopen("PARCIAL.DAT","w+");
	return 0;
}
