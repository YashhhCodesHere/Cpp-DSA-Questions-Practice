#include <iostream>
#include <queue>

/*
->  Priority Queue stores elements in sorted order.
    By default, it's a Max Heap.
    We can also create Min Heap using:-
        priority_queue<type, container, comparator> name;

    Max Heap -> Largest Element at Top
    Min Heap -> Smallest Element at Top

    Priority Queue is implemented using Binary Heap, i.e., it's a complete binary tree.

    Time Complexity of some basic operation of Priority Queue:-
    1. Push: O(logn)
    2. Pop: O(logn)
    3. Top: O(1)

    So, We conclude that, the following are made up of:- (-> : Made up of)
    Priority Queue (STL) -> Heap (Visualized as CBT) -> Array/Vector (Implementation/Code)



->  Heaps are basically a Complete Binary Tree.[Visualize it as a CBT]
    But, we represent it using an array or vector. (Space Efficient)
    * We never use Node class to implement Heap.    [ As, Operations will take larger time! ]

    Here, in heap: Nodes are filled with data from top to bottom via left to right.

    In Heap, we've two types:-
    1. Max Heap : Parent Node >= Child Node
    2. Min Heap : Parent Node <= Child Node

*/

using namespace std;

int main(){
    priority_queue<int> pq; // Max Heap
    pq.push(10);
    pq.push(15);
    pq.push(5);
    pq.push(20);
    pq.push(9);

    cout << "Elements in Priority Queue(Output from largest to smallest[Descending]): ";
    while(!pq.empty()){ // Print all elements in descending order (Max Heap)
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n\n";

    priority_queue<int, vector<int>, greater<int> > pq2; // Min Heap
    pq2.push(10);
    pq2.push(15);
    pq2.push(5);
    pq2.push(20);
    pq2.push(9);

    cout << "Elements in Priority Queue(Output from smallest to largest[Ascending]): ";
    while(!pq2.empty()){ // Print all elements in ascending order (Min Heap)
        cout << pq2.top() << " ";
        pq2.pop();
    }
    cout << endl;

    return 0;
}