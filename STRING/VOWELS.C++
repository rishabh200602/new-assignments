#include<stdio.h>
int main()
{
 char str[100],i;

 printf("enter the string");
 fgets(str,100,stdin);
 for(i=0;str[i]!='\0';i++)
 {
if(str[i]=='a'||str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
{
    printf("%c",str[i]);
}
 }
 return 0;
}