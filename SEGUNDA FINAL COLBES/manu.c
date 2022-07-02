#include<stdio.h>
/*ENCABEZADOS*/
int error();
int derecha(int movimiento);
int izquierda(int movimiento);
int main(){
    /*DECLARACION DE VARIABLES*/
    int i, num,valor=1,cant=0,j;
    int pos_i = 0;
    int pos_j = 0;
    int matriz[35][35]={0};
    FILE *fp = fopen("comandos.txt","r+");
    /*VERIFICACION DE EXISTENCIA DE ARCHIVO*/
    if(fp==NULL) error();

    int movimiento; //1 izquierda 2 derecha 3 abajo 4 arriba  
    //inicialmente se mueve a la derechan
    int  anterior = 2;
    while(!feof(fp)){
        fscanf(fp,"%d",&num);
        //printf(" %d ",num);
        if(num==1) valor=1; //pluma arriba 
        else if(num==2) valor = 0; //pluma abajo 
        else if(num==3){ //movimiento hacia la derecha 
            movimiento = derecha(movimiento);
        }
        else if(num==4){ //movimiento hacia la izquierda 
            movimiento = izquierda(movimiento);
        }
        else if(num==5){
            ///printf("%d ",num);
            fscanf(fp, "%d" ,&cant);
            //printf(" %d\n",cant);
            int x = pos_i;
            int y = pos_j;
            /*MOVIMIENTO SEGUN LO QUE CORRESPONDE IR HACIA ADELANTE*/
            if (movimiento == 1){
                for(i=0;i<cant;i++){
                    matriz[pos_i][pos_j]=valor;
                    pos_i --;
                }
            }
            if (movimiento == 2){
                for(i=0;i<cant;i++){
                    matriz[pos_i][pos_j]=valor;
                    pos_i ++;
                }
            }
            if (movimiento == 3){
                for(i=0;i<cant;i++){
                    matriz[pos_i][pos_j]=valor;
                    pos_j --;
                }
            }
            if (movimiento == 4){
                for(i=0;i<cant;i++){
                    matriz[pos_i][pos_j]=valor;
                    pos_j++;
                }
            }
        }
        else if(num==6){
            for(i=0;i<35;i++){
                for(j=0;j<35;j++){
                    //printf("%d",matriz[i][j]);
                }
            printf("\n");    
            }
        }
        else printf("\nfin lectura");
    }
    return 0;
}
int error(){
    printf("archivo no encontrado o no se pudo abrir \n");
    return 1;
}
int derecha(int movimiento){
    if (movimiento == 2){
        movimiento = 3; // me tengo que mover hacia la abajo si anteriormente me dirigia hacia derecha
    }
    else if (movimiento == 1){
        movimiento = 4; // me tengo que mover hacia arriba si anteriormente me dirigia hacia la izquierda 
    }
    else if(movimiento == 3){
        movimiento = 2; // me tengo que mover hacia la derecha si anteriormente me dirigia hacia abajo
    }
    else if (movimiento ==4 ){
        movimiento = 2; //me tengo que mover hacia la derecha si anteriormente me dirigia hacia arriba
    }
    return movimiento;
}
int izquierda(int movimiento){
    if(movimiento ==2 ){
        movimiento = 4; //me tengo que mover hacia la arriba si anteriormente me dirigia hacia derecha
    }
    else if(movimiento == 4){
        movimiento = 1; // me tengo que mover hacia la izquierda si anteriormente me dirigia hacia arriba
    }   
    else if( movimiento == 1){
        movimiento = 3; //me tengo que mover hacia la abajo si anteriormente me dirigia hacia izquierda 
    }
    else if(movimiento == 3 ){
        movimiento = 1; //me tengo que mover hacia la izquierda si anteriormente me dirigia hacia abajo
    }

    return movimiento;
}