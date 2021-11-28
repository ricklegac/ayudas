#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void siguientestiradas(int tirada);
int main(){
	int dado1,dado2,tirada;
	srand (time(NULL));
	dado1=1+ rand() % 7;
	dado2=1+ rand() % 7;
	tirada=dado1+dado2;
	printf("tiros= %d + %d = %d\n",dado1,dado2,dado1+dado2);
	if(tirada==7 || tirada==11){
		printf("\nSoy el ganador");
	}else if(tirada==2 || tirada==3 || tirada==12){
		printf("\nLa casa gana");
	}
	if(tirada>3 && tirada<11 && tirada!=7){
		siguientestiradas(tirada);
	}
	return 0;
}
void siguientestiradas(int tirada){
	int dado1,dado2;

	int tiradaN=tirada;
	int bandera=0;
	dado1=1+ rand() % 7;
		dado2=1+ rand() % 7;
		tiradaN=dado1+dado2;
		printf("tiros= %d + %d = %d\n",dado1,dado2,dado1+dado2);
		if(tiradaN==tirada){
			printf("\nSoy el ganador");
		}else{
			while(tiradaN!=tirada && bandera==0){
				dado1=1+ rand() % 7;
				dado2=1+ rand() % 7;
				tiradaN=dado1+dado2;
				printf("tiros= %d + %d = %d\n",dado1,dado2,dado1+dado2);
				if(tiradaN==7){
					bandera=1;
				}
			}
			if(bandera==1){
				printf("\nLa casa gana");
			}else{
				printf("\nSoy el ganador");
			}
		}
}
