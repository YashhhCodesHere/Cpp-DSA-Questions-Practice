#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void print() const {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout <<"NULL"<< endl;
    }

private:
    Node* head;
};

int main() {
    LinkedList list;
    list.push(10);
    list.push(20);
    list.push(30);
    list.push(40);

    cout << "Original List: ";
    list.print();

    list.reverse();

    cout << "Reversed List: ";
    list.print();

    return 0;
}