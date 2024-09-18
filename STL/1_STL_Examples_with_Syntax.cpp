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
using namespace std;

void vectorExample() {
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    int size = vec.size();
    int first = vec.front();
    int last = vec.back();
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
    int size = deq.size();
    int first = deq.front();
    int last = deq.back();
}

void stackExample() {
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    int top = stk.top();
    stk.pop();
}

void queueExample() {
    queue<int> que;
    que.push(1);
    que.push(2);
    int front = que.front();
    int back = que.back();
    que.pop();
}

void priorityQueueExample() {
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    int top = pq.top();
    pq.pop();
}

void setExample() {
    set<int> st;
    st.insert(1);
    st.insert(2);
    int size = st.size();
    auto it = st.find(1);
    st.erase(it);
}

void multisetExample() {
    multiset<int> mst;
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

void unorderedSetExample() {
    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    int size = us.size();
    auto it = us.find(1);
    us.erase(it);
}

void unorderedMapExample() {
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
    int sum = accumulate(vec.begin(), vec.end(), 0);
    int cnt = count(vec.begin(), vec.end(), 3);
    auto it = find(vec.begin(), vec.end(), 3);
    bool found = binary_search(vec.begin(), vec.end(), 3);
    auto lb = lower_bound(vec.begin(), vec.end(), 3);
    auto ub = upper_bound(vec.begin(), vec.end(), 3);
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

    return 0;
}
