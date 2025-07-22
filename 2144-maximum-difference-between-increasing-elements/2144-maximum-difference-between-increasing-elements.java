class Solution {
    public int maximumDifference(int[] nums) {
        int n = nums.length;
        int mini = nums[0];
        int maxi = -1;
        int res = -1;

        for(int i = 1; i < n; i++)
        {
            if(nums[i] > mini){
                res = Math.max(res, nums[i] - mini);
            }
            else
            mini = nums[i];
        }
    return res;
    }
}