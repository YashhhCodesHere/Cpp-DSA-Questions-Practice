#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

/*
    Unordered Maps are implemented with the help of Hash Tables.
    Basic Operations:-
    1. Insertion: Average O(1), Worst O(n)
    2. Deletion: Average O(1), Worst O(n)
    3. Searching: Average O(1), Worst O(n)

    -> Unordered Maps are faster than Maps, as they aren't sorted.

    => Whenever it's given in question that the order of elements doesn't matter, always prefer unordered_map.

*/

int main(){
    unordered_map<string, int> ump;

    // Here, key which is string is converted into index using hash function.
    ump["India"] = 100;
    ump["USA"] = 80;
    ump["UK"] = 90;
    ump["Russia"] = 70;

    // Searching:-
    cout << ump["India"] << "\n"; // Returns the value associated with the key "India

    // For printing Key-Value pairs:-
    for(auto it : ump){
        cout << "Key = " << it.first << " & Value = " << it.second << "\n";
    }

    // Count: Returns 1 if the key is present, else 0:-
    if(ump.count("India")){   // Count acts as a search function, returns 1 if the key is present, else 0.
        cout << "Key is present in the map.\n";
    }else{
        cout << "Key is not present in the map.\n";
    }

    ump["India"] = 110; // Key is always Unique, so Value of India is Replaced(OverRidden) here.
    return 0;
}