#include<stdio.h>
int main()
{
    int n,i;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0){
            printf("not a prime number");
        }
        else{
            printf("prime number");
        }
    }
return 0;
}