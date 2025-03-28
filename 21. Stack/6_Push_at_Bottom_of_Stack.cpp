#include <bits/stdc++.h>
using namespace std;

// Pushing val to bottom using existing functions of stack in O(n)!
void pushAtBottom(stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    pushAtBottom(s, val);
    s.push(temp);
}

int main(){
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    pushAtBottom(s, 4);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }


    return 0;
}