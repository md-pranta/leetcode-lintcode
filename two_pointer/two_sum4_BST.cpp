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

#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        in_order(root, v);
        int l = 0, r = v.size()-1;

        while(l<r){
            if(v[l]+v[r]==k){
                return true;
            }
            else if(v[l]+v[r]<k)l++;
            else r--;
        }
        return false;
    }
    void in_order(TreeNode* root,vector<int> &v){
        if(root==NULL)return;
        in_order(root->left, v);
        v.push_back(root->val);
        in_order(root->right, v);
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    return 0;
}