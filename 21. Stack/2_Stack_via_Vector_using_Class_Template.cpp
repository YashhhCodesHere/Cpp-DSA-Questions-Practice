#include <iostream>
#include <vector>
using namespace std;

class Stack{
    vector<int> vec;
public:
    void push(int val){     // O(1)
        vec.push_back(val);
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack is Empty!\nCan't POP!\n";
            return;
        }
        vec.pop_back();
    }

    void top(){
        if(vec.empty()){
            cout << "Stack is Empty!\nCan't POP!\n";
            return;
        }
        cout << vec.back() << "\n";

        // int lastIdx = vec.size() - 1;
        // return vec[lastIdx];
    }

    bool isEmpty(){
        return vec.empty();

        // return (vec.size() == 0)
    }
};

int main(){
    Stack s;
    
    s.push(3);
    s.push(2);
    s.push(1);


    s.top();

    s.pop();

    s.top();

    s.push(10);
    s.push(30);
    s.push(20);


    
    return 0;
}