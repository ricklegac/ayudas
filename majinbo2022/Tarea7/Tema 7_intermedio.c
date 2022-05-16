#include<stdio.h>
typedef struct municipalidad{
    int id_cliente;
    int ano;
    int deuda;
}clientes;
int main(){
    int id, a, d,i;
    FILE *fp = fopen("deudas.txt","r");
    FILE *fw = fopen("salida.txt","w+");
    if(fp== NULL){
        printf("\nNO SE PUDO ABRIR EL ARCHIVO `deudas.txt`\n");
        return 1;
    }
    
    clientes cliente[100]={0};
    while(!feof(fp)){
        fscanf(fp,"%d\t%d\t%d\n",&id,&a,&d);
        cliente[id].id_cliente = id;
        cliente[id].deuda = d + cliente[id].deuda;
        //printf("%d %d %d\n", cliente[id].id_cliente,a,cliente[id].deuda);
    }
    fprintf(fw,"id_cliente\tdeuda\n");
    for(i=0;i<100;i++){
        if(cliente[i].deuda != 0){
            fprintf(fw,"%d\t\t%d\n",cliente[i].id_cliente, cliente[i].deuda);
        }
    }
    printf("------------------------------------------------------------------\nVER ARCHIVO DE SALIDA\n");
    return 0;
}