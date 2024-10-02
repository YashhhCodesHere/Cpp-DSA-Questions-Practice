#include <bits/stdc++.h>
using namespace std;

// In any case, Private members of base class are not be INHERITED to any other derived class

class Employee{     // Base class
    int id;
public:
    float salary;
    Employee(int ID){
        id = ID;
        salary = 4000.50;
    }
};

// Private Visibility Mode -> Private members of base class are not accessible in derived class & Public members of base class becomes the private members of derived class
// Public Visibility Mode -> Public members of base class are accessible in derived class & Private members of base class are not accessible in derived class

class Programmer : Employee{    //  Derived Class -> Inheriting from Employee class | Default access specifier/Visiblity mode is private
public:
    string language = "C++";
};

int main()
{
    Employee Yash(10), Harsh(20);
    cout<< Yash.salary << " " << Harsh.salary << endl;
    return 0;
}