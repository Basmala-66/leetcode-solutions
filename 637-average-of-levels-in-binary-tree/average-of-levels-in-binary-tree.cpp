 
class Solution {
   
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;

         double a=0;

        queue<TreeNode*>q;
        q.push(root);
        
        while (!q.empty())
        {
            double s = q.size();
            for (int i=0; i<s;i++)
            {
                TreeNode* c1 = q.front();
                q.pop();
                a += c1->val;

                if (c1->left)
                    q.push(c1->left);

                if (c1->right)
                    q.push(c1->right);

            }


            double av = a / s;
            ans.push_back(av);
            a = 0;

        }

        return ans;
        
    }
};