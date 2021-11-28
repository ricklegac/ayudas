
#include <stdio.h>
#include <stdlib.h>


void ordenar();
void imprimir();
void imprimirMultiplos();

int v[251];

int main(){
 
    int i,cont;       
    cont=0;
    for(i=0;i<251;i++){
          v[i]=0;             
    }
    for(i=0;i<251;i++){
        printf("\n\nINGRESE EL NUMERO: ");
        scanf("%d",&v[i]);
        if(v[i]==-1){
             break;             
        } 
                   
    }
    ordenar();
    //imprimir();
    imprimirMultiplos();
    
    
    
    system("PAUSE");
    return 0;
}

void ordenar(){
     int i,j,aux;
     
      for(i=0;i<251;i++){
		for(j=0;j<251;j++){
			if(v[j]>v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}

}

void imprimir(){
     int i;
     
     for(i=0;i<252;i++){
		if(i%20!=0){
           printf("%d ",v[i]);
        }else{
              printf("%d\n",v[i]);
        }
	 }
}
void imprimirMultiplos(){
    int i,j,num;
    printf("\n\nIMPRIMIR\n\n");
    for(i=1;i<252;i++){
       
       if(v[i]!=0){
              num=v[i];
              printf("\t\t");
              for(j=i;j<252;j++){
                 if(v[j]%num==0){
                    printf("%d,",v[j]); 
                    v[j]=0;            
                 }
                                 
              }
              printf("\n");                 
              ordenar();
              i=0;
       }
       
    } 
     
}
