#include <bits/stdc++.h>
using namespace std;

/*
    Abstract Class: A class which contains atleast one 'Pure Virtual Function' is called an Abstract Class.
    - We NEVER create an object of an Abstract Class -> It is used for inheritance, & providing blueprint for the child classes. (Never be instantiated(No Object Creation))

    Pure Virtual Function(Abstract Function): Virtual Function with NO Definition. It is defined by assigning 0 to it.
    Syntax:-
        virtual return_type function_name() = 0;
    ex:-
        virtual void show() = 0;

*/

// Abstract Class:-
class Shape{
public: 
    virtual void draw() = 0; // Pure Virtual Function or Abstract Function
};

class Circle : public Shape{
public:
    void draw(){
        cout << "Drawing Circle \n";
    }
};

class Rectangle : public Shape{
public:
    void draw(){
        cout << "Drawing Rectangle \n";
    }
};


int main(){
    Circle c;
    Rectangle r;

    c.draw();
    r.draw();

    Shape s;   // Error: Cannot instantiate abstract class (Variable Type: Shape is an Abstract Class)

    return 0;
}