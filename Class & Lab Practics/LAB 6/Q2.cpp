#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

int evaluatePostfix(const string& expression) {
    stack<int> stack;
    istringstream iss(expression);
    string token;

    while (iss >> token) {
        if (isdigit(token[0]) || (token[0] == '-' && token.size() > 1 && isdigit(token[1]))) {
            stack.push(stoi(token));
        } else if (token.size() == 1 && string("+-*/").find(token[0]) != string::npos) {
            int operand2 = stack.top(); stack.pop();
            int operand1 = stack.top(); stack.pop();
            switch (token[0]) {
                case '+': stack.push(operand1 + operand2); break;
                case '-': stack.push(operand1 - operand2); break;
                case '*': stack.push(operand1 * operand2); break;
                case '/': stack.push(operand1 / operand2); break;
                default: throw invalid_argument("Invalid operator");
            }
        } else {
            throw invalid_argument("Invalid token");
        }
    }
    if (stack.size() != 1) {
        throw runtime_error("Invalid expression");
    }
    return stack.top();
}

int main() {
    string expression;
    cout << "Enter a postfix expression: ";
    getline(cin, expression);

    try {
        int result = evaluatePostfix(expression);
        cout << "The result is: " << result << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}