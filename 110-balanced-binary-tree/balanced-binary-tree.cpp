/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr)
            return true;
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        if(abs(left-right)<=1&& isBalanced(root->left)&&isBalanced(root->right))return true;
        return false;
        
    }
     int maxDepth(TreeNode* root) {
        int ans=0;
        if(root==nullptr)return ans;
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        ans=max(left,right)+1;
        return ans;
        
    }

};