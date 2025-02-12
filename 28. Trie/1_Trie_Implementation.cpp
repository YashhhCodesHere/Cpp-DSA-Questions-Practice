#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode(){
        isEndOfWord = false;
    }
};

class Trie {
    TrieNode* root;
public:
    Trie(){
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* temp = root;
        for(char ch : word){
            if(temp->children.count(ch) == 0){
                temp->children[ch] = new TrieNode();
            }
            temp = temp->children[ch];
        }
        temp->isEndOfWord = true;
    }

    bool search(string key){
        TrieNode* temp = root;
        
        for(auto ch : key){
            if(temp->children.find(ch) == temp->children.end()){
                return false;
            }
            temp = temp->children[ch];
        }
        return (temp->isEndOfWord);
    }
};

int main(){
    
    return 0;
}

/*
    Tries also known as 'Prefix Trees' or 'Retrieval Trees' are basically used to store strings that can be visualized as a graph. 
    (To solve string based (Pattern Matching) questions)
    Every Branch of the Trie represents a possible character of a word.
    Searching in a Trie is faster than hashing and binary search.
    It's used for:-
    1. Insertion & Searching Operations for strings (Retrieval Queries) -> TC: O(L) SC: O(N*L) where L is the length of the string and N is the number of strings.
    2. Prefix matching
    3. Sorting strings

    Trie is a k-ary tree or Generic tree, where k is the number of children of a node; 
    which can be 26 for characters 'a' to 'z'; or 52 for 'a' to 'z' and 'A' to 'Z'.
    However, we mostly use lowercase letters in the Trie, hence any node can have at most 26 children.

    While Building Trie, common prefixes of multiple words are stored only once.

    Time Complexity:-
    1. Insertion: O(N*L) where N is the number of strings and L is the length of the string.
    2. Searching: O(L) where L is the length of the string.
    3. Deletion: O(L) where L is the length of the string.
*/