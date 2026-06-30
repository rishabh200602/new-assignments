#include<stdio.h>
#include<string.h>
int main()
{
char str[100] ;
int len;
printf("enter the string:");
scanf("%s",str);
len=strlen(str);
for(int i=0;i<len/2;i++){

int temp;
temp=str[i];
str[i]=str[len-1-i];
str[len-1-i]=temp;
}
printf("%s",str);
return 0;
}
