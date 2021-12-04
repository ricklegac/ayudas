#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *file;
	file=fopen("bacon.txt", "r");
	char unalinea[250];
	while(!feof(file)){
		fgets(unalinea, 250, file);
		puts(unalinea);
	}

	return 0;
}