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
    int steps=0;
    int dfs(TreeNode* root){
        if(root==nullptr)return 0;
        int leftTraversal=dfs(root->left);
        int rightTraversal=dfs(root->right);
        steps+=abs(leftTraversal)+abs(rightTraversal);
        return (leftTraversal+rightTraversal+root->val-1);

    }
    int distributeCoins(TreeNode* root) {
       dfs(root);
       return steps;
    }
};