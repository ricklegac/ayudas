include<stdio.h>
void vocal(char *);

int main(){
    char *cad1;
    char *i;
    printf("Ingrese una cadena: ");
	scanf("%c",&cad1);
    int v;
    v=vocal(cad1);
    printf("%s\n",cad1);
    return 0;
}

void vocal(char *c1){
    int i=0;
    while(*(c2+i)!='\0'){
        *(c1+i)=*(c2+i);
        i++;
}
*(c1+i)='\0';
}
