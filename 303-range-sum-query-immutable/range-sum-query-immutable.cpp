class NumArray {
public:
    vector<long long> result;
    NumArray(vector<int>& nums) {
         int n = nums.size();
         result.push_back(0);
        for (int i = 0; i < n; i++)
        {
            result.push_back(result.back() + nums[i]);
        }
    }

    int sumRange(int left, int right) {
        int sum = result[right+1] - result[left];

        return sum;

    }
};
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */