#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()

{
     vector<int> s={1,2,2,3,3,4,5};
     sort(s.begin(),s.end());
     s.erase(unique(s.begin(),s.end(),s.end()));
for(int res:s)
{
    cout<<""<<res;
}
return 0;
}