#include<iostream>
#include<set>
using namespace std;
int main()
{
    int a[]={1,2,2,3,4,5};
    set<int>s1;
   
for(int i=0;i<6;i++)
    s1.insert(a[i]);

cout<<s1.size();
return 0;
}