class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int result = nums[0];
        int sum = nums[1] + nums[2];

        for(int i = 1; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(nums[i] + nums[j] < sum)
                sum = nums[i] + nums[j];
                
            }
        }
return (result + sum);
    }
};