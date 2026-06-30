#include<stdio.h>
int main()
{
    int i;
int arr[8]={22,3,101,45,3,33,22,44,};
int secondmax,max;
max=secondmax=arr[0];
for( i=0;i<8;i++)
{
    if(arr[i]>max){
    secondmax=max;
    max=arr[i];
    }
else if(arr[i]>secondmax && arr[i]!=max)
{
    secondmax=arr[i];
}}
printf("second maxiumum is %d",secondmax);
return 0;
}