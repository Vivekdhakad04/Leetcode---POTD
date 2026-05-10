class Solution {
public:
    
    long long minArraySum(vector<int>& nums) {
       int n = nums.size();
       long long minSum = 0;

       sort(nums.begin(),nums.end());

       if(nums[0] == 1) return n;

       //unordered_map<int,int> map;
       //for(auto& val : nums) map[val]++;
       
       for(int i = 0; i < n; i++){
           int j = i+1;
           if(nums[i] > 0)
           minSum += nums[i];
            while(j < n && nums[i] != -1){
                if(nums[j] != -1 && nums[j] % nums[i] == 0){
                    minSum += nums[i];
                    nums[j] = -1;
                }
            j++;
            }
       // cout<<nums[i]<<"_"<<minSum<<" ";
        nums[i] = -1;
        }
   // for(auto& val : nums) cout<<val<<" ";
    return minSum;        

    }
};