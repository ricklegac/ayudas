#include<stdio.h> 
int main(){
    int Vn[13]={ 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    char *Vc[13]={"m","cm","d","cd", "c","xc","l","xl", "x","ix","v","iv","i"};
    int i;
    char *simbolos[13];
    int values[13];
    for(i=0;i<13;i++){
        simbolos[i]=Vc[13-i];
    }
    for(i=0;i<13;i++){
        values[i]=Vn[13-i];
    }
    int num;
    printf("ingrese un numero: ");
    scanf("%d",&num);
    int count = sizeof(Vn)/sizeof(Vn[0]);
    count--;
    
    while ( num > 0 ){
        if ( num >= values[count] ){
            printf("%s",simbolos[count]);
            num -= values[count];
        }else
            count--;
    }
 
    
    return 0;
}