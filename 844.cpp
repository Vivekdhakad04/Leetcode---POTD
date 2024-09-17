//T.C. - o(M + N)

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        unordered_map<string,int> mapping;
        int i = 0, j = 0;
        while(i < m)
        {   
            string wordS1 = "";
            while(i < m && s1[i] != ' '){
                wordS1 += s1[i];
                i++;
            }
            mapping[wordS1]++;
            i++;
        }
        while(j < n)
        {
            string wordS2 = "";
            while(j < n && s2[j] != ' ')
            {
                wordS2 += s2[j];
                j++;
            }
            mapping[wordS2]++;
            j++;    
        }
        vector<string> result;
        for(auto &word : mapping)
        {
            if(word.second == 1)
            result.push_back(word.first);
        }
        return result;
    }
};
