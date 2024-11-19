#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    Node* root;
    BinaryTree() : root(nullptr) {}

    void insert(int value) { root = insertRec(root, value); }
    void deleteNode(int value) { root = deleteRec(root, value); }
    void inorder() { inorderRec(root); cout << endl; }
    void preorder() { preorderRec(root); cout << endl; }
    void postorder() { postorderRec(root); cout << endl; }

private:
    Node* insertRec(Node* node, int value) {
        if (!node) return new Node(value);
        if (value < node->data) node->left = insertRec(node->left, value);
        else if (value > node->data) node->right = insertRec(node->right, value);
        return node;
    }

    Node* deleteRec(Node* root, int key) {
        if (!root) return root;
        if (key < root->data) root->left = deleteRec(root->left, key);
        else if (key > root->data) root->right = deleteRec(root->right, key);
        else {
            if (!root->left) { Node* temp = root->right; delete root; return temp; }
            if (!root->right) { Node* temp = root->left; delete root; return temp; }
            Node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteRec(root->right, temp->data);
        }
        return root;
    }

    Node* minValueNode(Node* node) {
        while (node && node->left) node = node->left;
        return node;
    }

    void inorderRec(Node* root) {
        if (root) {
            inorderRec(root->left);
            cout << root->data << " ";
            inorderRec(root->right);
        }
    }

    void preorderRec(Node* root) {
        if (root) {
            cout << root->data << " ";
            preorderRec(root->left);
            preorderRec(root->right);
        }
    }

    void postorderRec(Node* root) {
        if (root) {
            postorderRec(root->left);
            postorderRec(root->right);
            cout << root->data << " ";
        }
    }
};

int main() {
    BinaryTree tree;
    int values[] = {50, 30, 20, 40, 70, 60, 80};
    for (int value : values) tree.insert(value);

    cout << "Inorder traversal: "; tree.inorder();
    cout << "Preorder traversal: "; tree.preorder();
    cout << "Postorder traversal: "; tree.postorder();

    cout << "Delete 20\n"; tree.deleteNode(20); cout << "Inorder traversal: "; tree.inorder();
    cout << "Delete 30\n"; tree.deleteNode(30); cout << "Inorder traversal: "; tree.inorder();
    cout << "Delete 50\n"; tree.deleteNode(50); cout << "Inorder traversal: "; tree.inorder();

    return 0;
}
