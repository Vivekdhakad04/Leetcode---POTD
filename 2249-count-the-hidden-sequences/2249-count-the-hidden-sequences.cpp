class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        int n = differences.size();
        long long minValue = 0;
        long long maxValue = 0;
        long long preSum = 0;
        
        for(int i = 0; i < n; i++)
        {
            preSum += differences[i];
            minValue = min(minValue , preSum);
            maxValue = max(maxValue , preSum);
        }
        
        long long left = lower - minValue;
        long long right = upper - maxValue;
        int result = right - left + 1;
        return (result > 0) ? result : 0; 
    }
};