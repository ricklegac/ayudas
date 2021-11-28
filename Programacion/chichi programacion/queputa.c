#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char n[20];
	int i,p,c=0;
	do{
		printf("\ningrese un numero positivo de minimo dos digitos");
		scanf("%s",n);	
	}while(n[0]=='-' || strlen(n)<2);
	do{
		printf("ingrese P positivo:\n");
		scanf("%d",&p);
	}while(p<=0);
	//strrev(n);
	//p=p-1;
	//printf("%d",x);
	p=strlen(n)-p;
	p=p+1;
	
	//facil
	for(i=0;i<strlen(n);i++){
		c++;
		if(p!=c) printf("%c",n[i]);
	
	}
	return 0;
}
