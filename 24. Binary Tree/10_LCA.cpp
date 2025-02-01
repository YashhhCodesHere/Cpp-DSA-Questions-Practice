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

// To Calculate path from root to any node having value 'n':-
bool rootToNodePath(TreeNode* root, int n, vector<int>& path){   //VVI
    if(!root){
        return false;
    }

    path.push_back(root -> data);

    if(root->data == n){
        return true;
    }

    if(rootToNodePath(root->left, n, path) || rootToNodePath(root->right, n, path)){
        return true;
    }

    path.pop_back();    // BackTrack... If not found that node!
    return false;
}


int LCA(TreeNode* root, int n1, int n2){
    vector<int> path1, path2;

    if(!rootToNodePath(root, n1, path1) || !rootToNodePath(root, n2, path2)){
        return -1;  // Return -1 if either any one or both node doesn't exist
    }

    int lca = -1;

    for(int i=0, j=0; i<path1.size() && j<path2.size(); i++, j++){
        if(path1[i] != path2[j]){
            break;
        }
        lca = path1[i];    // We can also put path2[j] here.
    }
    return lca;
}

int main(){
    
    return 0;
}