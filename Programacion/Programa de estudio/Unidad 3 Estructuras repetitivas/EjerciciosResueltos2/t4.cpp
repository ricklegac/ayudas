/*Dados dos números enteros, determinar si los mismos son amigos.
*Dos números amigos son dos números enteros positivos a y b tales 
*que la suma de los divisores propios de uno es igual al otro número 
*y viceversa, es decir s=b y s=a, donde s es igual a la suma de los
/ divisores de n, sin incluir a n. Un ejemplo es el par de naturales 220 y 284
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
	int n1,n2,N;
    int sum1=1,sum2=1;
    printf("\n\n\tingrese el primers numero\n");
    scanf("%d",&n1);
    printf("\n\n\tingrese el segundo numero\n");
    scanf("%d",&n2);
    for(i=2;i<n1;i++){
	    if(n1 % i==0){
    		sum1=sum1+i;
        }
    }
    for(i=2;i<n2;i++){
    	if(n2 % i==0){
        	sum2=sum2+i;
        }
    }
    if((sum1==n2)&&(sum2==n1)){
    	printf("\n\n\tlos numeros %d y %d Si son numeros amigos",n1,n2);
    }else{
   		printf("\n\n\tlos numeros %d y %d No son numeros amigos",n1,n2);
    }
  return 0;

}
