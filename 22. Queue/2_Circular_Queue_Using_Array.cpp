#include <bits/stdc++.h>
using namespace std;

class CircularQueue{
    int *arr;

    int capacity;
    int size;

    int front, rear;
public:
    CircularQueue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];

        size = 0;
        front = 0;
        rear = -1;
    }

    void enqueue(int val){
        if(size == capacity){
            cout << "Queue is Full! Can't Enqueue...\n";
            return;
        }
        
        rear = (rear + 1) % capacity;
        arr[rear] = val;
        size++;
    }

    void dequeue(){
        if(isEmpty()){
            cout << "Queue is empty! Can't Dequeue...\n";
            return;
        }
        front = (front + 1) % capacity;
        size--;
    }

    int valAtFront(){
        if(isEmpty()){
            cout << "Queue is empty! Can't Dequeue...\n";
            return -1;
        }else{
            return arr[front];
        }
    }

    bool isEmpty(){
        return (size == 0);
    }
};

int main(){
    CircularQueue q(3);
    q.enqueue(10);
    q.enqueue(20);

    cout << q.valAtFront() << "\n";
    return 0;
}