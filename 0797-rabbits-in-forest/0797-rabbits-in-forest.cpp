class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int n = answers.size();
        unordered_map<int,int> mpp;
        int totalRabbits = 0;

        for(int i = 0; i < n; i++)
        {
            mpp[answers[i]]++;
        }
        
        //METHOD 2 :
        for(auto& value : mpp)
        {
            int similarRabbits = value.first;
            int freqClaim = value.second;

            int group = ceil((double)freqClaim / (similarRabbits + 1));
            totalRabbits += group * (similarRabbits + 1);
        }
        //METHOD 1:
        // for(auto& value : mpp)
        // {
        //     int similarRabbits = value.first;
        //     int numRabbits = value.second;
        //     if(similarRabbits != 0 && numRabbits > similarRabbits + 1) 
        //     rabbits += (similarRabbits + 1) * (numRabbits / (similarRabbits + 1)) + ((numRabbits % (similarRabbits + 1) == 0) ? 0 : similarRabbits+1);
        //     else 
        //     rabbits += (similarRabbits == 0 ) ? numRabbits : similarRabbits + 1;   
        // }
    return totalRabbits;
    }
};