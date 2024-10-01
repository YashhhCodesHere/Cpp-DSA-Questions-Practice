#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <utility> // Include for std::pair
using namespace std;

void vectorExample() {
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    int size = vec.size();
    int first = vec.front();
    int last = vec.back();
    
    for (int i = 3; i <= 5; ++i) {   // This is a range-based for loop for inserting elements into the vector
        vec.push_back(i);
    }
    for (const auto& elem : vec) {  // This is for each loop for printing elements of the vector
        cout << elem << " ";
    }
    cout << endl;
}

void listExample() {
    list<int> lst;
    lst.push_back(1);
    lst.push_front(2);
    int size = lst.size();
    int first = lst.front();
    int last = lst.back();
}

void dequeExample() {
    deque<int> deq;
    deq.push_back(1);
    deq.push_front(2);
    int size = deq.size();  // This will return the size of the deque
    int first = deq.front();    // This will return the first element of the deque
    int last = deq.back();  // This will return the last element of the deque
}

void stackExample() {
    stack<int> stk;
    stk.push(1);    // This will insert 1 at the top of the stack
    stk.push(2);    // This will insert 2 at the top of the stack
    int top = stk.top();    // This will return last element inserted in the stack
    stk.pop();  // This will remove the last element inserted in the stack
    stk.empty();    // This will return true if stack is empty
}

void queueExample() {
    queue<int> que;
    que.push(1);    // This will insert 1 at the back of the queue
    que.push(2);    // This will insert 2 at the back of the queue
    int front = que.front();    // This will return the front element of the queue
    int back = que.back();  // This will return the back element of the queue
    que.pop();  // This will remove the front element of the queue
}

void priorityQueueExample() {
    priority_queue<int> pq;     // This will create a max heap (inside tree data structure not Linear data structure)
    pq.push(1); // This will insert 1 in the priority queue
    pq.push(2); // This will insert 2 in the priority queue
    int top = pq.top(); // This will return the top element of the priority queue
    pq.pop();   // This will remove the top element of the priority queue

    priority_queue<int, vector<int>, greater<int>> min_pq; // This will create a min heap
    min_pq.push(3); // This will insert 3 in the min heap
    min_pq.push(4); // This will insert 4 in the min heap
    int min_top = min_pq.top(); // This will return the top element of the min heap
    min_pq.pop(); // This will remove the top element of the min heap
}

void setExample() {
    set<int> st;    // This will create a set Whose elements are sorted in ascending order & unique
    st.insert(1);   // This will insert 1 in the set
    st.insert(2);   // This will insert 2 in the set
    int size = st.size();   // This will return the size of the set
    auto it = st.find(1);   // This will return an iterator pointing to 1
    auto it2 = st.find(3);  // This will return an iterator pointing to the end of the set as 3 is not present i.e. st.end()
    st.count(1);    // This will return the count of 1 in the set
    st.erase(it);   // This will erase the element pointed by the iterator
}

void multisetExample() {    // Only Sorted Not Unique
    multiset<int> mst;  // This will create a multiset Whose elements are sorted in ascending order & can be repeated
    mst.insert(1);
    mst.insert(2);
    int size = mst.size();
    auto it = mst.find(1);
    mst.erase(it);
}

void mapExample() {
    map<int, int> mp;
    mp[1] = 2;
    mp.insert({3, 4});
    int size = mp.size();
    auto it = mp.find(1);
    mp.erase(it);
}

void multimapExample() {
    multimap<int, int> mmp;
    mmp.insert({1, 2});
    mmp.insert({3, 4});
    int size = mmp.size();
    auto it = mmp.find(1);
    mmp.erase(it);
}

void unorderedSetExample() {    //  Not Sorted But Unique. However, All the operation are same as set but just Upperbound() & Lowerbound() doesn't works
    unordered_set<int> us;  
    us.insert(1);
    us.insert(2);
    int size = us.size();
    auto it = us.find(1);
    us.erase(it);
}

void unorderedMapExample() {    // Key Value Pair
    unordered_map<int, int> ump;  
    ump[1] = 2;
    ump.insert({3, 4});
    int size = ump.size();
    auto it = ump.find(1);
    ump.erase(it);
}

void algorithmExample() {
    vector<int> vec = {1, 2, 3, 4, 5};
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    int max_val = *max_element(vec.begin(), vec.end());
    int min_val = *min_element(vec.begin(), vec.end()); 
    int sum = accumulate(vec.begin(), vec.end(), 0);    // Syntax: accumulate(start, end, initial_value) This will return the sum of all elements in the vector
    int cnt = count(vec.begin(), vec.end(), 3); // This will return the count of 3 in the vector
    auto it = find(vec.begin(), vec.end(), 3);  // This will return an iterator pointing to 3
    bool found = binary_search(vec.begin(), vec.end(), 3);  // This will return true if 3 is present in the vector
    auto lb = lower_bound(vec.begin(), vec.end(), 3);   // This will return an iterator pointing to the first element which is not less than 3
    auto ub = upper_bound(vec.begin(), vec.end(), 3);   // This will return an iterator pointing to the first element which is greater than 3
}

void pairExample() {
    pair<int, string> p;
    p.first = 1;
    p.second = "example";
    cout << "Pair: (" << p.first << ", " << p.second << ")" << endl;

    pair<int, string> p2 = make_pair(2, "another example");
    cout << "Pair: (" << p2.first << ", " << p2.second << ")" << endl;
}


int main() {
    vectorExample();
    listExample();
    dequeExample();
    stackExample();
    queueExample();
    priorityQueueExample();
    setExample();
    multisetExample();
    mapExample();
    multimapExample();
    unorderedSetExample();
    unorderedMapExample();
    algorithmExample();
    pairExample();

    return 0;
}
