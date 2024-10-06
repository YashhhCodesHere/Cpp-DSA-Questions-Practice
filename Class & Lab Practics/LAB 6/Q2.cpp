#include <bits/stdc++.h>
using namespace std;

// Function to evaluate a postfix expression
int evaluatePostfix(const string& expression) {
    stack<int> stack; // Stack to store operands
    istringstream iss(expression); // Stream to read the expression
    string token; // Variable to store each token

    // Read each token from the expression
    while (iss >> token) {
        // If the token is a number (including negative numbers)
        if (isdigit(token[0]) || (token[0] == '-' && token.size() > 1 && isdigit(token[1]))) {
            stack.push(stoi(token)); // Convert token to integer and push to stack
        } 
        // If the token is an operator
        else if (token.size() == 1 && string("+-*/").find(token[0]) != string::npos) {
            int operand2 = stack.top(); stack.pop(); // Pop the top two operands
            int operand1 = stack.top(); stack.pop();
            // Perform the operation based on the operator
            switch (token[0]) {
                case '+': stack.push(operand1 + operand2); break;
                case '-': stack.push(operand1 - operand2); break;
                case '*': stack.push(operand1 * operand2); break;
                case '/': stack.push(operand1 / operand2); break;
                default: throw invalid_argument("Invalid operator");
            }
        } 
        // If the token is neither a number nor an operator
        else {
            throw invalid_argument("Invalid token");
        }
    }

    // If there is more than one element in the stack, the expression is invalid
    if (stack.size() != 1) {
        throw runtime_error("Invalid expression");
    }

    return stack.top(); // The result is the only element left in the stack
}

int main() {
    string expression;
    cout << "Enter a postfix expression: ";
    getline(cin, expression); // Read the entire line as the expression

    try {
        int result = evaluatePostfix(expression); // Evaluate the expression
        cout << "The result is: " << result << endl; // Print the result
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl; // Print any errors
    }

    return 0;
}