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

void topView(TreeNode* root){
    if(!root){
        return;
    }

    // We'll perform Level Order Traversal here
    queue<pair<int, TreeNode*>> q; // (Horizontal Distance, Node)
    map<int, int> mpp; // (Horizontal Distance, Node->data)

    q.push(make_pair(0, root));

    while(!q.empty()){  
        pair<int, TreeNode*> curr = q.front();  // (Horizontal Distance, Node)
        q.pop();

        if(!mpp.count(curr.first)){
            mpp[curr.first] = curr.second -> data;
        }

        // Traverse left and right child nodes
        if(curr.second -> left){
            q.push(make_pair(curr.first - 1, curr.second -> left));
        }

        if(curr.second -> right){
            q.push(make_pair(curr.first + 1, curr.second -> right));
        }  
    }
    for(auto it : mpp){
        cout << it.second << " ";
    }
}

int main(){
    
    return 0;
}