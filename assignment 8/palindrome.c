#include<stdio.h>
int palin(int n,int rev)
{
    if(n==0)
    {
        return rev;
    }
   
    return palin( n/10,rev*10+n%10);
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int rev=palin(n,0);
    if(n==rev)
    {
        printf("pallindrome");
    }
    else 
    printf("not an pallindrome");
    return 0;
}