#include<stdio.h>
#include<stdlib.h>
#include<string.h>
const char* PERSON_FORMAT_OUT = "(%s, %d, %c)\n";
const char* PERSON_FORMAT_IN= "(%[^,], %d, %c)";
typedef struct Person
{
	char name[20];
	int age;
	char gender;	
}Person;
int main(int argc, char* argv[]){
	Person p1 = {
			.name = "Ricardo",
			.age= 24,
			.gender= 'M',
	};
	Person p2;
	FILE *file;
	fopen_s(&file, "people.dat", "w+");
	if(file=NULL){
		perror("no pudo abrirse el archivo\n");
		return 1;
	}
	fprintf_s(file, PERSON_FORMAT_OUT, p1.name, p1.age, p1.gender);
	fseek(file,0,SEEK_SET);
	fscanf_s(file, PERSON_FORMAT_IN, p2.name, 20, &p2.age, &p2.gender);
	printf("%s %d %c", p2.name, p2.age, p2.gender);
	return 0;
;