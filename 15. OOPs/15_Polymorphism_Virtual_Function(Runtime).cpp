#include <bits/stdc++.h>
using namespace std;

/*
    Virtual Function:-    (Runtime Polymorphism)
    
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