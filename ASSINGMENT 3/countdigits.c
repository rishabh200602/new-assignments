#include<stdio.h>
int main()
{
    int count=0,n;
    printf("enter n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        n=n/10;
        count++;

    }
    printf("the number of digits in given number is %d /n",count);
    return 0;
}