#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    string key;
    int val;
    Node* next;

    Node(string key, int val){
        this->key = key;
        this->val = val;
        next = nullptr;
    }

    ~Node(){
        if(next){
            delete next;
        }
    }
};

class HashTable{
    int totalSize;
    int currSize;
    Node** table;

    int hashFunction(string key) {   
        int idx = 0;
        for (int i = 0; i < key.size(); i++) {
            idx = (idx + (key[i] * key[i]) % totalSize) % totalSize;
        }
        return idx;
    }    

    void rehash(){
        Node** oldTable = table;
        int oldSize = totalSize;

        totalSize *= 2;
        currSize = 0;
        table = new Node*[totalSize];

        for(int i=0; i<totalSize; i++){
            table[i] = nullptr;
        }

        for(int i=0; i<oldSize; i++){
            Node* head = oldTable[i];
            while(head){
                insert(head->key, head->val);
                head = head->next;
            }

            if(oldTable[i]){
                delete oldTable[i];
            }
        }

        delete[] oldTable;
    }

public:
    // Constructor Call
    HashTable(int totalSize = 10){
        this->totalSize = totalSize;
        currSize = 0;

        table = new Node*[totalSize];

        for(int i=0; i<totalSize; i++){
            table[i] = nullptr;
        }
    }

    void insert(string key, int val){   // Avg Case: O(1), Worst Case: O(n)->At the time of Rehashing
        int idx = hashFunction(key);

        Node* newNode = new Node(key, val);
        
        newNode->next = table[idx];
        table[idx] = newNode;

        currSize++;

        // Rehashing:-
        double lambda = currSize/(double)totalSize;
        if(lambda > 0.7){
            rehash();
        }

    }

    bool exists(string key){
        int idx = hashFunction(key);

        Node* temp = table[idx];
        while(temp){
            if(temp->key == key){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    int search(string key) {
        int idx = hashFunction(key);
    
        Node* temp = table[idx];
        while(temp) {  
            if(temp->key == key) {
                return temp->val;
            }
            temp = temp->next;
        }
        return -1;
    }    

    void erase(string key){
        int idx = hashFunction(key);
        Node* temp = table[idx];
        Node* prev = nullptr;

        while(temp){
            if(temp->key == key){
                if(prev == nullptr){    // For deleting the head node
                    table[idx] = temp->next;
                }else{    // For Rest of the node
                    prev->next = temp->next;
                }
                // Deletion:-
                temp->next = nullptr;
                delete temp;
                currSize--;
                return;
            }
        }

        prev = temp;
        temp = temp->next;
    }

    void print(){
        for(int i = 0; i < totalSize; i++){
            cout << "Index " << i << " -> ";
            Node* temp = table[i];
            while(temp){
                cout << "(" << temp->key << ", " << temp->val << ") -> ";
                temp = temp->next;
            }
            cout << "NULL\n";
        }
    }
};

int main(){
    HashTable ht;
    ht.insert("India", 1000);
    ht.insert("Russia", 900);
    ht.insert("Us", 200);

    cout << ht.search("Russia") << "\n";

    ht.print();

    return 0;
}

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

    When currSize of Hash table exceeds a certain threshold, we get too many nodes at same index, 
    and we need to rehash the table. (REHASHING)
    Here:-
    Searching for an index = O(1), but traversing the linked list = O(λ), where λ is avg size of linked list;
    λ = x/n = load factor, where x is total elements(currSize), and n is total size of Hash Table.
    
    While Rehashing:- (Process of increasing the size of Hash Table)
    We set a threshold (λ), and when it exceeds, we double the size of Hash Table, and rehash all elements.
    For generally, λ > 0.7, we rehash the table.
*/