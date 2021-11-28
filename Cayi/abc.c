#include<stdio.h>
int main(){
	int A,B,C;
	printf("ingrese A,B,C:\n");
	scanf("%d%d%d",&A,&B,&C);
	printf("\nA  B  C\n");
	printf("%d  %d  %d",A,B,C);
	A=A+C;
	C=A-C;
	A=A-C;
	B=B+C;
	C=B-C;
	B=B-C;
	printf("\nA  B  C\n");
	printf("%d  %d  %d",A,B,C);
	return 0;
}
