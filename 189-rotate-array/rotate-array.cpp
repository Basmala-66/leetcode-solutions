class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (k == nums.size() || k==0)
        {
            for (int i = 0;i < nums.size();i++)
                cout << nums[i];
        }
            
        else
        {
            k = k % nums.size();
            reverse(nums.begin(), nums.end());

            reverse(nums.begin(),nums.begin()+k);
            reverse(nums.begin() + k , nums.end());

            for (int i = 0; i < nums.size(); i++)
            {
                cout << nums[i];
            }
            
        }
    }
};