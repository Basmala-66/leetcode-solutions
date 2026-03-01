class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>m;
        int r = 0;
        int k = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            int key = nums[i];

            m[key]++;
        }

        for (auto x : m)
        {
            r = nums.size() / 2;

            if (x.second > r)
                k = x.first;
           
        }
        
            
        return k;
    }
};