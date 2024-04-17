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
    void dfs(string &smallest,string path,TreeNode* root){
        if(root==nullptr){
            return;
        }
        path+=char('a'+root->val);
        if(root->left==nullptr && root->right==nullptr){
           reverse(path.begin(),path.end());
           if(smallest.empty()||path<smallest){
            smallest=path;
           }
           reverse(path.begin(),path.end());
        }
        dfs(smallest,path,root->left);
        dfs(smallest,path,root->right);
    }
    string smallestFromLeaf(TreeNode* root) {
        string smallest;
        dfs(smallest,"",root);
        return smallest;
    }
};