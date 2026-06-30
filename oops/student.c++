#include<iostream>
#include<string.h>
using namespace std;
class student{
    public:
    int marks,roll;
    string name;
void get()
{
    cout<<"enter marks";
    cin>>marks;
    cout<<"enter roll";
    cin>>roll;
    cout<<"enter name";
    cin>>name;

}
void show()
{
    cout<<"marks="<<marks<<roll<<name;
}
};
int main()
{
    student s1;
    s1.get();
    s1.show();
    return 0;
}