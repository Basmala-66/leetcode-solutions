class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int min = 0;
for (int i = 0; i < nums.size();i++)
{
    if(i>0)
    nums[i] += nums[i-1];

    if (nums[i] < min)
        min = nums[i];

}

int startvalue = 1 - min;
return startvalue;
    }
};