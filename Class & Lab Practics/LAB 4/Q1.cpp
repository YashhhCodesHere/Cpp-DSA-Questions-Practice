#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        if(!head){
            head = newNode;
        }
        newNode->next = head;
        head = newNode;
    }

    void deleteValue(int value) {
        Node* temp = head;
        Node* prev = nullptr;

        if (temp != nullptr && temp->data == value) {
            head = temp->next;
            delete temp;
            return;
        }

        while (temp != nullptr && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) return;

        prev->next = temp->next;
        delete temp;
    }

    void traverse() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;
        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    ~SinglyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
};

int main() {
    SinglyLinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);

    cout << "List after insertion: ";
    list.traverse();

    list.deleteValue(20);
    cout << "List after deletion of 20: ";
    list.traverse();

    list.reverse();
    cout << "List after reversal: ";
    list.traverse();

    return 0;
}
