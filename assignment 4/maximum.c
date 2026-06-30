#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
    return a;
    else 
    return b;
}
    int main()
{
    printf("the maximum amoung the two numbers is %d",max(6,4));
    return 0;
}