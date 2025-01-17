#include <bits/stdc++.h>
using namespace std;

template <class T>
class Stack{
    list<T> l;
public:
    void push(T val){
        l.push_front(val);
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack is Empty!\n";
            return;
        }
        l.pop_front();
    }

    T top(){
        return l.front();
    }

    bool isEmpty(){
        return (l.size() == 0);

        // return l.empty();
    }
};

int main(){
    Stack<string> s;

    s.push("Bro!");
    s.push("Robinn");
    s.push("Hello");

    while(!s.isEmpty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}