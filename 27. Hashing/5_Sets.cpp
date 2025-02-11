#include <iostream>
#include <set>
using namespace std;

/*
    Sets are also same as unordered_set but they store the keys in sorted order, and it's implementation is just like maps.
    Time Complexity of Set is same as Maps Operations, i.e., O(log n).

    The insert() function in unordered_set returns a pair<iterator, bool>;
    where:-
        iterator → Points to the inserted element or the existing element if it was already present.
        bool → Indicates whether the insertion was successful (true if inserted, false if it was already there).
*/

int main(){
    set<int> s;
    s.insert(10);
    s.insert(50);
    s.insert(30);
    s.insert(20);
    s.insert(40);

    // Printing the set:- (It will be in sorted order)
    for(auto it : s){
        cout << it << " ";
    }
    cout << "\n";
    
    return 0;
}