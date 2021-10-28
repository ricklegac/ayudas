#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int primo( int numero);
int main(){
	int num,digito,contador2=0,contador1=0;
	int i,j,c=0;
	int n;
	int vec[100];
	printf("-----------------------------------\nIngresar numero para revisar si el palprimo:\n");
	scanf("%i",&num);
	printf("-----------------------------------\n");
	while(num){
    	digito = num % 10;
    	num /= 10;
    	vec[c]=digito;
    	c++;
	} 
	
	/*for(i=0;i<c;i++){
		printf(" %i ",vec[i]);
	}*/
	int k=c-1;
	if(c%2==0){
		for(i=0;i<(c/2);i++,k--){
			//printf("%i \n ",vec[i]+vec[k]*10); 
			if(primo(vec[i]+vec[k]*10)){
				printf("\n %i es primo:  ",vec[i]+vec[k]*10);
				contador1++;
			}
		}
		if(contador1<=c/2){
			printf("numero palprimo");
		}}
	else{
		for(i=0;i<(c/2);i++,k--){
			//printf("%i \n ",vec[i]+vec[k]*10); 
			if(primo(vec[i]+vec[k]*10)){
				printf("\n %i es primo  ",vec[i]+vec[k]*10);
				contador2++;
			}
		}
		if(primo[int(c/2)]){
			printf("\n %i es primo  ",vec[int(c/2)]);
			contador2++;
		}
		if(contador2>c/2){
			printf("\nnumero palprimo");
		}
	}
	
//	printf("\n as %i",c);
	
	
	
	return 0;
}
 // Variables a utilizar en el programa
int primo(int numero){
    int divisores=0;
    int primo=0;
    do
    {
        if(numero!=-1 && numero>0)
        {
            
            primo=0;
            divisores=2;
            while(divisores<numero  && primo!=1)
            {
                if(numero%divisores==0) primo=1;
                divisores++;
            }
           
            if (primo==0)
            {
                return 1;
            }
            else
            {
                return -1;;
            }
        }
    } while(numero!=-1);
    
}

