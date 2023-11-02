#include<bits/stdc++.h>
using namespace std;

//Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
class Solution {
public:
    int ans = 0;
    pair<int, int> postorder(TreeNode* root){
        if(!root) return {0,0};
        auto leftNode = postorder(root->left);
        auto rightNode = postorder(root->right);
        int summ = leftNode.first + rightNode.first + root->val;
        int count = leftNode.second + rightNode.second + 1;

        if((summ/count)==root->val)ans++;
        return make_pair(summ, count);
    }
    int averageOfSubtree(TreeNode* root) {
        postorder(root);
        return ans;
    }
};