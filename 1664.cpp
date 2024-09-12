// T.C. - O(m + n*k)
// using Hashset

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st(begin(allowed), end(allowed));

        int count = 0;
        for(auto &word : words)
        {
            bool eachChar = true;

            for(auto &ch : word)
            {
                if(!st.count(ch))
                {
                    eachChar = false;
                    break;
                }
            }
            count += eachChar;
        }
        return count;
    }
};
