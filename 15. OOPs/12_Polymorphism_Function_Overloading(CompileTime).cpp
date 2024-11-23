#include <bits/stdc++.h>
using namespace std;

/*
    Polymorphism means "Many Forms" => It's the ability of a function to behave differently based on the input.[ Different Functions - Same Name - Different Parameters ]
    Just like we have seen in Function Overloading, where the function name is the same but the parameters are different.
    It is the example of Compile Time Polymorphism.

(   Polymorphism is of 2 types:-
    1. Compile Time Polymorphism:- It is also called Early Binding or Static Binding.
        - It is achieved by Function Overloading & Operator Overloading.
        - It is resolved during the Compile Time.
        - It is faster as compared to Run Time Polymorphism.
    -> It is of 2 types:-
        a.) Function Overloading:- When we have multiple functions with the same name but different parameters. (Return Type doesn't matter, can be same or different)
        b.) Operator Overloading:- When we have multiple operators with the same name but different parameters.
    
    2. Run Time Polymorphism:- It is also called Late Binding or Dynamic Binding.
        - It is achieved by Function Overriding.
        - It is resolved during the Run Time.
        - It is slower as compared to Compile Time Polymorphism. )

*/

// Function Overloading in Class:-
class Print{
public:
    void show(int x){
        cout << "Integer: " << x << "\n";
    }
    void show(string str){
        cout << "String: " << str << "\n";
    }
};

int main(){
//  PolyMorphism:- 
    Print p;
    p.show(5);    
    p.show("Hello");
    // The above two functions have same name, but acts different depending on the arguments passed. -> Compile Time Polymorphism.

    return 0;
}

/*
    Function Overloading is Compile Time Polymorphism, while Function Overriding is Run Time Polymorphism.

    Function Overloading -> Same Function Name, Different Parameters => Works differently based on the parameters passed.
    Function Overriding -> Same Function Name, Same Parameters,  Different Classes. => Prioritise the child class's function. (Inheritance Used)
*/