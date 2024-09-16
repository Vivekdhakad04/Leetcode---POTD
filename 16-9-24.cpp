// T.C. - O(n logn)

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> timeMinutes;
        
        int time = 0;
        for(auto value : timePoints)
        {
           int hour = stoi(value.substr(0, 2));
           int minute = stoi(value.substr(3, 2));
           time = (hour * 60) + minute;
           timeMinutes.push_back(time);
        }
        sort(timeMinutes.begin(),timeMinutes.end());
        int minDiff = INT_MAX;
        for(int i = 1; i < timeMinutes.size(); i++ )
        {
            int Diff = timeMinutes[i] - timeMinutes[i-1];
            if(Diff < minDiff)
            minDiff = Diff;
        }

        //edge case as in example 1
        int circularDiff = timeMinutes[0] + (24 * 60) - timeMinutes[timeMinutes.size() - 1];

        return min(circularDiff , minDiff);

    }
};
