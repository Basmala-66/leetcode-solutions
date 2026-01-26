#include <queue>
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        

        queue<TreeNode*>q1;
        queue<TreeNode*>q2;

        q1.push(p);
        q2.push(q);
         bool f = false;

        while(!q1.empty() && !q2.empty())
        {
            TreeNode* curr = q1.front();
            q1.pop();
            TreeNode*curr2 = q2.front();
            q2.pop();

            if (curr == nullptr &&  curr2 == nullptr)
            continue;

            

             if(curr == nullptr || curr2== nullptr)
             return false;

            if(curr->val != curr2->val)
            return false;

            q1.push(curr->left);

            q2.push(curr2->left);


            q1.push(curr->right);


            q2.push(curr2->right);
         }

        

    return true;
    }
};