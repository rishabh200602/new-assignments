#include<stdio.h>
int palindrome(int rev,int n)
{
    if(n==0)
    {
        
        return rev;
    }
    rev=n%10+rev*10; 
    return n/10,rev;
}
int ispaliindrome(int n)
{
    int rev=palindrome(n,0);
//    if(n==rev)
    
  /////\      printf("yes pallindrome   \n");
    
  //  else
   // printf("not an pallindrome");
}
int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);
    if(ispaliindrome(n))
    {
        printf("yes palindrome");
    }
    else
    printf("not pallindrome");
    return 0;

}
