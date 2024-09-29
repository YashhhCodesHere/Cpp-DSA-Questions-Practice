#include <iostream>
#include <stack>
#include <string>

using namespace std;

int precedence(char op) {
    return (op == '+' || op == '-') ? 1 : (op == '*' || op == '/') ? 2 : (op == '^') ? 3 : 0;
}

string infixToPostfix(const string& infix) {
    stack<char> s;
    string postfix;
    for(char ch : infix) {
        if(isalnum(ch)) {
            postfix += ch;
        } else if(ch == '(') {
            s.push(ch);
        } else if(ch == ')') {
            while(s.top() != '(') {
                postfix += s.top(); s.pop();
            }
            s.pop();
        } else {
            while(!s.empty() && precedence(s.top()) >= precedence(ch)) {
                postfix += s.top(); s.pop();
            }
            s.push(ch);
        }
    }
    while(!s.empty()) {
        postfix += s.top(); s.pop();
    }
    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;
    cout << "Postfix expression: " << infixToPostfix(infix) << endl;
    return 0;
}
