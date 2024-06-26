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
    int sum(TreeNode* node,int pathsum ){
        if(!node){
            return 0;
        }
         pathsum=pathsum*10+node->val;
         if(!node->left && !node->right){
           return pathsum;
         }
         return sum(node->left,pathsum)+ sum(node->right,pathsum);
    }
    int sumNumbers(TreeNode* root) {
       return sum(root,0);
    }

};