#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6},brr[6],i;
    for(i=0;i<6;i++)
       {
printf("%d \n",arr[i]);
    }
    for(i=0;i<6;i++)
    {
        brr[i]=arr[5-i];
    }
    printf("the reverse of the array is \n");
  for(i=0;i<6;i++)
    {
        
    
    printf(" :%d",brr[i]);

        }    return 0;

}