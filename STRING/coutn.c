#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,words=0;
    printf("enter the string");
    scanf("%[^\n]",str);
    for(i=0;str[i]!=0;i++){
        if((i==0 && str[i]!="")||(str[i]!==''&& str[i-1]=""))
        {
        words++;
    }}
    printf("%d",words);
    return 0;

}