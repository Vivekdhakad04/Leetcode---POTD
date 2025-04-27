class Solution {
public:
    int countSubarrays(vector<int>& nums) {

        int n = nums.size();
        int count = 0;

        for(int i = 0; i < n - 2; i++)
            {
                int j = i + 2;
                int sum = nums[i] + nums[j];
                if(nums[i+1] % 2 == 0 && sum == (nums[i+1]/2))
                    count++;
            }
        return count;
        
    }
};