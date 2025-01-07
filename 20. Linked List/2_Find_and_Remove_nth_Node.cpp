#include <bits/stdc++.h>
using namespace std;

/*
    Any Node (n) from the 'end' = (size - n + 1) from the 'front'
*/

class Node{
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class List{
public:
    Node* head;

    List(){
        head = nullptr;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        newNode -> next = head;
        head = newNode;
    }

//  Using Formula/Relation:-
    void remove_from_last(int n){
        Node* temp = head;
        int size = 0;
        while(temp != nullptr){
            size++;
            temp = temp -> next;
        }
        temp = head;
        for(int i = 1; i < (size - n); i++){
            temp = temp -> next;
        }
        Node* toDelete = temp -> next;
        temp -> next = temp -> next -> next;
        delete toDelete;
    }

//  By reversing:-
    void remove(int n){
        reverse();
        Node* temp = head;
        for(int i = 1; i < n-1; i++){
            temp = temp -> next;
        }
        Node* toDelete = temp -> next;
        temp -> next = temp -> next -> next;
        delete toDelete;
        reverse();
    }

    void reverse(){
        Node* prev = nullptr;
        Node* curr = head;
        Node* forw = nullptr;

        while(curr != nullptr){
            forw = curr -> next;

            curr -> next = prev;
            prev = curr;
            curr = forw;
        }
        head = prev;
    }

    void display(){
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
    ll.push_front(60);
    ll.push_front(50);
    ll.push_front(40);
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);

    ll.display();

    ll.remove(2);

    ll.display();

    return 0;
}