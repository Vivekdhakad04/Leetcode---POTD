class Solution {
public:
    const int mod = 1e9+7;
    int lengthAfterTransformations(string s, int t) {
    //EASY METHOD
       vector<int> vec(26,0);

       for(auto& ch : s)
       vec[ch - 'a']++;

    for(int i = 0 ;i < t; i++)
    {
     vector<int> temp(26,0);
    for(int j = 0; j < 26; j++)
    {
        if(j == 25)
        {
            temp[0] = (temp[0] + vec[25]) % mod;
            temp[1] = (temp[1] + vec[25]) % mod;
        }
        else
        {
            temp[j+1] = (temp[j+1] + vec[j]) % mod;
        }
    }
    vec = move(temp);
    }
    
    long long result = 0;
    for(auto& num : vec)
    {
        result = (result + num) % mod;
    }
    return (int)result;
    }
};

    //FIRST METHOD
//         vector<int> cnt(26);
//         for (char ch : s) {
//             ++cnt[ch - 'a'];
//         }
//         for (int round = 0; round < t; ++round) {
//             vector<int> nxt(26);
//             nxt[0] = cnt[25];
//             nxt[1] = (cnt[25] + cnt[0]) % mod;
//             for (int i = 2; i < 26; ++i) {
//                 nxt[i] = cnt[i - 1];
//             }
//             cnt = move(nxt);
//         }
//         int ans = 0;
//         for (int i = 0; i < 26; ++i) {
//             ans = (ans + cnt[i]) % mod;
//         }
//         return ans;
//     }

// private:
//     static constexpr int mod = 1000000007;
//};