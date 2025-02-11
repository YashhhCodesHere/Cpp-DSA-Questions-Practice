#include <iostream>
#include <map>
#include <string>

/*
    Maps uses a Self-Balancing BST (Red-Black Tree) to store the elements.
    Basic Operations:-
    1. Insertion: O(log n)
    2. Deletion: O(log n)
    3. Searching: O(log n) 

    -> Maps are always Sorted Ordered, hence they are slower than unordered_map.

    Maps are the STL containers that store elements in key-value pairs.
    The elements are stored in a sorted order based on the key, where the key is unique.
    The key is used to access the elements in the map, like an index in an array.

    Basic Syntax:-
                    map<key_type, value_type> mp;
*/
using namespace std;

int main(){
    map<int, string> mp;
    mp[101] = "Yash";
    mp[102] = "Harsh";
    mp[105] = "Abhay";

    cout << mp[102] << "\n";

    cout << mp[500] << "\n"; // Return an empty string as the key is not present in the map.

    mp[102] = "Raj";  // Replace the existing value "Harsh" of the key 102, with the new value "Raj".

    cout << mp.count(101) << "\n"; // Returns boolean value 1 -> if the key is present in the map, else 0.

    for(auto it : mp){
        cout << "Key = " << it.first << " & Value = " << it.second << "\n";
    }
    return 0;
}