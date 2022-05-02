#include <stdio.h>
#include <string.h>
int contador_subcadenas(char const *str, char const *sub);
int main()
{
    char str[100], sub[100];
    printf("\nIngrese una cadena que quiere contar : ");
    scanf(" %s", sub);
    printf("\nIngrese una cadena donde encontrar la cadena %s  : ", sub);
    fflush(stdin);
    scanf("%s", str);
    int result = contador_subcadenas(str,sub);
    printf("la cantidad que aparece %s en %s: %d\n",sub,str,result+1);
    return 0;
}
int contador_subcadenas(char const *str, char const *sub){
    int count = 0, count1 = 0,i,j;
    for (i = 0; i < strlen(str);){
        j = 0;
        count = 0;
        while ((str[i] == sub[j])){
            count++;
            i++;
            j++;
        }
        if (count == strlen(sub)){
            count1++;                                   
            count = 0;
        }
        else
            i++;
    }    
    return count1;
}