#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={23,67,35,24};
    int min=*min_element(v.begin(),v.end());
cout<<min;
return 0;

}