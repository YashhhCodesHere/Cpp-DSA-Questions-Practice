#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
public:
    Node(int val){
        data = val;
        next = nullptr;
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

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
            return;
        }
        newNode -> next = head;
        head = newNode;
    }
};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    return 0;
}