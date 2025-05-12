class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        vector<int> result;

        for(int i = 0; i < n; i++)
        {
            if(digits[i] == 0)
            continue;
            for(int j = 0; j < n; j++)
            {
                if(i == j)
                continue;
                for(int k = 0;k < n; k++)
                {
                    if(k == i || k == j || digits[k]%2 != 0)
                    continue;
                    
                    int num = (digits[i]*100) + (digits[j]*10) + digits[k];
                    result.push_back(num);
                    
                }
            }
        }

        sort(result.begin(), result.end());
        vector<int> ans;
        for(auto& num : result)
        {
            if(ans.size() == 0)
            ans.push_back(num);
            else if(ans.back() != num)
            ans.push_back(num);
        }
    return ans;
    }
};