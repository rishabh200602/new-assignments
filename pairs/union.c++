#include<iostream>
#include<set>
using namespace std;
int main()
{
    int a[]={3,2,1};
    int b[]={4,5,6};
    set<int>s1;
    for(int i=0;i<3;i++)
    s1.insert(a[i]);
    for(int i=0;i<3;i++)
    s1.insert(b[i]);
    cout<<"union is";
    for(int val: s1)
    cout<<val;
    return 0;
}