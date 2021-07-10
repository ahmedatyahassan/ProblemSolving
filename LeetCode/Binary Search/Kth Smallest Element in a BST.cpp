class Solution {
public:
    
    void traversal(TreeNode* root , vector<int>&t)
    {
        if(root == NULL)
            return;
        
        traversal(root->left , t);
        
        t.push_back(root->val);
        
        traversal(root->right , t);
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        vector<int>tracker;
        
        traversal(root ,tracker);
        
        return tracker[k - 1];
        
    }
};
