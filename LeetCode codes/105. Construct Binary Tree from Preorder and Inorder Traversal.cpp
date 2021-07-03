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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        TreeNode* root;
        root = buTree(preorder, inorder);
        return root;
    }
    
    TreeNode* buTree(vector<int>& preorder, vector<int> inorder){
        
        TreeNode* root = new TreeNode();
        if(inorder.size() == 0){
            root = NULL;
            return root;
        }
        
        auto it = find(inorder.begin(),inorder.end(),preorder[0]);
        int pos = it - inorder.begin();
        
        root -> val = preorder[0];
        preorder.erase(preorder.begin());
 
        vector <int> in_left;
        in_left.assign(inorder.begin(), inorder.begin() + pos);
        vector <int> in_right;
        if(inorder.begin()+pos+1 != inorder.end()){
        in_right.assign(inorder.begin()+pos+1, inorder.end());
        }
        root -> left = buTree(preorder, in_left);
        root -> right = buTree(preorder, in_right);
        return root;
        
    }
};
