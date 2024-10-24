#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int* queue;
    int capacity;

public:
    Queue(int c) {
        front = rear = 0;
        size = 0; // Initialize size to 0
        capacity = c;
        queue = new int[capacity];
    }

    ~Queue() {
        delete[] queue;
    }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }
        queue[rear] = data;
        rear = (rear + 1) % capacity;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        front = (front + 1) % capacity;
        size--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return queue[front];
    }

    bool isFull() {
        return size == capacity;
    }

    bool isEmpty() {
        return size == 0;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        for (int i = 0; i < size; i++) {
            cout << queue[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.display();

    cout << "Front element is: " << q.peek() << endl;

    q.enqueue(60);
    q.display();

    return 0;
}