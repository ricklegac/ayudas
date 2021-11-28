#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	char fichero[20];
	printf("ingrese fichero a ser leido:\n");
	scanf("%s",fichero);
	char *token;
	FILE *fp = fopen(fichero,"r");
	const char s[2]=", ";
	int i;
	if(fp!=NULL){
		char line[100];
		while(fgets(line,sizeof line, fp)!=NULL){
			token=strtok(line,s);
			for(i=0;i<2;i++){
				if(i==0){
					printf("%s\t",token);
					token=strtok(NULL,s);
				}else{
					printf("%d\n",atoi(token));
				}
			}
		}
		fclose(fp);
	}else{
		perror(fichero);
	}
	return 0;
}
