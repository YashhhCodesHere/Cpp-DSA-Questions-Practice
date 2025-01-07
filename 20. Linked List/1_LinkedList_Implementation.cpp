#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }

    ~Node(){
        if(next != nullptr){
            delete next;
            next = nullptr;
        }
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = nullptr;
        tail = nullptr;
    }

    ~List(){
        if(head != nullptr){
            delete head;
            head = nullptr;
        }
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
            return;
        }
        newNode -> next = head;
        head = newNode;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
            return;
        }
        tail -> next = newNode;
        tail = newNode;
    }

    void insert(int val, int pos){
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 1; i < pos; i++){   // For 0th based index!
            if(temp == nullptr){    // Corner case -> When Position is greater than size of List!
                cout << "Position is INVALID!\n";
                return;
            }
            temp = temp -> next;
        }
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }

    void printList(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << "NULL\n";
    }
};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(4);
    ll.push_back(5);

    ll.insert(100, 2);

    ll.printList();

    return 0;
}