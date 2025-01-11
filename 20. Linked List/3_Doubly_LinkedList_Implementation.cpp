#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val): data(val), next(nullptr), prev(nullptr) {}
};

class DoublyList{
public:
    Node* head;
    Node* tail;

    DoublyList(){
        head = tail = nullptr;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        
        if(head == nullptr){    // While DBLL is empty!
            head = tail = newNode;
            return;
        }

        newNode -> next = head;     // Forward Linking
        head -> prev = newNode;     // Backward Linking

        head = newNode;     // Shifting head 
    }

    void pop_front(){
        Node* temp = head;
        head = head -> next;

        if(head != nullptr){    // To check if only one node present!
            head -> prev = nullptr;
        }
        temp -> next = nullptr;

        delete temp;
    }

    void printList(){
        Node* temp = head;

        while(temp != nullptr){
            cout << temp -> data << " <=> ";
            temp = temp -> next;
        }
        cout << "Null\n";
    }
};

int main(){
    DoublyList dbll;

    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);

    dbll.printList();

    dbll.pop_front();

    dbll.printList();

    return 0;
}