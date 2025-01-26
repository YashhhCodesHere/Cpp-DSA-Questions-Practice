#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to build the binary tree from an array
TreeNode* buildTree(vector<int>& nodes, int& idx) {
    if (idx >= nodes.size() || nodes[idx] == -1) {
        idx++;
        return nullptr;
    }

    TreeNode* root = new TreeNode(nodes[idx++]);
    root->left = buildTree(nodes, idx);
    root->right = buildTree(nodes, idx);
    return root;
}

// In-order traversal (Left -> Root -> Right)
void inorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

// Pre-order traversal (Root -> Left -> Right)
void preorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Post-order traversal (Left -> Right -> Root)
void postorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1}; // -1 indicates null
    int idx = 0;

    TreeNode* root = buildTree(nodes, idx);

    cout << "Pre-order Traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "In-order Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Post-order Traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}
