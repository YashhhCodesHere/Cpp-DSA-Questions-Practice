#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* insert(TreeNode* root, int key) {
    if (root == NULL) {
        return new TreeNode(key);
    }
    if (key < root->val) {
        root->left = insert(root->left, key);
    } else {
        root->right = insert(root->right, key);
    }
    return root;
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == NULL) return NULL;

    if (root->val > p->val && root->val > q->val) {
        return lowestCommonAncestor(root->left, p, q);
    }
    if (root->val < p->val && root->val < q->val) {
        return lowestCommonAncestor(root->right, p, q);
    }
    return root;
}

int main() {
    TreeNode* root = NULL;
    root = insert(root, 20);
    insert(root, 10);
    insert(root, 30);
    insert(root, 5);
    insert(root, 15);
    insert(root, 25);
    insert(root, 35);

    TreeNode* p = root->left; // Node with value 10
    TreeNode* q = root->right; // Node with value 30

    TreeNode* lca = lowestCommonAncestor(root, p, q);
    if (lca != NULL) {
        cout << "Lowest Common Ancestor of " << p->val << " and " << q->val << " is " << lca->val << endl;
    } else {
        cout << "Lowest Common Ancestor not found." << endl;
    }

    return 0;
}