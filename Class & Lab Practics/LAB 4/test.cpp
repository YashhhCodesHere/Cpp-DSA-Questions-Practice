#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    
    Node(int val){
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
        Node* newNode = new Node(val);
        if(!head){
            head = newNode;
            return;
        }
        newNode -> next = head;
        head = newNode;
    }
    
    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if(!head){
            head = newNode;
            return;
        }
        Node* temp = head;
        
        while(temp -> next != nullptr){
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
    
    void del(int val){
        Node* temp = head;
        while(temp -> data != val){
            temp = temp -> next;
        }
        Node* toDelete = temp -> next;
        temp -> next = temp -> next -> next;
        delete toDelete;
    }
    
    void rev(){
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;
        while(curr != nullptr){
            next = curr -> next;
            
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    
    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data << " -> ";
            temp = temp -> next;
            
        }
        cout << "Null!\n";
    }
    
    void detectLoop(){
        Node* slow = head;
        Node* fast = head;
        while(slow && fast && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast){
                cout << "Loop Detected!";
                return;
            }
        }
        cout << "No LOOP!";
    }
};

int main(){
    LinkedList list;
    list.insertAtHead(20);
    list.insertAtHead(50);
    list.insertAtEnd(10);
    list.display();
    list.rev();
    list.display();
    list.detectLoop();
}