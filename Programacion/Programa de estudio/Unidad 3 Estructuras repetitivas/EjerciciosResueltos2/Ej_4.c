#include <stdio.h>
#include <stdlib.h>
int main () {
	int i,j;
		printf ("\n\n\t");
		printf ("LOS TERMINOS DE LA SERIE SON: ");
		printf ("\n\n\t");
		j=1;
	for (i=2 ; i<=256 ; i+=2 ) {
		if(j%9!=0){
			printf ("%d\t",i);
		}else{
			printf ("%d\n\n\t",i);
		}	
		j++;
	}
	printf ("\n\n");
	system ("pause");
	return 0;
}
