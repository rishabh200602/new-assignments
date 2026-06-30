#include<stdio.h>
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1; 
    }
    return fibo(n-1)+fibo(n-2);    
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    printf("fibonaachi series=");
    for(int i=0;i<n;i++)
    {
    printf("%d\n",fibo(i));
    }
    return 0;
}