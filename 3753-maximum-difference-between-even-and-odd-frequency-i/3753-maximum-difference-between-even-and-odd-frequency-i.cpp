class Solution {
public:
   int maxDifference(string s) {

        unordered_map<char,int> mp;
        for(int i = 0; i < s.length();i++)
            {
                mp[s[i]]++;
            }
        
        int minEven = INT_MAX;
        int maxOdd = INT_MIN;
        for(auto& pair : mp)
            {
                int count = pair.second;
                if(count % 2 == 0)
                {
                    minEven = min(minEven,count);
                }
                else
                {
                    maxOdd = max(maxOdd,count);
                }
            }
        return (maxOdd - minEven);
    }
};