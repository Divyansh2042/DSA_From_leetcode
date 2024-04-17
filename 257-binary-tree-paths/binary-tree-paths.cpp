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
    void dfs(TreeNode *root,vector<string>&ans,string path){
        if(root==nullptr){
            return;
        }
        path=path+to_string(root->val);
        path=path+"->";
        if(root->left==NULL && root->right==NULL)
        {
         path.erase(path.length()-2);
         ans.push_back(path);
         return;
        }
        dfs(root->left,ans,path);
        dfs(root->right,ans,path);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string s="";
        if(root==NULL)
            return ans;
        dfs(root,ans,s);

        return ans;
    }
};