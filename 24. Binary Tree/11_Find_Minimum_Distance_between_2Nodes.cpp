#include <iostream>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Helper function to find the LCA of two nodes
TreeNode* findLCA(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root || root == p || root == q) {
        return root;
    }

    // Search for nodes in left and right subtrees
    TreeNode* left = findLCA(root->left, p, q);
    TreeNode* right = findLCA(root->right, p, q);

    // If both sides return non-null, current node is LCA
    if (left && right) {
        return root;
    }

    // Return the non-null side
    return left ? left : right;
}

// Helper function to find the distance from a node to a target node
int findDistanceFromNode(TreeNode* root, TreeNode* target, int distance) {
    if (!root) {
        return -1;  // Return -1 if the target node is not found
    }

    if (root == target) {
        return distance;  // Return the distance if the target node is found
    }

    // Search left subtree
    int leftDistance = findDistanceFromNode(root->left, target, distance + 1);
    if (leftDistance != -1) {
        return leftDistance;
    }

    // Search right subtree
    return findDistanceFromNode(root->right, target, distance + 1);
}

// Function to calculate the distance between two nodes
int findDistance(TreeNode* root, TreeNode* p, TreeNode* q) {
    // Find the Lowest Common Ancestor (LCA) of p and q
    TreeNode* lca = findLCA(root, p, q);

    // Find the distances from LCA to p and q
    int distance1 = findDistanceFromNode(lca, p, 0);
    int distance2 = findDistanceFromNode(lca, q, 0);

    // Return the total distance
    return distance1 + distance2;
}

int main() {
    // Sample binary tree
    /*
                 1
                / \
               2   3
              / \
             4   5
    */
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    TreeNode* p = root->left->left;  // Node 4
    TreeNode* q = root->left->right; // Node 5

    int distance = findDistance(root, p, q);
    cout << "Distance between nodes " << p->val << " and " << q->val << " is: " << distance << endl;

    return 0;
}
