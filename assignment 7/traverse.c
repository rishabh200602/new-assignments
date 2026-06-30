#include<stdio.h>
int main()

{
  int arr[7]={1,2,3,4,5,6,7};
  int *ptr;
  ptr=arr;
  printf("traverse the array:\n");
  for(int i=0;i<7;i++)
  {
    printf("%d \n",*(ptr+i));
  }
  return 0;
  }
