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
        int lastIdx = vec.size() - 1;
        cout << vec[lastIdx] << "\n";
    }

    bool isEmpty(){
        return (vec.size() == 0);
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

    cout << "Printing all the elements of stack:- (in LIFO Manner)\n";
    while(!s.isEmpty()){
        s.top(); 
        s.pop();
    }


    return 0;
}