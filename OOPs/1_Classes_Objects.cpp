#include <bits/stdc++.h>
using namespace std;

// C++ was initially called as C with classes. It was renamed as C++ in 1983.
// Classes are extension of structures in C. 
// Structures had limitations like they can't have functions, like:-
// 1.) Structures can't have functions,or Methods inside it.
// 2.) Structures can't have constructors.
// 3.) All the members of a structure are public by default.
class Employee{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a, int b, int c);  // Function Declaration only!
        void getData(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        }
};

// :: -> Scope Resolution Operator

void Employee::setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee Yash;
    Yash.setData(1,3,4);    // Accessing the private data using functions written inside the class
    Yash.d = 12;
    Yash.e = 11;
    // Yash.a = 14; -> This will throw an error as a is private
    Yash.getData();
    return 0;
}