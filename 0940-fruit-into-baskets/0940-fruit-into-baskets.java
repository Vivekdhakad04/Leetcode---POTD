class Solution {
    public int totalFruit(int[] fruits) {
        int n = fruits.length;
        return helper(fruits, n, 2, 0 , 0, 0);
    }

    int helper(int[] fruits, int n, int k, int left, int right, int maxLen){
        HashMap<Integer,Integer> mpp = new HashMap<>();

        while(right < n){
            mpp.put(fruits[right], mpp.getOrDefault(fruits[right] , 0)+ 1);
            while(mpp.size() > k){
                mpp.put(fruits[left], mpp.get(fruits[left])-1);

                if(mpp.get(fruits[left]) == 0)
                mpp.remove(fruits[left]);
            
            left++;
            }

        maxLen = Math.max(maxLen, right-left + 1);

        right++;
        }
    return maxLen;
    }
}