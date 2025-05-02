class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.length();
        string result = "";

        vector<int> right_closest_left(n);
        vector<int> left_closest_right(n);
        
        int right = -1;
        int left = -1;
        int i = 0;
        int j = n-1;
        while(i < n && j >= 0)
        {
            //LCR
            if(dominoes[i] == '.')
            {
                left_closest_right[i] = left;
            }
            else if(dominoes[i] == 'L')
            {
                left = -1;
                left_closest_right[i] = left;
            }
            else
            {
                left = i;
                left_closest_right[i] = left;
            }

            //RCL
            if(dominoes[j] == '.')
            {
                right_closest_left[j] = right;
            }
            else if(dominoes[j] == 'R')
            {
                right = -1;
                right_closest_left[j] = right;
            }
            else
            {
                right = j;
                right_closest_left[j] = right;
            }

            i++;j--;
        }

        for(int i = 0; i < n; i++)
        {
            if(left_closest_right[i] == -1 && right_closest_left[i] == -1)
            result += '.';

            else if(left_closest_right[i] == -1 )
            result += 'L';

            else if(right_closest_left[i] == -1)
            result += 'R';
            
            else if(i - left_closest_right[i] == right_closest_left[i] - i)
            result += '.';

            else{
                if(i - left_closest_right[i] > right_closest_left[i] - i)
                result += 'L';
                else
                result += 'R';
            }
        }
    return result;
    }
};