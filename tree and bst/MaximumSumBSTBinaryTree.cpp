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
    int maxs=0;
    pair<int,pair<int,int>> h(TreeNode* root){
        if(root==NULL){
            return make_pair(0,make_pair(INT_MAX,INT_MIN));
        }
        pair<int,pair<int,int>> p1=h(root->right);
        pair<int,pair<int,int>> p2=h(root->left);
        if((p1.second.first) > (root->val) && (p2.second.second) < (root->val)){
            maxs = max(root->val + p1.first + p2.first, maxs);
            return make_pair(root->val + p1.first + p2.first, make_pair(min((root->val), (p2.second.first)), max((root->val), (p1.second.second))));
        }
        return make_pair(max(p1.first, p2.first), make_pair(INT_MIN,INT_MAX));
    }
public:
    int maxSumBST(TreeNode* root) {
        return max(h(root).first, maxs);
    }
};