#include <stdio.h>

int primos(int numero);
int main(){
    int m,n;
    int i ;
    printf("ingrese M y N\n");
    scanf("%d",&m);
    scanf("%d",&n);
    
    if( 4 >= m || m>=n){
        printf("vuelve a ingresar \n");
        scanf("%d",&m);
        scanf("%d",&n);
    }
    float contador =0;
    //recorremos desde el menor hasta el mayor incluyendo (n y m)
    printf("Nro analizado\tFactores\n");
    for ( i = m ; i<=n; i++){
        if(primos(i)==2){
            contador++;
        }
    }
    printf("Porcentaje que cumple con el problema: %f" , (contador/(n-m+1))*100);

       

    return 0;
}
int primos(int numero){
    int factores[20];     //Arreglo para almacenar factores de "numero".
    int i_factores=0;   
    int i=2;       
    int guardo = numero;
  while(i<=numero)
  {
    if((numero%i)==0){  //a%b=0, implica que b es factor de a.
    
    factores[i_factores]=i;  //Añadimos el factor al arreglo.
    numero=numero/i;         //Procesamos la variable "numero".
    i_factores++;            //Incrementamos indice de arreglo para el siguiente numero.
   
    }     
  i++;  //Incrementamos indice.
  }

/* Rutina para imprimir */
i=0;   
  if(i_factores == 2){
    printf("%d ",guardo);
    printf("\t\t");
    while(i<i_factores){
        printf(" %d ", factores[i]);
        i++;
  }
  printf("\n");
  }
  
  //printf("%d\n",i_factores);
  return (i_factores);
}
