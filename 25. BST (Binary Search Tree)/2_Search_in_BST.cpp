#include <iostream>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = right = nullptr;
    }
};

// Guarantees when the key is present in the BST
TreeNode* search(TreeNode* root, int val){
    if(!root || root->data == val){
        return root;
    }

    if(val < root->data){
        return search(root->left, val);
    }else{
        return search(root->right, val);
    }
}

bool searchBST(TreeNode* root, int key){
    if(!root){
        return false;
    }

    if(key == root->data){
        return true;
    }

    if(key < root->data){
        return searchBST(root->left, key);
    }else if(key > root->data){
        return searchBST(root->right, key);
    }
}

int main(){
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);

    TreeNode* result = search(root, 5);
    if(result != nullptr){
        cout << "Found: " << result->data << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}