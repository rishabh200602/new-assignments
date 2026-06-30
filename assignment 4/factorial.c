#include<stdio.h>
int fact(int n)
{
int facto=1;
int i;

    for( i=1;i<=n;i++)
    {
        facto=facto*i;
    }
    return facto;
}
int main()
{
int n;
int re;
    printf("enter n");
    scanf("%d",&n);
    re=fact(n);
    printf("the factorial is %d",re);

}