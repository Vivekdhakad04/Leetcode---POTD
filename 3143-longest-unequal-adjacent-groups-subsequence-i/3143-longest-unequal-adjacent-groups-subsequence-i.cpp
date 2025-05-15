class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> result;
        result.push_back(words[0]);
        int curr = groups[0];

        for(int i = 1; i < words.size(); i++)
        {
            if(groups[i] != curr)
            {
                result.push_back(words[i]);
                curr = groups[i];
            }
        }
    return result;
    }
};