#include <stdio.h>
#include <stdlib.h>

struct csv_line {
  int ac;
  char tipop;
  char r_me;
};

struct csv_line *line_pointer = NULL;

int main(void) 
{
    FILE *csvFile = NULL;
    csvFile = fopen("bd2.txt", "r");
    if (csvFile == NULL)
    {
        perror( "fopen failed" );
        exit(1);
    }

    size_t i = 1;
    line_pointer = malloc( sizeof(struct csv_line) * i );
    if( ! line_pointer )
    {
        perror( "malloc failed" );
        fclose( csvFile );
        exit( EXIT_FAILURE );
    }

    while ( (fscanf(csvFile, "%d,%c,%c\n",
                &(line_pointer + i)->ac,
                &(line_pointer + i)->tipop,
                &(line_pointer + i)->r_me)))
               // &(line_pointer + i)->char1) ) == 4 )
    {
        i++;
        struct csv_line *temp = realloc(line_pointer, sizeof(struct csv_line) * i );
        if( ! temp )
        {
            perror( "realloc failed" );
            free( line_pointer );
            fclose( csvFile );
            exit( EXIT_FAILURE );
        }
    }

    fclose(csvFile);

    // per the request that the last entry contains NULL
    memset( &line_pointer[i], 0, sizeof( struct csv_line ) );
	size_t k;
    for(  k=0; k < (i-1); k++ ) 
    {
        printf("%d, %c, %c",
                (line_pointer + k)->ac,
                (line_pointer + k)->tipop,
                (line_pointer + k)->r_me);
                //(line_pointer + k)->char1);
        printf("\n");
    }

    free(line_pointer);

    return EXIT_SUCCESS;
}
