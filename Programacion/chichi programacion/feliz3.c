#include<stdio.h>
#include<math.h>
int main(){
	int sum,dig,n,num;
	printf("ingrese el numero:\n");
	scanf("%d",&n);
	n=num;
	do{
		sum=0;
		while(n>0){
			dig=n%10;
			n=n/10;
			sum=sum+pow(dig,2);	
		}
		printf("sum=%d\n",sum);
		n=sum;
	}while(num>0);
	if(n==1){
		printf(":)");
	}else{
		printf(":(");
	}
	return 0;
}
