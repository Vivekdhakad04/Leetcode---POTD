class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxEndHere = nums[0];
        int maxSumHere = nums[0];

        for(int i = 1; i < n; i++)
        {
            maxEndHere = max(maxEndHere + nums[i], nums[i]);
            maxSumHere = max(maxSumHere,maxEndHere);
        }
    return maxSumHere;
    }
};