#include<stdio.h>
int fact(int n)
{
    if(n==0|| n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n=5;
    int re=fact(5);
    printf("%d",re);
    return 0;
}