//T.C : O(n)

class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<string, int> mp;
    
        vector<int> countVowels(5, 0);

        string currentState = "00000";
        mp[currentState] = -1;
        
        int maxLength = 0;

        for (int i = 0; i < s.length(); ++i) 
        {
                 if (s[i] == 'a') countVowels[0] = (countVowels[0] + 1) % 2;
            else if (s[i] == 'e') countVowels[1] = (countVowels[1] + 1) % 2;
            else if (s[i] == 'i') countVowels[2] = (countVowels[2] + 1) % 2;
            else if (s[i] == 'o') countVowels[3] = (countVowels[3] + 1) % 2;
            else if (s[i] == 'u') countVowels[4] = (countVowels[4] + 1) % 2;

            currentState = "";
            for (int j = 0; j < 5; ++j) 
            {
                currentState += to_string(countVowels[j]);
            }

            if (mp.find(currentState) != mp.end()) 
            {
                maxLength = max(maxLength, i - mp[currentState]);
            } 
            else 
            {
                mp[currentState] = i;
            }
        }

        return maxLength;
    }
};
