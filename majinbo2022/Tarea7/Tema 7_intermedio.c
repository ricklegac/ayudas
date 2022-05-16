#include<stdio.h>
typedef struct municipalidad{
    int id_cliente;
    int ano;
    int deuda;
}clientes;
int main(){
    int id, a, d,i;
    FILE *fp = fopen("deudas.txt","r");
    clientes cliente[100];
    while(!feof(fp)){
        fscanf(fp,"%d\t%d\t%d\n",&id,&a,&d);
        cliente[id].id_cliente = id;
        cliente[id].deuda = d + cliente[id].deuda;
    }
    for(i=0;i<100;i++){
        if(cliente[i].deuda != 0){
            printf("%d\t%d\n",cliente[i].id_cliente, cliente[i].deuda);
        }
    }
    return 0;
}