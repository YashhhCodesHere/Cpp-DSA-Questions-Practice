#include <bits/stdc++.h>
using namespace std;

/*
    Virtual Function:-  (Runtime Polymorphism) 
    A member function which is defined in the parent class, is used to be redefined in the child class(Compulsory).alignas
    'virtual' keyword is used to make a function in parent class as virtual,& in child class, '

    Syntax:-
    virtual return_type function_name(){
        // code
    }
    
*/

class Parent{
    public:
        virtual void hello(){
            cout << "Parent's Hello! \n";
        }
};

class Child : public Parent{
    public:
        void hello(){
            cout << "Child's Hello! \n";
        }
};

int main(){
    Child c;
    
    Parent *p = &c;
    p -> hello(); // Child's Hello!

    return 0;
}