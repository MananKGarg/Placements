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
    TreeNode* insertIntoBST(TreeNode* root, int key) {
        TreeNode* headroot = root;
        if(root == NULL){
            headroot = new TreeNode();
            headroot -> val = key;
            return headroot;
        }
        
        
        
        while(root != NULL){
            
            if(root -> val > key){
                if(root -> left == NULL){
                    root -> left = new TreeNode();
                    root -> left -> val = key;
                    return headroot;
                    
                }
                else{
                    root = root -> left;
                }
            }
            
            else{
                if(root -> right == NULL){
                    root -> right = new TreeNode();
                    root -> right -> val = key;
                    return headroot;
                }
                else{
                    root = root -> right;
                }
            }
            
        }
        return headroot;
        
        
    }
};
