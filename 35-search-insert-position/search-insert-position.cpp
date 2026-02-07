class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1, index = -1;

        while (start <= end)
        {
            int mid = (start + end) / 2;

            if (nums[mid] >= target)
            {
                end = mid - 1;
                index = mid;
            }

            else if (mid == nums.size() - 1)
            {
                index = mid+1;
                break;
            }
                

            else
                start = mid + 1;
        }

        return index;
    }
};