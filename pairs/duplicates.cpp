#include<iostream>
#include<set>
using namespace std;
int main()
{
    int a[]={1,2,2,3,3,4,5};
    set<int>s1;

    for(int i=0;i<7;i++)
    s1.insert(a[i]);

for(int val:s1)
cout<<val;
return 0;

}

