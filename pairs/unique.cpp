#include<iostream>
#include<set>
using namespace std;
int main()
{
    int arr[5]={1,2,2,3,4};
    set<int>s1;
    for(int i=0;i<7;i++)

    
    s1.insert(arr[i]);

for(int val:s1)
    cout<<val;
return 0;
}