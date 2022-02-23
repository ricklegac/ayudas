#include<stdio.h>
#include<string.h>
int main(){
	printf("ingrese un numero de dos digitos: ");
	int n;
	scanf("%d",&n);
	while(n<10 || n>99){
		printf("numero no valido, vuelva a ingresar: ");
		scanf("%d",&n);
	}
	int decena = n / 10;
	int unidad = n % 10;
	//printf("decena: %d\n", decena );
	//printf("unidad: %d\n", unidad );
	char cad_num[30]="";
	if(n ==10 || n==11 | n==12 || n==13 || n==14 || n==15){
		switch(n){
			case 10: 
				strcat(cad_num,"diez");
				break;
			case 11: 
				strcat(cad_num,"once");
				break;
			case 12: 
				strcat(cad_num,"doce");
				break;
			case 13: 
				strcat(cad_num,"trece");
				break;
			case 14: 
				strcat(cad_num,"catorce");
				break;
			case 15: 
				strcat(cad_num,"quince");
				break;

		}
	}else{
		switch (decena){
			case 1:
				strcat(cad_num, "dieci");
				break;
			case 2:
				strcat(cad_num, "veinti");
				break;
			case 3:
				strcat(cad_num, "treinta y ");
				break;
			case 4:
				strcat(cad_num, "cuarenta y ");
				break;
			case 5:
				strcat(cad_num, "cincuenta y ");
				break;
			case 6:
				strcat(cad_num, "sesenta y ");
				break;
			case 7:
				strcat(cad_num, "setenta y ");
				break;
			case 8:
				strcat(cad_num, "ochenta y ");
				break;
			case 9:
				strcat(cad_num, "noventa y ");
				break;
			}
		switch(unidad){
			case 1:
				strcat(cad_num, "uno");
				break;
			case 2:
				strcat(cad_num, "dos");
				break;
			case 3:
				strcat(cad_num, "tres");
				break;
			case 4:
				strcat(cad_num, "cuatro");
				break;
			case 5:
				strcat(cad_num, "cinco");
				break;
			case 6:
				strcat(cad_num, "seis");
				break;
			case 7:
				strcat(cad_num, "siete");
				break;
			case 8:
				strcat(cad_num, "ocho");
				break;
			case 9:
				strcat(cad_num, "nueve");
				break;
		}
	}
	printf("\n-------------------------------");
	printf("\n%s\n", cad_num);
	printf("-------------------------------\n");
	return 0;
}