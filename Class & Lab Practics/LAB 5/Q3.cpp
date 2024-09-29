#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
public:
    DoublyLinkedList() : head(nullptr) {}

    void append(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void reverse() {
        Node* temp = nullptr;
        Node* current = head;
        while (current) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }
        if (temp) head = temp->prev;
    }

    void printList() const {
        for (Node* temp = head; temp; temp = temp->next) cout << temp->data << " ";
        cout << endl;
    }

private:
    Node* head;
};

int main() {
    DoublyLinkedList dll;
    for (int i = 1; i <= 5; ++i) dll.append(i);

    cout << "Original list: ";
    dll.printList();

    dll.reverse();

    cout << "Reversed list: ";
    dll.printList();

    return 0;
}
