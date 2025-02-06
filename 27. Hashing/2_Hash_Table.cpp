#include <bits/stdc++.h>
using namespace std;

/*
    Hash Tables are used to store key-value pairs, implemented with the help of arrays.
    It is used for unordered data, and retrieval of data with the help of key in O(1) time.
    Avg Case of Basic Operation of Hash Table: O(1) i.e., for push(), pop(), find(), erase() etc.
    But, in worst case, it can be O(n) as well, if all elements are stored at same index.

    Hash Table is implemented with the help of Hash Function, which maps keys to values.
    It is implemented with the help of Arrays, and we can use STL's unordered_map for the same.

    We can also use our own implementation of Hash Table, with the help of Arrays, and Collision Handling Techniques.

    Hash Functions:-
    They are like a Black Box which returns index of our hash table array when key is passed:  

                            Key -> Hash Function -> Index

*   Hash Functions should be efficient, and should distribute keys uniformly across the Hash Table performing fast implementation!

    Some of the Hash Functions are:-                        
    1. Division Method: h(k) = k % m, where m is size of Hash Table. (Easy to implement, but not efficient)
    2. Multiplication Method: h(k) = [m * (kA mod 1)], where A is a constant, and 0 < A < 1.
    3. Universal Hashing: h(k) = [(ak + b) mod p] mod m, where a, b are random numbers, and p is a prime number.


    Collision Handling Techniques:-
    1. Chaining: We store multiple elements at same index, with the help of linked list.
    2. Open Addressing: We store elements at next available index, if collision occurs.
    3. Double Hashing: We use two hash functions, to find next available index.

*/

int main(){
    
    return 0;
}