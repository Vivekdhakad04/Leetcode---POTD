class Solution {
public:
    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
        int n = queries.size();
        vector<int> ans(n,0);
        string concat = "";
        for(auto string : chunks)
            concat += string;
 
        unordered_map<string, int> freq;
        string curr = "";
        for(int i = 0; i < concat.size(); i++){
            char ch = concat[i];
            if(isalpha(ch))
            curr += ch;
            else if(ch == '-' && i > 0 && i < concat.length() && isalpha(concat[i-1]) && isalpha(concat[i+1]))
            curr += ch;

            else if(!curr.empty()){
                freq[curr]++;
                curr = "";
            }
        }
      
        if(!curr.empty())
                freq[curr]++;

        for(int i = 0; i < n; i++){
            if(freq.count(queries[i]))
            ans[i] = freq[queries[i]];
            else
            ans[i] = 0;
        }

        return ans;
    }
};