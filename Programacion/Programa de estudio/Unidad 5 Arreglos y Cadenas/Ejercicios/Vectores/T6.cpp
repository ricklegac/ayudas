/*Escriba un programa que lea varias l�neas de texto e imprima una tabla que indique el
n�mero de palabras de una letra, de dos letras, de tres letras, etc�tera, que aparezcan en
el texto. Por ejemplo, la frase: �Qu� es m�s noble para el esp�ritu?
Contiene las siguientes longitudes de palabra y ocurrencias:*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char texto[200];
	int ocurrencia[200];
	int cant_veces[200];
	int cont2=0;
	int pos=0;
	int cont=0;
	int i=0;
	int k=0;
	int j=0;
	int l=0;
	printf("\nIngrese un texo: ");
	gets(texto);
	l=strlen(texto);
	//printf("\n%d",l);
	for(i=0;i<l;i++)
	{
		
		if(texto[i]!=' ')
		{
			
			cont++;
			cant_veces[k]=cont;	
		}
		else
		{
			
			k++;
			cont=0;
		}	
	}
	
	/*for(i=0;i<=k;i++)
	{
		printf("\n%d",cant_veces[i]);
	}*/
	
	for(i=0;i<=9;i++)
	{
		ocurrencia[i]=0;
	}
	
	for(i=0;i<=k;i++)
	{
		for(j=0;j<=k;j++)
		{
			if(cant_veces[i]==cant_veces[j])
			{
				pos=cant_veces[i];
				cont2++;
				ocurrencia[pos]=cont2;
				
			}
			else
			{
				ocurrencia[i]=0;
				cont2=0;	
			}
		}
	
	}
	
	for(i=0;i<=9;i++)
	{
		printf("\nLongitud de palabra %d",i);printf(" ocurrencia: %d ",ocurrencia[i]);printf(" veces");	
	}
	
}
