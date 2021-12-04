#include<stdio.h>
typedef struct student{
	int rno;
	char name[20];
	struct subject{
		int scode;
		char sname[20];
		int mark;
	}sub[3];
	int total;
	float per;
}student;
void create();
void display();
void append();
int main(){
	int ch;
	do{
		printf("\n1.CREATE");
		printf("\n2.DISPLAY");
		printf("\n3.APPEND");
		printf("\n0.EXIT");
		printf("\n Enter your choice");
		scanf("%d",&ch);
		switch (ch){
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				append();
				break;
		}
	}while(ch!=0);
	return 0;
}
void create(){
	student *s;
	int n,i,j;
	printf("Enter how many stundent you want");
	scanf("%d",&n);
	s = (student *s)calloc(n , sizeof(student));
	for(i=0;i<n;i++){
		s[i].total=0;
		s[i].per=0;
		printf("Enter ROLLNo");
		scanf("%d",&s[i]);
		fflush(stdin);
		printf("Enter name: ");
		scantf("%[^\n]s", s[i].name);
		for(j=0;j<3;j++){
			printf("enter marks of subjects %d ", j+1);
			scanf("%d", s[i].sub[j].mark);
			s[i].total+= s[i].sub[j].mark;
		}

	}
}