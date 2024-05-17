class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        // if(root->val==target)return nullptr;
        // Perform a post-order traversal to ensure that we check leaf nodes correctly
        if (!root) return nullptr;

        // Recursively call the function on the left and right children
        root->left = removeLeafNodes(root->left, target);
        root->right = removeLeafNodes(root->right, target);

        // Check if the current node is a leaf node and has the target value
        if (!root->left && !root->right && root->val == target) {
            // Free the memory if required (if you're not using garbage collection)
            return nullptr; // Return nullptr to indicate this node should be removed
        }

        return root; // Return the possibly updated root node
    }
};
