#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* buildTree(Node* root){
    cout << "Enter your data: ";
    int data;
    cin >> data;

    root = new Node(data);
    if(data == -1){
        return nullptr;
    }

    cout << "For left subchild: ";
    root -> left = buildTree(root -> left);

    cout << "For right subchild: ";
    root -> right = buildTree(root -> right);

    return root;
}

int main(){
    Node* root = nullptr;

    root = buildTree(root);
    
    return 0;
}