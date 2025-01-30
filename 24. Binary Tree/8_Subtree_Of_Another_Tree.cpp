struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isIdentical(TreeNode* p, TreeNode* q){
        // Both nodes are NULL
        if (p == nullptr && q == nullptr) 
            return true;
        
        // One node is NULL, or their values are different
        if (p == nullptr || q == nullptr || p->val != q->val) 
            return false;

        // Recursively check left and right subtrees
        return isIdentical(p->left, q->left) && isIdentical(p->right, q->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr && subRoot == nullptr){
            return true;
        }else if(root == nullptr || subRoot == nullptr){
            return false;
        }
        if(root -> val == subRoot -> val){
            if(isIdentical(root, subRoot)){
                return true;
            }
        }

        int isLeftSubtree = isSubtree(root->left, subRoot);
        if(!isLeftSubtree){
            return isSubtree(root -> right, subRoot);
        }
        return true;
    }
};