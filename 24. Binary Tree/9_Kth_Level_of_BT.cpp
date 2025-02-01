#include <bits/stdc++.h>
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

// Iterative Approach:-
void printKthLevel(TreeNode* root, int k) {
    if (!root) {
        return;
    }

    queue<TreeNode*> q;
    q.push(root);
    q.push(nullptr); // Level separator
    int level = 1;

    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();

        if (curr == nullptr) {
            level++;
            if (!q.empty()) {
                q.push(nullptr); // Add level separator for the next level
            }
            continue;
        }

        if (level == k) {
            cout << curr->data << " ";
        }

        if (level > k) {
            return;
        }

        if (curr->left) {
            q.push(curr->left);
        }
        if (curr->right) {
            q.push(curr->right);
        }
    }
}

// Recursive Approach:-
void helper(TreeNode* root, int k, int level){
    if(root == nullptr){
        return;
    }

    if(level == k){
        cout << root -> data << " ";
        return;
    }

    helper(root -> left, k, level + 1);
    helper(root -> right, k, level + 1);
}

void printKthLevel(TreeNode* root, int k){
    helper(root, k, 1);
    cout << "\n";
}

int main(){
    
    return 0;
}