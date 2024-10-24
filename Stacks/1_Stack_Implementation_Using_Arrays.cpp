#include <iostream>
using namespace std;

class Stack
{
public:
    int top;
    int arr[100];
    int maxSize;

    Stack(int size = 100)
    {
        top = -1;
        maxSize = size;
    }

    void push(int value)
    {
        if (top >= maxSize - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            arr[++top] = value;
            cout << value << " pushed into stack" << endl;
        }
    }

    void pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            int value = arr[top--];
            cout << value << " popped from stack" << endl;
        }
    }

    void display()
    {
        if (top < 0)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    void peek()
    {
        if (top < 0)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Top element is: " << arr[top] << endl;
        }
    }
        void isFull()
    {
        if (top >= maxSize - 1){
            cout << "Stack is full" << endl;
        }else{
            cout << "Stack is not full" << endl;
        }
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