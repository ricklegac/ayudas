#include<stdio.h>
#include<conio.h> 
#include<string.h>
int main(){
    int i,j,k,n,count=0;
    int l=0;
    char nombre[10][20], aux[20];
    printf("Ingrese la cantidad de palabras: ");
    scanf("%d",&n);
    do{
        printf("Ingrese la palabra %d: ",l+1);
        fflush(stdin);
        gets(nombre[l]);
        l++;
    }while (l<n);
    for(i=0; i<l-1; i++){
        k=i;
        strcpy(aux, nombre[i]);
        for(j=i+1; j<l; j++){
            if(strcmp(nombre[j], aux)<0){
                k=j;
                strcpy(aux, nombre[j]);
            }
        }
        strcpy(nombre[k],nombre[i]);
        strcpy(nombre[i],aux);
    }
    for(i=0; i<l; i++){
        printf("%s",nombre[i]);
        printf("\n");
    }
  	return 0;
}
