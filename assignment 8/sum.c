#include<stdio.h>
int add(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+add(n-1);
}
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("the sum is :%d ",add(n));

return 0;
}