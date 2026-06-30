#include<stdio.h>
int main()
{
    int n,rev=0,x;
    printf("enter n please");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        x=n%10;
    rev=rev*10+x;
    n=n/10;
    }
    printf("the reverse of the number is %d",rev);
    return 0;
    }