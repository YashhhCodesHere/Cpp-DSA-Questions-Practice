#include <iostream>
#include <queue>    // For Priority Queue
#include <vector>
using namespace std;

/*
    We'll use vector to implement Heap here!
    Complete Binary Tree can be flattened into an array/vector!
    Formula for getting any node (root) at index 'i':-  (From Parent-Child Relationship)
    -> Left Child: (2*i) + 1
    -> Right Child: (2*i) + 2
    -> Parent: (i-1)/2
*/

class Heap{
    vector<int> vec;
public:

    void push(int val){
        vec.push_back(val); // Pushed at the end of the array

        // Fix the heap:-
        int childIdx = vec.size() - 1;
        int parentIdx = (childIdx-1) / 2;

        while(parentIdx >= 0 && vec[childIdx] > vec[parentIdx]){    // O(logn)  // For min heap: swap(>, <)
            swap(vec[childIdx], vec[parentIdx]);
            childIdx = parentIdx;
            parentIdx = (childIdx - 1) / 2;
        }
    }

    // Helper function for pop:-
    void heapify(int parentIdx){
        if(parentIdx >= vec.size()){
            return;
        }

        int leftChild = (2*parentIdx) + 1;
        int rightChild = (2*parentIdx) + 2;
        int maxIdx = parentIdx;

        if(leftChild < vec.size() && vec[leftChild] > vec[maxIdx]){     // For min heap: swap(>, <)
            maxIdx = leftChild;
        }
        if(rightChild < vec.size() && vec[rightChild] > vec[maxIdx]){   // For min heap: swap(>, <)
            maxIdx = rightChild;
        }
        
        swap(vec[parentIdx], vec[maxIdx]);

        if(maxIdx != parentIdx){
            heapify(maxIdx);    // Swapped Child node's index passed
        } 
    }

    void pop(){
        // Swap Last Element with Root Element
        swap(vec[0], vec[vec.size()-1]);

        // Pop the Last Element
        vec.pop_back();

        // Heapify for fixing the rest of the Heap properties
        heapify(0);
    }

    int top(){
        return vec[0];
    }

    bool isEmpty(){
        return (vec.size() == 0);
    }
};

int main(){
    Heap hp;
    hp.push(100);
    hp.push(10);
    hp.push(5000);
    hp.push(9);
    hp.push(10000);

    cout << hp.top() << "\n";

    hp.pop();

    cout << hp.top() << "\n";
    return 0;
}