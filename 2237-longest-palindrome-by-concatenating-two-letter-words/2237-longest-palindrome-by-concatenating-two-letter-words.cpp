class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mpp;
        int len = 0;

        for(auto& word : words)
        {
            string rev = word;
            swap(rev[0], rev[1]);

            if(mpp[rev] > 0)
            {
               len += 4;
               mpp[rev]--;
            }

            else
            mpp[word]++;
        }

        for(auto& ele : mpp)
        {
            string str = ele.first;
            int val = ele.second;
            if(val > 0 && str[0] == str[1])
            {
            len += 2;
            break;
            }
        }
    return len;
    }
};