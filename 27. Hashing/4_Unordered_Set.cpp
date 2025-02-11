#include <iostream>
#include <unordered_set>
using namespace std;

/*
    Unordered Set is also just like unordered map but it doesn't store key-value pairs, as it only stores keys.
    Time Complexity of Unordered Set is same as Unordered Map.

    Basic Syntax:-
                    unordered_set<key_type> us;
*/

int main(){
    unordered_set<int> us;
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(10);
    us.insert(10);

    cout << "Size of the set: " << us.size() << "\n"; // Returns 3, as 10 is inserted 3 times but it stores only unique keys.

    us.erase(20);  // Removes 20 from the set.

    if(us.find(20) != us.end()){    // Returns an iterator to the element if found, else returns us.end().
        cout << "20 is present in the set.\n";
    }else{
        cout << "20 is not present in the set.\n";
    }

    for(auto it : us){
        cout << it << " ";
    }
    cout << "\n";
    
    return 0;
}