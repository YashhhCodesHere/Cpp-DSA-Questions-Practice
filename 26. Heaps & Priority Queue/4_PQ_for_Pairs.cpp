#include <bits/stdc++.h>
using namespace std;

/*
    Class made memory allocation in Heaps, while Structs made their memory allocation in Stacks!
    For Class -> We perform operator overloading inside that particular class.
    For Struct -> We perform operator overloading making the struct.

    > : MaxHeap
    < : MinHeap
*/

struct ComparePair{
    bool operator () (pair<string, int> &p1, pair<string, int> &p2){
        return p1.first < p2.first;     // Reverse the < with > to make it in Min-Heap!
    }
};


int main(){
    priority_queue<pair<string, int>, vector<pair<string, int> >, ComparePair> pq;  // Default: MaxHeap

    pq.push(make_pair("Robinn", 95));
    pq.push(make_pair("Yash", 99));
    pq.push(make_pair("Harsh", 100));

    while(!pq.empty()){
        cout << "Name: " << pq.top().first << ", Marks: " << pq.top().second << "\n";
        pq.pop();
    }

    return 0;
}