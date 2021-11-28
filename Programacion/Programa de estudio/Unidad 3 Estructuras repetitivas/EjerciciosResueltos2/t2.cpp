/* Leer una serie de N números y encontrar los tres números más grandes, considerar que los números

pueden repetirse. */

#include<stdio.h>
#include<conio.h>
void mayores ( int*a,int tam);

int main(){
	int i,n=0;
	printf("\nDigite la cantidad de numeros a ingresar = ");
	scanf("%d",&n);
	int v[n];
	printf("\n Ingrese los numeros \n");
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	                }
	mayores(v,n);
	return 0;
}

void mayores ( int*a,int tam){
     int i,b,c,j,mayor;
     int v[i];
// ordenar los numeros
for (i=0; i <tam; i++) 
for (j=0; j <tam; j++) 
if ( *(a+i) < *(a+j) ) { 
b=*(a+i); 

*(a+i)=*(a+j); 

*(a+j)=b; 

} 

printf("\nLos tres numeros mas grandes de la series es  = ") ; //considerando que pueden repetirse

       for (i=0 ;i<tam ;i++){ 

       if(*(a+i)!=c ){           

       for (i=tam-3 ;i<tam ;i++){   

       	c=*(a+i);

       printf("\n%d",*(a+i)); 

	                     }}}

}
