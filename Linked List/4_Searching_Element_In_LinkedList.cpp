#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList{
public :
    Node* head;

    LinkedList() : head(nullptr) {}
    
    void insertAtTail(int val){
        Node* newNode = new Node(val);
        Node* temp = head;

        if(head == nullptr){
            head = newNode;
            return;
        }

        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    } 

    void insertAtHead(int val){
        Node* newNode = new Node(val);
        newNode -> next = head;
        head = newNode;
    }

    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void search(int key){
        Node* temp = head;
        while(temp != nullptr){
            if(temp -> data == key){
                cout<< key <<" is present in the Linked List";
                return;
            }
            temp = temp -> next;
        }
        cout << key<<" is NOT present in the Linked List";
    }
};

int main(){
    LinkedList ll;
    
    for(int i=1;i<=5;i++){
        ll.insertAtTail(i);
    }
    for(int i=6;i<=10;i++){
        ll.insertAtHead(i);
    }
    ll.display();
    
    ll.search(11);


/*  For dynamically allocating Linkedlist:-
    // LinkedList* l1 = new LinkedList();
    // for(int i=6;i<=10;i++){
    //     l1->insertAtTail(i);
    // }
    // l1 -> display();
    return 0;
*/
}