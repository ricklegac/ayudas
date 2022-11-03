/*
jose daniel delgado 
3942900 
ingenieria en electricidad
*/

#include<stdio.h>
#include<math.h>
/*
int digito(int *p) recibe como parámetro un puntero que es el numero ingresado y retorna la cantidad de dígitos que posee el número
*/
int digito(int *p){
	int contador = (log10(*p) + 1);
	return contador;
}
void CargarOriginal(int *v_org, int *n, int *log){
	// printf("%d", *n);
	// printf("%d",*log);
	int count = 0;    
    int numero = *n;
    // printf("%d\n",numero);
    while (numero != 0){
       v_org[count] = numero % 10;
       numero /= 10;
       count++;
    }
    int i,temp;
    for( i = 0; i<*log/2; i++){
        temp = v_org[i];
		v_org[i] = v_org[*log-i-1];
        v_org[*log-i-1] = temp;
    }
    

}
/*
void CargarInvertido(int *p_org, int *p_inv, int *log) recibe como parámetro un puntero al vector(original), 
un puntero al vector (invertido) y un puntero a la cantidad de dígitos, esta función se encarga de cargar de 
forma invertida al vector(investido) del vector (original)
*/
void CargarInvertido(int *p_org, int *p_inv, int *log){
	int i,temp;
	for (i=0;i<*log;i++){
		p_inv[i] = p_org[i];
	}
	for( i = 0; i<*log/2; i++){
        temp = p_inv[i];
		p_inv[i] = p_inv[*log-i-1];
        p_inv[*log-i-1] = temp;
    }


}
/*
void sumar(int *p_org, int *p_inv, int *p_suma, int *log) recibe como parámetro un puntero al vector(original),
un puntero al vector(invertido), un puntero al vector(suma) y un puntero a la cantidad de dígitos, esta función
se encarga de realizar la suma entre el vector(original) y el vector(invertido) y carga al vector(suma),
posición a posición de los vectores.
*/
void sumar(int *p_org, int *p_inv, int *p_suma, int *log){
    int i = *log - 1, j = *log - 1, k = *log - 1;
    int carry = 0, s = 0;
    while (j >= 0) {
        s = p_org[i] + p_inv[j] + carry;
        p_suma[k] = (s % 10);
        carry = s / 10;
        k--;
        i--;
        j--;
    }
    while (i >= 0) {
        s = p_org[i] + carry;
        p_suma[k] = (s % 10);
        carry = s / 10;
        i--;
        k--;
    }
 
    int ans = 0;
    if (carry)
        ans = 10;
    for ( i = 0; i <= *log - 1; i++) {
        ans += p_suma[i];
        ans *= 10;
    }
    printf(" %d ", ans/10);
}
/*
void imprimirvector (int *p, int *log) recibe como parámetro un 
puntero al vector y un puntero a la cantidad de dígitos, esta función 
se encarga de imprimir los elementos de los vectores.

*/
void imprimirvector (int *p, int *log){
	int i;
	for(i=0;i<*log;i++){
 		printf("%d ",p[i]);
 	}
}
int main(){
	printf("ingrese el valor de n: ");
	int n;
	scanf("%d",&n);
	int cantidad = digito(&n);
	int v_org[cantidad], v_inv[cantidad], v_suma[cantidad+1];
	CargarOriginal(v_org,&n, &cantidad);
	int i;
	imprimirvector(v_org,&cantidad);
    CargarInvertido(v_org, v_inv, &cantidad);
    printf("\n");	
    imprimirvector(v_inv,&cantidad);
    printf("\n");
    sumar(v_org,v_inv,v_suma,&cantidad);
    //imprimirvector(v_suma,&cantidad+1);
	//printf("%d",digito(&n));
	return 0;
}