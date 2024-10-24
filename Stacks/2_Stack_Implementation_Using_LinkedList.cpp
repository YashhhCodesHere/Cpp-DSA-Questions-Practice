#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
public:
    Node *top;

    Stack()
    {
        top = nullptr;
    }

    void push(int value)
    {
        Node *newNode = new Node();
        if (!newNode)
        {
            cout << "Heap Overflow" << endl;
            return;
        }
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << value << " pushed into stack" << endl;
    }

    void pop()
    {
        if (top == nullptr)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        cout << temp->data << " popped from stack" << endl;
        delete temp;
    }

    void display()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        Node *temp = top;
        cout << "Stack elements are: ";
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void peek()
    {
        if (top == nullptr)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Top element is: " << top->data << endl;
        }
    }

    void isFull()
    {
        cout << "Stack can never be full (limited by memory)" << endl;
    }
};

int main()
{
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.display();
    stack.pop();
    stack.display();
    stack.peek();
    stack.isFull();
    return 0;
}