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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto front=q.front();
            q.pop();
            TreeNode* node=front.first;
            int r=front.second.first;
            int c=front.second.second;
            nodes[c][r].insert(node->val);
            if(node->left){
                q.push({node->left,{r+1,c-1}});
            }
               if(node->right){
                q.push({node->right,{r+1,c+1}});
            }
        }
        vector<vector<int>>ans;
        for(auto colo:nodes){
            vector<int>colm;
            for(auto row:colo.second){
                for( int val:row.second){
                    colm.push_back(val);
                }
            }
            ans.push_back(colm);
        }
        return ans;
            }
};