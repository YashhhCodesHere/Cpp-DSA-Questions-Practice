#include<bits/stdc++.h>
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

class BinaryTree{
public:
    Node* root;
    
    BinaryTree(){
        root = nullptr;
    }
    
    void inOrder(Node* node){
        if(!node){
            return;
        }
        inOrder(node -> left);
        cout << node -> data << " ";
        inOrder(node -> right);
    }
    
    void preOrder(Node* node){
        if(!node){
            return;
        }
        cout << node -> data << " ";
        preOrder(node -> left);
        preOrder(node -> right);
    }
    
    void postOrder(Node* node){
        if(!node){
            return;
        }
        postOrder(node -> left);
        postOrder(node -> right);
        cout << node -> data << " ";
    }
    
    Node* insert(Node* node, int val){
        if(!node){
            return new Node(val);
        }
        if(val < node -> data){
            node -> left = insert(node -> left, val);
        }else if(val > node -> data){
            node -> right = insert(node -> right, val);
        }
        return node;
    }
    
    Node* findMin(Node* node){
        while(node && node -> left){
            node = node -> left;
        }
        return node;
    }
    
    Node* del(Node* node, int val){
        if(!node){
            return nullptr;
        }
        if(val < node -> data){
            node -> left = del(node -> left, val);
        }else if(val > node -> data){
            node -> right = del(node -> right, val);
        }else{
            if(!node->left){
                Node* temp = node -> right;
                delete node;
                return temp;
            }else if(!node -> right){
                Node* temp = node -> left;
                delete node;
                return temp;
            }
            
            Node* temp = findMin(node -> right);
            node -> data = temp -> data;
            node->right = del(node->right, temp-> data);
        }
        return node;
    }
};


int main(){
    BinaryTree tree;
    tree.root = tree.insert(tree.root, 50);
    tree.insert(tree.root, 100);
    tree.insert(tree.root, 200);
    tree.insert(tree.root, 300);
    tree.insert(tree.root, 400);
    tree.insert(tree.root, 500);
    tree.insert(tree.root, 600);
    
    tree.inOrder(tree.root);
    cout << "\n";
    tree.preOrder(tree.root);
    cout << "\n";
    tree.postOrder(tree.root);
    cout << "\n";

    return 0;
}