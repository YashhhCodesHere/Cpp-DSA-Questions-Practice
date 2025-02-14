#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;
    int freq;

    TrieNode(){
        isEndOfWord = false;
    }
};

class Trie {
    TrieNode* root;
public:
    Trie(){
        root = new TrieNode();
        root->freq = -1;
    }

    void insert(string word) {  // O(N*L)
        TrieNode* temp = root;
        for(char ch : word){
            if(temp->children.count(ch) == 0){
                temp->children[ch] = new TrieNode();
                temp->children[ch]->freq = 1;
            }else{
                temp->children[ch]->freq++;
            }
            temp = temp->children[ch];
        }
        temp->isEndOfWord = true;
    }

    bool search(string key){    // O(L)
        TrieNode* temp = root;
        
        for(auto ch : key){
            if(temp->children.find(ch) == temp->children.end()){
                return false;
            }
            temp = temp->children[ch];
        }
        return (temp->isEndOfWord);
    }

    string getPrefix(string key){
        TrieNode* temp = root;
        string prefix = "";
        
        for(int i = 0; i < key.size(); i++){
            prefix += key[i];
            if(temp->children[key[i]]->freq == 1){
                break;
            }
            temp = temp->children[key[i]];
        }
        return prefix;
    }
};

class Solution {
public:
    bool helper(Trie& trie, string key){
        if(key.size() == 0){
            return true;
        }

        for(int i = 0; i < key.size(); i++){
            string firstHalf = key.substr(0, i+1);
            string secondHalf = key.substr(i+1);

            if(trie.search(firstHalf) && helper(trie, secondHalf)){
                return true;
            }
        }

        return false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        Trie trie;
        // Building Trie:-
        for(int i = 0; i < wordDict.size(); i++){
            trie.insert(wordDict[i]);
        }

        return helper(trie, s);
    }
};