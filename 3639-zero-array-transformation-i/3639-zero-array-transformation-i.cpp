class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
       //USING DIFFERENCE ARRAY
       int n = nums.size();

       vector<int> vec(n+1,0);

       for(auto& query : queries)
       {
           int start = query[0];
           int end = query[1];

           vec[start]++;
           vec[end+1]--;
       }

       int value = 0;
       for(int i = 0; i < n; i++)
       {
          value += vec[i];
          if(nums[i] - value > 0)
          return false;
       }
    return true;
    }
};