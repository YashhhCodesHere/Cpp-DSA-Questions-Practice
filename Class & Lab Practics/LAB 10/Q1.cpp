#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insertNode(Node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
        return root;
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }

    return root;
}

Node* minValueNode(Node* node) {
    Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

Node* deleteNode(Node* root, int data) {
    if (root == NULL)
        return root;

    if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else {
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

bool searchNode(Node* root, int data) {
    if (root == NULL)
        return false;

    if (root->data == data)
        return true;

    if (data < root->data)
        return searchNode(root->left, data);
    else
        return searchNode(root->right, data);
}

void inorderTraversal(Node* root) {
    if (root == NULL)
        return;

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = NULL;
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Delete 20\n";
    root = deleteNode(root, 20);
    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Delete 30\n";
    root = deleteNode(root, 30);
    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Delete 50\n";
    root = deleteNode(root, 50);
    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    int key = 40;
    if (searchNode(root, key))
        cout << key << " found in the tree\n";
    else
        cout << key << " not found in the tree\n";

    return 0;
}