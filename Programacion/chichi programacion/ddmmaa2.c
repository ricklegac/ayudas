#include<stdio.h>
int main(){
	int DD,MM,AA;
	printf("ingrese la fecha: \n");
	scanf("%d/%d/%d",&DD,&MM,&AA);
	if(AA%4==0 && AA%100!=0 || AA%400==0){
		printf("366 dias");
	}else{
		printf("365 dias");		
	}
	
	return 0;
}
