#include<stdio.h>
int power(int a,int b)
{
    int i;
   int pow=1;
   for(i=1;i<=b;i++)
   {
pow*=a;
   }
   return pow;
}
int main()
{
    int a,b;
    printf("enter a please=");
    scanf("%d",&a);
    printf("enter b please=");
    scanf("%d",&b);
    printf("the power is=%d",power(a,b));
    return 0;
}