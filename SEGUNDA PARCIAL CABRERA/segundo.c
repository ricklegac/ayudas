#include<stdio.h>
int digito(int *p);
void imprimirvector (int *p, int *log);
void CargarOriginal(int *v_org, int *n, int *log);
void CargarInvertido(int *p_org, int *p_inv, int *log);
void sumar(int *p_org, int *p_inv, int *p_suma, int *log);
int digito(int *p){
	int digi = 0, number = *p;
	while(number>0){
		digi++;
		number/=10;
	}
	return digi;
}
void CargarOriginal(int *v_org, int *n, int *log){
	int number = *n, cont = 0;    
    while (number != 0){
       v_org[cont] = number % 10;
       number /= 10;
       cont++;
    }
    int i,temp;
    for( i = 0; i<*log/2; i++){
        temp = v_org[i];
		v_org[i] = v_org[*log-i-1];
        v_org[*log-i-1] = temp;
    }
}
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
void sumar(int *p_org, int *p_inv, int *p_suma, int *log){
    int i = *log - 1, j = *log - 1, x = *log - 1;
    int carry = 0, s = 0;
    while (j >= 0) {
        s = p_org[i] + p_inv[j] + carry;
        p_suma[x] = (s % 10);
        carry = s / 10;
        x--;
        i--;
        j--;
    }
    while (i >= 0) {
        s = p_org[i] + carry;
        p_suma[x] = (s % 10);
        carry = s / 10;
        i--;
        x--;
    }
 
    int result = 0;
    if (carry)
        result = 10;
    for ( i = 0; i <= *log - 1; i++) {
        result += p_suma[i];
        result *= 10;
    }
    printf("%d",result/10);
}
void imprimirvector (int *p, int *log){
	int i;
	for(i=0;i<*log;i++){
 		printf("%d",p[i]);
 	}
}
int main(){
	/*leemos n*/
	int n,i;
	printf("***** INGRESE N: ****** ");
	scanf("%d",&n);
	int dimension = digito(&n);
	int v_org[dimension], v_inv[dimension], v_suma[dimension+1];
	CargarOriginal(v_org,&n, &dimension);
	imprimirvector(v_org,&dimension);
    CargarInvertido(v_org, v_inv, &dimension);
    printf("\n");	
    imprimirvector(v_inv,&dimension);
    printf("\n");
    sumar(v_org,v_inv,v_suma,&dimension);
	return 0;
}