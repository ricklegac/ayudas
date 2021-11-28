#include<stdio.h>
#include<math.h>
int potencia (int num){//verificamos la potencia recorriendo el numero
    int i=1,pot=0;
    while(pot<=num){
        pot=pow(3,i);
        if(pot == num){//si es potencia retornara 
          return 1;
        }
        i++;
    }
return 0;
}
int main(){
    int num,mult=3,
	int i=1,pot=0,cont=0;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    if(potencia(num)){//si es potencia, entonces imprimimos como debe de ser
        printf("N = %d = ",num);
        while(mult<=num){ //nada especifico, jugamos con la impresion para que sea similar a 
        //lo pedido por el ejercicio.
            printf("3");
            cont++;
            if(mult != num){
                printf("x");
            }
            mult=mult*3;
        }
        printf(" 3^%d",cont);
    }else{//si no es asi, mensaje simple
        printf("%d no es base 3",num);
    }

return 0;
}

