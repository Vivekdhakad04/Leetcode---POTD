class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
    //WITHOUT USING EXTRA SPACE
    //IN CONSTANT SPACE COMPLEXITY
    vector<int> result;
    int first = INT_MAX, second = INT_MAX;
    int count1 = 0, count2 = 0;

    for(int i = 0 ; i < n; i++)
    {
        int num = nums[i];
        if(first == num)
        count1++;

        else if(second == num)
        count2++;

        else if(count1 == 0)
        {
            count1++;
            first = num;
        }

        else if(count2 == 0)
        {
            count2++;
            second = num;
        }

        else{
            count1--;
            count2--;
        }
    
    }
    
    count1 = 0;
    count2 = 0;
    for(int i = 0; i < n; i++)
    {
        int num = nums[i];
        if(first == num)
        count1++;

        else if(second == num)
        count2++;
    }

    if(count1 > n/3)
    result.push_back(first);

    if(count2 > n/3)
    result.push_back(second);

return result;
    
    }
};