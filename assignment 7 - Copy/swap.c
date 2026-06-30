#include<stdio.h>
int swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int main()
{
    int a=6,b=4;
    swap(&a,&b);
    printf("after swappin a=%d anf b=%d",a,b);
    return 0;
}