#include<stdio.h>
int prime(int n){
for(int i=2;i<=2;i++)
{
if(n%i==0)
return 0;
}
return 1;
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    if(prime(n))
    {
        printf("number is not prime");
    }
    else 
    printf("number is prime");
    return 0;
}