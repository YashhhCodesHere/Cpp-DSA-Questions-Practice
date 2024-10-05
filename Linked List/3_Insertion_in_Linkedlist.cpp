#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;   // Creating a pointer to the next node.

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        head = nullptr;
    }
    
    void insertAtHead(int val){
        // Step 1: Create a new Node
        Node* newNode = new Node(val);

        // Step 2: Set next of newNode to the current head
        newNode -> next = head;

        // Step 3: Set newNode as the head
        head = newNode;
    }

    void insertAtTail(int val){
        Node* newNode = new Node(val);
        Node* current = head;

        if(head == nullptr){
            head = newNode;
            return;
        }

        while(current -> next != nullptr){
            current = current -> next;
        }

        current -> next = newNode;
    }

    int displayHead(){
        if(head == nullptr){
            return -1;
        }else{
            return head -> data;
        }
    }

    int displayTail(){
        if(head == nullptr){
            return -1;
        }else{
            Node* current = head;
            while(current -> next != nullptr){
                current = current -> next;
            }
            return current -> data;
        }
    }

    void display(){
        if(head == nullptr){
            return;
        }else{
            Node* current = head;
            while(current != nullptr){
                cout<< current -> data << " -> ";
                current = current -> next;
            }
            cout<<"NullPtr!"<<endl;
        }
    }
};

int main()
{
    LinkedList list;    // Creating an object of LinkedList class.
    LinkedList* ll = new LinkedList();  // Creating a pointer to the object of LinkedList class.

    list.insertAtHead(10);
    list.insertAtHead(30);
    ll -> insertAtHead(80);
    list.insertAtTail(100);
    cout<<"The value at head of 'list' is: " << list.displayHead() << endl;
    cout<<"The value at head of 'll' is: " << ll -> displayHead() << endl;
    cout<<"The value at tail of 'list' is: " << list.displayTail() << endl;

    cout<<"Element of the Linked-List are:\n";
    list.display();

    return 0;
}