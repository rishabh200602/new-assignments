#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, width;

public:
    void getData()
    {
        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Width: ";
        cin >> width;
    }

    void showArea()
    {
        int area = length * width;
        cout << "Area of Rectangle = " << area << endl;
    }
};

int main()
{
    Rectangle r;

    r.getData();
    r.showArea();

    return 0;
}