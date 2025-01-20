#include<iostream>
using namespace std;

template <class T>
class Node{
public:
    T data;
    Node* next;

    Node(T val){
        data = val;
        next = nullptr;
    }
};

template <class T>
class Queue{
    Node<T>* head;
    Node<T>* tail;
public:
    Queue(){
        head = tail = nullptr;
    }

    void enqueue(T val){
        Node<T>* newNode = new Node<T>(val);
        if(isEmpty()){
            head = tail = newNode;
        }else{
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout << "Can't DEQUEUE! Queue is empty...\n";
        }else{
            Node<T>* toDelete = head;
            head = head -> next;

            toDelete -> next = nullptr;
            delete toDelete;
        }
    }

    T front(){
        if(isEmpty()){
            throw runtime_error("Queue is empty");
        }
        return head->data;
    }

    bool isEmpty(){
        return (head == nullptr);
    }

    void printQueue(){
        Node<T>* current = head;
        while(current != nullptr){
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }
};

int main(){
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.printQueue();

    cout << q.front() << "\n";

    cout << q.front() << "\n";

    return 0;
}