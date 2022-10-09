#include <stdio.h>

int maxSum(int a[],int n)
{
  int i,j,k;
  int sum,maxSum = 0;
  for(i=0; i<n; i++)
  {
    for(j=i; j<n; j++)
    {
      sum = 0;
      for(k=i ; k<=j; k++)
      {
		sum = sum + a[k];
      }
      if(sum>maxSum)
        maxSum = sum;
    }
   }
   return maxSum;
}
int main()
{
    int i;
    printf("ingrese la dimension del vector");
    scanf("%d",&n);
 int arr1[] = {8, 3, 8, -5, 4, 3, -4, 3, 5};
 printf("ingrese un vector de dimension %d: ",n);
    int ctr = sizeof(arr1)/sizeof(arr1[0]);
    printf("vector:  ");
	for(i = 0; i < ctr; i++)
	{
	printf("%d  ", arr1[i]);
    }
    printf("\n");
 printf("la mayor suma es  : %d \n", maxSum(arr1, ctr));
 return 0;
}