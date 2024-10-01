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
    Complex(int x, int y){
        a = x;
        b = y;
    }
    Complex(Complex &c){    // Copy Constructor -> It is used to copy the values of one object to another object.
        a = c.a;
        b = c.b;
    }
    // When we don't create a copy constructor, C++ creates a default copy constructor for us.
    void printNumber()
    {
        cout << "Your number is (" << a << " + " << b << "i)" << endl;
    }

};
int main(){
    Complex c1, c2(4,5);
    c1.printNumber();
    c2.printNumber();
    Complex c3(c1); // Copy Constructor
    c3.printNumber();
    return 0;
}
