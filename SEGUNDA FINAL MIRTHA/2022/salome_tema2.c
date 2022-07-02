#include<stdio.h> 
#include<math.h>
int problema_primos(int numero);
int primos(int n);
int main(){
    int m,n;
    printf("ingrese M y N\n");
    scanf("%d",&m);
    scanf("%d",&n);
    /*declaracion de variables y bucle para cumplir con lo que dice wel enunciado*/
    if( 4 >= m || m>=n){
        printf("ingrese una condicion que satisfaga 4<= M <= N");
        scanf("%d",&m);
        scanf("%d",&n);
    }
    int valor=0;
    int i;
    float cont =0;
    /*inicio del problmea*/
     printf("Nro analizado\tFactores\n");
    for ( i = m ; i<=n; i++){
     
        if(primos(i)){
            cont++;
        }
    }
    //printf("%d",primos(10));
    float total = n-m+1;
   // printf("%d",total);
    //printf("%d",cont);
    
    printf("Porcentaje que cumplen la condicion: %.2f\n", (cont/total)*100);  
    //printf("%d",cont);
    return 0;
}
/*int problema_primos(int numero){
    int i = 2;
    int i_factores= 0;
    while(i<=numero){
        if((numero%i)==0){    //vemos si es divisible
            numero=numero/i;  //dividimos el numero inicial para volver a ciclar 
            i_factores++;     //contamos la cantidad de numeros que encuentra
    }     
    i++;  
    }
    if (i_factores-1 == 2) return 1;
    else if( i_factores-1 > 2) return 0;
}*/
int primos(int n)
{
   
    printf("%d \t\t",n);
    int count=0;
    while (n % 2 == 0)
    {
        printf("2 ");
        count ++;
        n = n/2;
    }
 
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            count++;
            printf( "%d ", i);
            n = n/i;
        }
    }
 
    
    if (n > 2){
         printf(" %d ",n);
         count ++;
    }
       
    
    printf("\n");
    //printf("\n contador: %d \n",count);
    if (count == 2) return 1;
    else return 0;
    //return count;
}