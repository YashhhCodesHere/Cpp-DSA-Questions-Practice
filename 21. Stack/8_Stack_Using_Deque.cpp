#include <bits/stdc++.h>
using namespace std;

/*
    Instead of push_back or pop_back we used here, we could have used push_front and pop_front,
    But both push and pop operations must be of same type, either push_back and pop_back || push_front and pop_front.
    Some member functions of deque are:
    1. push() -  dq.push_back(val)  |   dq.push_front(val)
    2. pop() -   dq.pop_back()      |   dq.pop_front()
    3. front() - dq.front()         |   dq.back()
*/

class Stack{
    deque<int> dq;
public:
    void push(int val){
        dq.push_back(val);
    }

    void pop(){
        dq.pop_back();
    }

    int front(){
        return dq.back();
    }

    bool empty(){
        return dq.empty();
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()){
        cout << s.front() << " ";
        s.pop();
    }
    cout << "\n";

    return 0;
}