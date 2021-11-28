#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct csalud
{
    int ac;
    char tipop[2];
    char r_me[2];
};

#define BUFFER_SIZE 100

struct csalud saveToStruct (char* str)
{
    struct csalud persona;
    int flag = 0;
    char *token = strtok(str, ","); 

    while( token != NULL )
    {
        if (0 == flag)
            persona.ac=token;
        else if (1 == flag)
            strcpy(persona.tipop, token);
        else if (2 == flag)
            strcpy(persona.r_me, token);
        flag++;
        token = strtok( NULL, "," ); 
    }
    return persona;
}
void print(struct csalud* arr, int size)
{
	int i;
    for ( i = 0; i < size; i++)
    {
        printf("%d, %s, %s\n", arr[i].ac, arr[i].tipop, arr[i].r_me);
    }
}
/*int cmp(const void* l, const void* r)
{
    return strcmp(((const csalud*)l)->name, ((const csalud*)r)->name);
}*/
int main()
{
    struct csalud arr[10];
    FILE* file = fopen("bd2.txt", "r");
    if (!file)
        return -1;

    char buffer[BUFFER_SIZE];
    int flag = 0;
    int i=0;
    while (fgets(buffer, BUFFER_SIZE, file))
    {
        arr[flag] = saveToStruct(buffer);
        flag++;
        i++;
    }
    print(arr, i);

    /*qsort(arr, 10, sizeof(struct csalud), cmp);
    printf("After sort by name!\n");
    print(arr, 10);*/
    return 0;
}
