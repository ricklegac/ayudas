#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	long int dn,r,cociente; //porque puede ser un numero grande se usa long
	int i=1,j,temp,k=0;
	char s[100];
	char h[100],cat[10]="";
	printf("Ingresar un numero decimal: ");
	scanf("%ld",&dn);
	cociente = dn;
	while(cociente!=0) {
		temp = cociente % 16;
		if( temp < 10)
			temp =temp + 48; else
		    temp = temp + 55;
		h[i++]= temp;
		cociente = cociente / 16;
	}
	//i para la longitud de mi h


/*	int u=0;
	for (j = k/2 ;j>0;j--){
		s[u]=h[j];
		u++;
	}
	printf("\n a pasar a la cadena s: ");
	for (j = 0 ;j<=k/2;j++){
		s[u]=h[j];
		u++;
	}
	for(j=0;j<k;j++){
		printf("%c",s[j]);
	}*/
	
		printf("En hexadecimal %d: ",dn);
	for (j = i-1 ;j> 0;j--){
	      printf("%c",h[j]);
	      k++;
	}

	printf("\n");
	//cadena s 
	for(j=i-(i/2);j>0;j--){
		printf("%c",h[j]);
	}
	for(j=i-1;j>int(i/2);j--){
		printf("%c",h[j]);
	}	
		
	
	
   
	
	
	return 0;
}
