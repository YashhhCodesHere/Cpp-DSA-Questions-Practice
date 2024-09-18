#include <bits/stdc++.h>
using namespace std;
int main(){

    // Standard Template Library (STL) in C++:

    // 1. Vector:
    #include <vector>
    // Syntax: vector<T> vec;
    // Functions: push_back(), pop_back(), size(), clear(), empty(), at(), front(), back()
    // Example:
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    int size = vec.size();
    int first = vec.front();
    int last = vec.back();

    // 2. List:
    #include <list>
    // Syntax: list<T> lst;
    // Functions: push_back(), push_front(), pop_back(), pop_front(), size(), clear(), empty(), front(), back()
    // Example:
    list<int> lst;
    lst.push_back(1);
    lst.push_front(2);
    int size = lst.size();
    int first = lst.front();
    int last = lst.back();

    // 3. Deque:
    #include <deque>
    // Syntax: deque<T> deq;
    // Functions: push_back(), push_front(), pop_back(), pop_front(), size(), clear(), empty(), at(), front(), back()
    // Example:
    deque<int> deq;
    deq.push_back(1);
    deq.push_front(2);
    int size = deq.size();
    int first = deq.front();
    int last = deq.back();

    // 4. Stack:
    #include <stack>
    // Syntax: stack<T> stk;
    // Functions: push(), pop(), size(), empty(), top()
    // Example:
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    int top = stk.top();
    stk.pop();

    // 5. Queue:
    #include <queue>
    // Syntax: queue<T> que;
    // Functions: push(), pop(), size(), empty(), front(), back()
    // Example:
    queue<int> que;
    que.push(1);
    que.push(2);
    int front = que.front();
    int back = que.back();
    que.pop();

    // 6. Priority Queue:
    #include <queue>
    // Syntax: priority_queue<T> pq;
    // Functions: push(), pop(), size(), empty(), top()
    // Example:
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    int top = pq.top();
    pq.pop();

    // 7. Set:
    #include <set>
    // Syntax: set<T> st;
    // Functions: insert(), erase(), size(), clear(), empty(), find(), count(), begin(), end()
    // Example:
    set<int> st;
    st.insert(1);
    st.insert(2);
    int size = st.size();
    auto it = st.find(1);
    st.erase(it);

    // 8. Multiset:
    #include <set>
    // Syntax: multiset<T> mst;
    // Functions: insert(), erase(), size(), clear(), empty(), find(), count(), begin(), end()
    // Example:
    multiset<int> mst;
    mst.insert(1);
    mst.insert(2);
    int size = mst.size();
    auto it = mst.find(1);
    mst.erase(it);

    // 9. Map:
    #include <map>
    // Syntax: map<Key, T> mp;
    // Functions: insert(), erase(), size(), clear(), empty(), find(), count(), begin(), end(), at(), []
    // Example:
    map<int, int> mp;
    mp[1] = 2;
    mp.insert({3, 4});
    int size = mp.size();
    auto it = mp.find(1);
    mp.erase(it);

    // 10. Multimap:
    #include <map>
    // Syntax: multimap<Key, T> mmp;
    // Functions: insert(), erase(), size(), clear(), empty(), find(), count(), begin(), end()
    // Example:
    multimap<int, int> mmp;
    mmp.insert({1, 2});
    mmp.insert({3, 4});
    int size = mmp.size();
    auto it = mmp.find(1);
    mmp.erase(it);

    // 11. Unordered Set:
    #include <unordered_set>
    // Syntax: unordered_set<T> us;
    // Functions: insert(), erase(), size(), clear(), empty(), find(), count(), begin(), end()
    // Example:
    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    int size = us.size();
    auto it = us.find(1);
    us.erase(it);

    // 12. Unordered Map:
    #include <unordered_map>
    // Syntax: unordered_map<Key, T> ump;
    // Functions: insert(), erase(), size(), clear(), empty(), find(), count(), begin(), end(), at(), []
    // Example:
    unordered_map<int, int> ump;
    ump[1] = 2;
    ump.insert({3, 4});
    int size = ump.size();
    auto it = ump.find(1);
    ump.erase(it);

    // 13. Algorithm:
    #include <algorithm>
    #include <numeric>
    // Functions: sort(), reverse(), max(), min(), accumulate(), count(), find(), binary_search(), lower_bound(), upper_bound()
    // Example:
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

    return 0;
}