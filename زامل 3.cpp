#include <iostream>
using namespace std;

class Calculator
{
    int a, b;
public:
    void input()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void showSum()
    {
        cout << "Sum = " << a + b << endl;
    }
};

int main()
{
    Calculator c; // Object
    c.input();
    c.showSum();
    return 0;
}