#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {
        cout << "Inserted node with value: " << val << endl;
    }
};

bool isBSTUtil(Node* node, Node* left, Node* right) {
    if (node == nullptr)
        return true;

    if (left != nullptr && node->data <= left->data)
        return false;

    if (right != nullptr && node->data >= right->data)
        return false;

    return isBSTUtil(node->left, left, node) && isBSTUtil(node->right, node, right);
}

bool isBST(Node* root) {
    return isBSTUtil(root, nullptr, nullptr);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(15);
    root->right->right = new Node(25);

    if (isBST(root))
        cout << "The tree is a BST" << endl;
    else
        cout << "The tree is not a BST" << endl;

    return 0;
}