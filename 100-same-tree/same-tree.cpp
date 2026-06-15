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

    void allnodes(TreeNode*p,vector<int>&vec){
        if(p==nullptr){
            vec.push_back(INT_MIN);
            return;
        }
        vec.push_back(p->val);
        allnodes(p->left,vec);
        allnodes(p->right,vec);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>vec1;
        vector<int>vec2;

        allnodes(p,vec1);
        allnodes(q,vec2);
        int i = 0;
        int j = 0;
        if(vec1.size()!=vec2.size()){
            return false;
        }
        while(i<vec1.size() || j<vec2.size()){
            if(vec1[i]!=vec2[j]){
                return false;
            }
                i++;
                j++;
        }
        return true;
    }
};