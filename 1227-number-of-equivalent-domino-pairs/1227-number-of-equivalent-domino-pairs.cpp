class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int, int> freq;
        int count = 0;

        for (auto& d : dominoes) {
            int a = d[0], b = d[1];
            int key = min(a, b) * 10 + max(a, b);  // Unique key for equivalent dominoes

            count += freq[key];  // Each previous occurrence forms a new pair with this one
            freq[key]++;
        }

    return count;
    }
};