#include <bits/stdc++.h>
using namespace std;

// Destructors are special member functions of a class that are automatically called when an object is destroyed.
// Destructors have the same name as the class but with a tilde(~) sign before the name and do not take any arguements or return type.
// Destructors are used to release resources that are acquired by the object during its lifetime, Also dynamically allocated memory is released by destructors.
class counter{
private:
    static int count;
public:
    counter(){
        count++;
        cout << "This is the time when constructor is called " << count << endl;
    }
    ~counter(){
        cout << "This is the time when destructor is called " << count << endl;
        count--;
    }
};

int counter::count = 0;

int main()
{
    counter c1;
    cout << "Back to main" << endl;

    {
        cout << "Entering this block" << endl;
        counter c2, c3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}