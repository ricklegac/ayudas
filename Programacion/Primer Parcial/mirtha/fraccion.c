#include<stdio.h>
#include<math.h>
int maximo_comun_divisor(int A, int B);
int control(int *A, int *B);
int main(){
	int A,B;
	printf("ingrese A y B:\n");
	scanf("%d%d",&A,&B);
	control(&A,&B);
    int dividir,c=0,i,parte_entera,residuo;
    if(A<B){
        dividir=maximo_comun_divisor(A,B);
        printf("Dados los numeros A=%d y B=%d se deberia imprimir: %d/%d",A,B,A/dividir,B/dividir);		
    }
    if(A>B && B!=1){
        parte_entera=floor(A/B);
        residuo=A%B;
        dividir=maximo_comun_divisor(residuo,B);
        printf("Dados los numeros A=%d y B=%d se deberia imprimir:  %d %d/%d",A,B,parte_entera,residuo/dividir,B/dividir);	
    }
    if(B==1){
        printf("Dados los numeros A=%d y B=%d se deberia imprimir: %d",A,B,A);
    }
    if(A==B){
        printf("Dados los numeros A=%d y B=%d se deberia imprimir: 1",A,B);
    }
    
	return 0;
}
int control(int *A, int *B){
	//printf("%d %d", *A,*B);
    while(*B<0){
        printf("denominador igual a cero vuelva a ingresar\n");
        scanf("%d",B);
    }
    while(*B==0 && *A==0){
        printf("fraccion indeterminada vuelva a ingresar: \n");
        scanf("%d%d",A,B);
    }
    return 1;
}

int maximo_comun_divisor(int A, int B) { //obtenemos el maximo comun divisor
    int temporal;
    while (B != 0) {
        temporal = B;
        B = A % B;
        A = temporal;
    }
    return A;
}
