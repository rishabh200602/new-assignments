#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,len;
printf("enter the string:");
scanf("%s",&str);
len=strlen(str);
char rev[100];
for(i=0;i<len;i++){
    rev[i]=str[len-1-i];
}
rev[i]='\0';
if(strcmp(str,rev)==0)
{
    printf("string is pallindrome");

}
else
printf(
    "string is not pallindrom");

return 0;
}

