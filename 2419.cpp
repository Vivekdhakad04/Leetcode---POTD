//T.C. - O(n)
// HINT - first find the max number and then find its longest streak

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        int maxValue = *max_element(nums.begin(),nums.end());
        int maxLength = 0;
        int i = 0;
        while(i < n)
        {
            if(nums[i] != maxValue)
            {
            i++;
            maxLength = 0;
            }
            else
            {
            maxLength++;
            if(maxLength > result)
            result = maxLength;
            i++;
            }
        } 
        return result;
    }
};
