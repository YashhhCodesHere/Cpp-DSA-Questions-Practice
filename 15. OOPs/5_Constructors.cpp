#include <bits/stdc++.h>
using namespace std;

/*
    Constructors are called to allocate memory to the object.
    
    Constructors: The are the special member functions or method which are automatically invoked whenever the object is created.
                   Used for Initialization of Data Members.
                   Although, they can't be seen by us, but they are always there. Initialized by the compiler -> Default Constructor(No Arguments).

    - We can make Constructors on our own, or if we don't, then the compiler will make a default constructor for us.
    - Constructor only called once, when the object is created.
    - Actually, Memory Allocation is performed when Constructor is called.

    For making a Constructor:-
    1. Same Name as the Class Name.
    2. No Return Type.
    3. Can be Parameterized or Non-Parameterized.
    4. Can be Overloaded.
    5. Must be Public.

    Types of Constructors:-
    1. Default Constructor: Constructor with no arguments.
    2. Parameterized Constructor: Constructor with arguments.
    3. Copy Constructor: Special Constructor (Default) used to copy properties(Data Members) of one object to another object.
*/

class Car{
    string name, colour;
public:
    // Constructor Overloading:- Same Name, Different Arguments
    // Default Constructor
    Car() {
        cout << "Default constructor is being called!\n";
    }
    // Parameterized Constructor
    Car(string name, string colour){
        cout << "Parameterised Constructor is being called!\n";
        this->name = name;          // this is a pointer which points to the current object.
        this->colour = colour;      // this->name is same as (*this).name
    }

    // Member Functions
    void start(){
        cout << "Car is getting started!\n";
    }
    void stop(){
        cout << "Car is now Stopped!\n";
    }
};

int main(){
    Car c1, c2("BMW", "Black");
    // cout << c1.name << ", " << c1.colour << "\n";    -> Can't be accessed as they are private.

    return 0;
}