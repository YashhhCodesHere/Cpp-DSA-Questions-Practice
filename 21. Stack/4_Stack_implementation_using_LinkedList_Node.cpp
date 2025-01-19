#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node {
public:
    T data;
    Node* next;

    Node(T val) {
        data = val;
        next = nullptr;
    }
};

template <class T>
class Stack {
    Node<T>* head; // Use the template type <T> for the Node pointer
public:
    Stack() {
        head = nullptr;
    }

    void push(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void pop() {
        if (head == nullptr) {
            cout << "Can't POP -> Stack is Empty!\n";
            return;
        }
        Node<T>* toDelete = head;
        head = head->next;

        toDelete->next = nullptr;
        delete toDelete;
    }

    T top() {
        if (isEmpty()) {
            throw runtime_error("Stack is empty. No top element.");
        }
        return head->data;
    }

    bool isEmpty() {
        return (head == nullptr);
    }
};

int main() {
    Stack<int> s; // Use Stack<int> for integer stack
    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.isEmpty()) {
        cout << "Top: " << s.top() << endl;
        s.pop();
    }

    // Trying to pop from an empty stack
    s.pop();
    s.top();

    return 0;
}
