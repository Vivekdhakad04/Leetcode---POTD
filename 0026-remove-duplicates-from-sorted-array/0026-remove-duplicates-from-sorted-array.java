class Solution {
    public int removeDuplicates(int[] nums) {
        int left = 1;
        for(int i = 1; i < nums.length; i++)
        {
            if(nums[i] != nums[i-1]){
            nums[left] = nums[i];
            left++;
            }
        }
    return left;
    }
}