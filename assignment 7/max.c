#include<stdio.h>
int main()
{
    int max,arr[6]={45,67,89,87,56},*ptr;
    int n=6;
    ptr=arr;
    max=*ptr;
    for(int i=1;i<n;i++)
    {
        if(*(ptr+i)>max)
        {
            max=*(ptr+i);
        }}
        printf("the maximum is :%d",max);
        return 0;
    }