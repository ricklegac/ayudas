# include <stdio.h>
# include <conio.h>

main()
{
int k=0,sum,num,g,s;
int d;
printf("numero: ");
scanf("%d",&num);
do
{
for(sum=0;num!=0;sum+=s)
{
g=num%10; 
num/=10; 
s=g*g; 
}
if(sum==1){ 
d=1;}
else{ 
num=sum; 
k++;
if(k==20) 
{sum=1; 
d=0;
} } }while(sum!=1); 
if(d==1)
printf("\n:)");
else
printf("\n:(");

return 0;
}
