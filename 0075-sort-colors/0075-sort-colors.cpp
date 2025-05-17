class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        int start = 0, end = n-1 , mid = 0;
        while(mid <= end)
        {
            if(nums[mid] == 0) 
               swap(nums[start++] , nums[mid++]);
               
            else if(nums[mid] == 2) 
               swap(nums[mid] , nums[end--]);
            
            else
            mid++;
        }
    }
};