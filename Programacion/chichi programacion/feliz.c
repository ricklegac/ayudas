#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 100



    int cifras(int n,int i){
        i=1;
    while(n/10>0){
        n=n/10;
        i++;

    }
    return(i);
    }
    void digito(int v[],int n,int digitos,int c ){

       for(c=0;c<digitos;c++){
        v[c]=n%10;
        n=n/10;
       }

    }


       int main(Void){
       int n;
       int i=1;
       scanf("%d",&n);
       int v[max];
       int digitos=cifras(n,i);
    printf("Tiene %d cifras\n",digitos);
    int c;
   digito(v,n,digitos,c);
   for(c=0;c<digitos;c++){
    printf("%d\n",v[c]);
}
}
