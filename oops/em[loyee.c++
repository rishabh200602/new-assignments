#include <iostream>
using namespace std;

class Employee
{
private:
    int id;

public:
    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> id;
    }

    void showData()
    {
        cout << "Employee ID is: " << id << endl;
    }
};

int main()
{
    Employee e;

    e.getData();
    e.showData();

    return 0;
}



