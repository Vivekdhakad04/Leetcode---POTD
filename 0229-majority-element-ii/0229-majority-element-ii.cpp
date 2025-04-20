class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        vector<int> result;

        for(auto& num : nums)
        mpp[num]++;

        for(auto value : mpp)
        {
            if(value.second > n/3)
            result.push_back(value.first);
        }
    return result;
    }
};