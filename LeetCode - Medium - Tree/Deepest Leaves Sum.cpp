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
    int calc_ht(TreeNode* root) {
        if(!root) return 0;
        return 1+ max(calc_ht(root->left),calc_ht(root->right));
    }
    int deepestLeavesSum(TreeNode* root) {
        
       int dep = calc_ht(root);
       queue<pair<TreeNode* , int>>q;
        q.push({root , 1});
        int ans = 0;
        while(!q.empty())
        {
            auto cur = q.front();
            q.pop();
            
            if(cur.second == dep)
            {
                 ans += cur.first->val;
                  continue;
            }
            if(cur.first->right != NULL)
               q.push({cur.first->right , cur.second + 1});
            if(cur.first->left != NULL)
                q.push({cur.first->left , cur.second + 1});
        }
        return ans;
    }
};
