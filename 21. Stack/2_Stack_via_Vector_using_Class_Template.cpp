#include <iostream>
#include <vector>
using namespace std;

/*
    Template Classes are used to create generic classes, where the data type of members is specified as a parameter.
    like:-
        template<class T>
    and,
    then we can use 'T' as a datatype for any member of the class.

    But, We have to define the datatype in main function while creating object of the class.
    like:- 
        Stack<int> s;
        Stack<string> s;
        Stack<float> s;
*/

//  To store variable Datatype in stack with vector!
template<class T>
class Stack{
    vector<T> vec;
public:
    void push(T val){     // O(1)
        vec.push_back(val);
    }

    void pop(){     // O(1)
        if(vec.empty()){
            cout << "Stack is Empty!\nCan't POP!\n";
            return;
        }
        vec.pop_back();
    }

    void top(){     //O(1)
        if(vec.empty()){
            cout << "Stack is Empty!\nCan't POP!\n";
            return;
        }
        cout << vec.back() << "\n";
    }

    bool isEmpty(){     //O(1)
        return vec.empty();
    }
};

int main(){
    Stack<string> s;
    
    s.push("Coding");
    s.push("Learn");
    s.push("I");

    s.top();
    s.pop();

    s.top();
    s.pop();

    s.top();
    s.pop();

    // s.push(10);
    // s.push(30);
    // s.push(20);
    
    return 0;
}