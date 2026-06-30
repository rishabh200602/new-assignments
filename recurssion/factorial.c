#include<stdio.h>
int factorial(int n)
{
    if(n==0|| n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int result=factorial(n);
    printf("the factorial of the given number is:%d",result);
    return 0;
}