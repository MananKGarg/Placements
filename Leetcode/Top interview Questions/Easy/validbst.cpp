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
    vector <int> v;
public:
    
    
    
    vector <int> inorder(TreeNode* root){
        if(root == NULL) return v;
        inorder(root -> left);
        v.push_back(root -> val);
        inorder(root->right);
        return v;
    }
    
    bool isValidBST(TreeNode* root) {
        bool valid = true;
        vector <int> v1 = inorder(root);

        
        for(int i = 1; i < v1.size(); i++){
            if(v1[i] <= v1[i-1]){
                valid = false;
                break;
            }
        }
            return valid;
        
    }
};
