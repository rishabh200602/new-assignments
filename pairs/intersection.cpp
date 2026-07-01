#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={6,1,3,4,5};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            a[i]=b[j];
        }
        cout<<a[i];
    }
    

}