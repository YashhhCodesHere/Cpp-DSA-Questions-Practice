#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            head->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void deleteNode(int value) {
        if (!head) return;

        Node* temp = head;
        Node* prev = nullptr;

        // If the node to be deleted is the head node
        if (head->data == value) {
            while (temp->next != head) {
                temp = temp->next;
            }
            if (head == head->next) {
                delete head;
                head = nullptr;
            } else {
                temp->next = head->next;
                delete head;
                head = temp->next;
            }
            return;
        }

        // If the node to be deleted is not the head node
        do {
            prev = temp;
            temp = temp->next;
        } while (temp != head && temp->data != value);

        if (temp->data == value) {
            prev->next = temp->next;
            delete temp;
        }
    }

    void traverse() {
        if (!head) return;

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;
    cll.insert(10);
    cll.insert(20);
    cll.insert(30);
    cll.insert(40);

    cout << "Circular Linked List: ";
    cll.traverse();

    cll.deleteNode(20);
    cout << "After deleting 20: ";
    cll.traverse();

    cll.deleteNode(10);
    cout << "After deleting 10: ";
    cll.traverse();

    return 0;
}