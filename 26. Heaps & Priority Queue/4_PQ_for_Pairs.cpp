#include <bits/stdc++.h>
using namespace std;

/*
    Class made memory allocation in Heaps, while Structs made their memory allocation in Stacks!
*/

int main(){
    priority_queue<pair<string, int> > pq;  // Default: MaxHeap

    pq.push(make_pair("Robinn", 95));
    pq.push(make_pair("Yash", 99));
    pq.push(make_pair("Harsh", 100));

    while(!pq.empty()){
        cout << "Name: " << pq.top().first << ", Marks: " << pq.top().second << "\n";
        pq.pop();
    }

    return 0;
}