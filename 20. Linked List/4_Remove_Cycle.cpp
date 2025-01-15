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

    void pop_front(){
        if(head == nullptr){
            cout << "List is already empty!\n";
            return;
        }
        Node* temp = head;
        head = head -> next;

        temp -> next = nullptr;
        delete temp;
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

    void pop_back(){
        Node* temp = head;
        while(temp -> next -> next != nullptr){
            temp = temp -> next;
        }
        Node* toDelete = temp -> next;
        tail = temp;
        temp -> next = nullptr;
        delete toDelete;
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

    int search_itr(int key){
        cout << "Element found at index: ";
        Node* temp = head;
        int idx = 0;

        while(temp != nullptr){
            if(temp -> data == key){
                return idx;
            }
            idx++;
            temp = temp -> next;
        }
        return -1;  // Key Not Found!
    }

//  Searching through Recursion:-
    int helper_for_search_rec(Node* temp, int key){
        if(temp == nullptr){    // Base Case -> When Key not found!
            return -1;
        }

        if(temp -> data == key){    // Searching!
            return 0;
        }
        int idx = helper_for_search_rec(temp -> next, key);

        if(idx == -1){
            return -1;
        }
        return idx + 1;

    }
    int search_rec(int key){
        return helper_for_search_rec(head, key);
    }

    void reverse(){
        Node* prev = nullptr;
        Node* curr = head;
        Node* forw = nullptr;
        tail = head;

        while(curr != nullptr){
            forw = curr -> next;

            curr -> next = prev;
            prev = curr;
            curr = forw;
        }
        head = prev;
        printList();
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

Node* remove_cycle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast -> next != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast){
            slow = head;
            cout << "Cycle Detected!\n";
            Node* prev = nullptr;
            while(slow != fast){
                prev = fast;
                
                slow = slow -> next;
                fast = fast -> next;
            }
            cout << "Removing Cycle!\n";
            prev -> next = nullptr;
            return slow;
        }
    }
    cout << "Cycle isn't detected!\n";
    return nullptr;
}

int main(){
    
    return 0;
}