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
	printf("decena: %d\n", decena );
	printf("unidad: %d\n", unidad );
	char cad_num[30]="";
	switch (decena){
		case 1:
			strcat(cad_num, "dieci");
			break;
		case 2:
			strcat(cad_num, "veinti");
			break;
		case 3:
			strcat(cad_num, "treinta y");
			break;
		case 4:
			strcat(cad_num, "cuarenta y");
			break;
	}
	printf("%s", cad_num);
	return 0;
}