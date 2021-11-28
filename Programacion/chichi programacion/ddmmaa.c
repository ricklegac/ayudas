#include<stdio.h>
int main(){
	int i;
	int DD,MM,AA,dd=0;
	printf("ingrese fecha:\n");
	scanf("%d/%d/%d",&DD,&MM,&AA);
	for(i=1;i<MM;i++){
		if(i==1 || i==3 || i==5 || i==7 || i== 8 || i==10 || i==12){
			dd=dd+31;	
		}
		if(i==2){
			if(AA%4==0 && AA%100!=0 || AA%400==0){
				dd=dd+29;
			}else{
				dd=dd+28;
			}
		}
		if(i==4 || i==6 || i==9 || i==11 ){
			dd=dd+30;
		}
	}
	for(i=1;i<DD;i++){
		dd=dd+1;
	}
	printf("\ncantidad de dias transcurridos en el ano: %d",dd);
	return 0;
}
 
