#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class PriorityQueue {
    vector<int> queue;

public:
    void enqueue(int value) {
        queue.push_back(value);
        push_heap(queue.begin(), queue.end(), greater<int>());
        cout << value << " enqueued to Priority Queue" << endl;
    }

    void dequeue() {
        if (queue.empty()) {
            cout << "Priority Queue is empty!" << endl;
            return;
        }
        pop_heap(queue.begin(), queue.end(), greater<int>());
        cout << queue.back() << " dequeued from Priority Queue" << endl;
        queue.pop_back();
    }

    void display() {
        if (queue.empty()) {
            cout << "Priority Queue is empty!" << endl;
            return;
        }
        cout << "Priority Queue elements: ";
        for (int value : queue) {
            cout << value << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;
    pq.enqueue(30);
    pq.enqueue(20);
    pq.enqueue(10);
    pq.display();
    pq.dequeue();
    pq.display();
    return 0;
}
