#include<stdio.h>
#include<string.h>
#include<ctype.h>
void minus(char *a);
void punt(char *a);
int main(){
	char string[100];
	gets(string);
	minus(string);
	punt(string);
	return 0;
	

}
void minus(char *a){
	int i;
	//printf("%d",strlen(a));
	for(i=0;i<strlen(a);i++)  a[i]= tolower(a[i]);
	//puts(a);
}
void punt(char *a){
	int i;
	
	
	
}
