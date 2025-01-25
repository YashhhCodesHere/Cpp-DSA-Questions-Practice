#include <bits/stdc++.h>
using namespace std;

/*
    Here, we are using deque to implement queue.
    Some member functions of deque are:
    1. push() -  dq.push_back(val)  |   dq.push_front(val)
    2. pop() -   dq.pop_back()      |   dq.pop_front()
    3. front() - dq.front()         |   dq.back()
*/

class Queue{
    deque<int> dq;
public:
    void push(int val){
        dq.push_back(val);
    }

    void pop(){
        dq.pop_front();
    }

    int front(){
        return dq.front();
    }

    bool empty(){
        return dq.empty();
    }

};

int main(){
    Queue q;

    return 0;
}