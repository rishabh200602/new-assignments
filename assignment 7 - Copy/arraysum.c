#include<stdio.h>
int main()
{
int n,a[34],sum=0,i;
int *ptr=a;
printf("enter size of the array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    sum+=*(ptr+i);
}
printf("the sum of the arrays is : %d",sum);
return 0;
}
