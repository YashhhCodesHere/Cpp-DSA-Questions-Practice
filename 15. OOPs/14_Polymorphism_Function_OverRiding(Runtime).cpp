#include <bits/stdc++.h>
using namespace std;

/*
    Runtime Overriding:- (Run Time Polymorphism) -> Inheritance is used here.       :.(Overridden = Redefined)
    Here, Both Parent & Child class have the same function name and signature, where child class's function takes priority over parent class's function.
    Priority: Child Class > Parent Class

    Syntax:-
        class Parent{
            public:
                virtual void show(){
                    // Code
                }
        };

        class Child: public Parent{
            public:
                void show(){
                    // Code
                }
        };
*/

class Parent{
    public:
        void show(){
            cout << "Parent's Show Function \n";
        }
};

class Child : public Parent{
    public:
        void show(){
            cout << "Child's Show Function \n";
        }
};

int main(){

    Parent p;
    Child c;
    
    p.show();
    c.show();

    return 0;
}