#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!tail) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void insertAtMiddle(int val, int pos) {
        if (pos <= 0) {
            insertAtBeginning(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;
        for (int i = 0; temp != nullptr && i < pos - 1; ++i) {
            temp = temp->next;
        }

        if (temp == nullptr || temp->next == nullptr) {
            insertAtEnd(val);
        } else {
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    cout << "Inserting 10 at the beginning: ";
    dll.insertAtBeginning(10);
    dll.display(); // Output: 10

    cout << "Inserting 20 at the beginning: ";
    dll.insertAtBeginning(20);
    dll.display(); // Output: 20 10

    cout << "Inserting 30 at the end: ";
    dll.insertAtEnd(30);
    dll.display(); // Output: 20 10 30

    cout << "Inserting 25 at middle: ";
    dll.insertAtMiddle(25, 1); // Insert 25 at position 1
    dll.display(); // Output: 20 25 10 30

    return 0;
}