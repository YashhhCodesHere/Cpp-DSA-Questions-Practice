#include <bits/stdc++.h>
using namespace std;

// Constructors are special member functions of a class that are automatically called when an object of the class is created.
// Constructors have the same name as the class and do not have any return type. It is automatically invoked when the object is created.

class Complex
{
    int a, b;
public:
    Complex() // default Constructor -> Doesn't takes any value as arguement
    {
        a = 10;
        b = 20;
    }
    void printNumber()
    {
        cout << "Your number is (" << a << " + " << b << "i)" << endl;
    }

};
int main(){
    Complex c1, c2;
    c1.printNumber();
    return 0;
}
