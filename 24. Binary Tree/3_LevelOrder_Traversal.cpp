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

TreeNode* buildTree(vector<int> nodes, int& idx){
    if(idx >= nodes.size() || nodes[idx] == -1){
        idx++;
        return nullptr;
    }

    TreeNode* currNode = new TreeNode(nodes[idx++]);
    currNode -> left = buildTree(nodes, idx);
    currNode -> right = buildTree(nodes, idx);

    return currNode;
}

// Printing Data in single line
void levelOrderTraversal(TreeNode* root){
    if(!root){
        return;
    }
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();

        cout << curr -> data << " ";

        if(curr -> left){
            q.push(curr -> left);
        }
        
        if(curr -> right){
            q.push(curr -> right);
        }
    }
}

// Printing data according to the levels
void levelOrderTraversalWithNull(TreeNode* root){
    if(!root){
        return;
    }

    queue<TreeNode*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();

        if(curr == nullptr){
            cout << "\n";
            if(!q.empty()){
                q.push(nullptr);
            }
        }else{
            cout << curr -> data << " ";

            if(curr -> left){
                q.push(curr -> left);
            }
        
            if(curr -> right){
                q.push(curr -> right);
            }
        }
    }
}

int main(){
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, 6, -1, -1};
    int idx = 0;

    TreeNode* root = buildTree(nodes, idx);

    levelOrderTraversal(root);
    cout << "\n\nLevel-Wise BFS:-\n";

    levelOrderTraversalWithNull(root);
    cout << "\n";

    return 0;
}