class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer, Integer> mpp = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            mpp.put(nums[i], mpp.getOrDefault(nums[i],0)+1);
        }

        for(Integer key : mpp.keySet()){
            if(mpp.get(key) > (nums.length/2))
            return key;
        }
    return 0;
    }
}