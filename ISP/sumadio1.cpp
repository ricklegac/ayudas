#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
mi archivo es asi: 

HHMMSS-DDMMAAAA-CI-'E' O 'S'
UTILIZO " - " PARA MEJOR MANEJO DE LOS DATOS

*/
void copiar(char aux[],int i);
void vaciar(char temp[]);

typedef struct{
	char *hora;
//	char *fecha;
	int ci;
//	char *tipo;
}empleados;
//void CIShellSort(empleados empl,int cont);
empleados *empl;//memoria dinamica porque no se cuantos empleados
//tengo
int main(){
	int i,j;
	char aux[50];
	char aux1;
	FILE *f;
	int cont=0;
	f=fopen("data.txt","r");
	if(f==NULL){
		printf("\nno se encontro archivo\n");
		exit(1);
	}
	while(!feof(f)){//para saber cuantos elementos tendre!
		fgets(aux,50,f);
		cont++;//cuentan los saltos de linea
	}
	rewind(f);//volvemos al inicio porque usamos para recorrer el file
	empl=(empleados*)malloc(cont*sizeof(empleados));
	if(empl=NULL){
		printf("\n No se ha podido reservar memoria \n");
		exit(1);
	}
	for(i=0;!feof(f);i++){//un vector de cada entrada y salida
		vaciar(aux);
		aux1='0';//inicializamos el aux1
		for(j=0;aux1!='-';j++){//recorre caracter por caracter
			aux1= fgetc(f);
			if(aux1!='-'){
				aux[j]=aux1;
			}
		}
		copiar(aux,i);
		fgets(aux,4,f);//los salto de linea y vacio de texto
		empl[i].ci=atoi(aux);
		printf("hora: %s ci: %d\n",empl[i].hora,empl[i].ci);
	}
	//CIShellSort(empl.ci,cont);
	return 0;
}
void vaciar(char aux[]){
	int i;
	for(i=0;i<50;i++){
		aux[i]='\0';
	}
	
}
void copiar(char aux[],int i){

	//no cuenta al final por eso mas 1
	int n;
	n=strlen(aux)+1;
	empl[i].hora=(char*)malloc(n*sizeof(char));
	if(empl[i].hora==NULL){
		printf("no se ha podido reservar memoria");
		exit(1);
	}
	strcpy(empl[i].hora,aux);
	
}/*
void CIShellSort(int *empl, int n) {
  int i,x,y,tmp;

  for(i = 1; i < n; i = i*3+1) {} 

    while (i > 0) {
      for(x = i; x < n; x++) {
        y = x;
        temp = empl[x];
        while (y >= i && empl[y - i] > tmp) {
          empl[y] = empl[y - i];
          y = y - i;
        }
        empl[y] = tmp;
      }
      i = i / 2;
    }
}*/
