class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> result;

        int left = 0, top = 0, down = m - 1, right = n - 1;

        while(left <= right && top <= down)
        {
            //left to right
            for(int i = left; i <= right; i++)
            result.push_back(matrix[left][i]);

            top++;

            //top to down
            for(int i = top; i <= down; i++)
            result.push_back(matrix[i][right]);

            right--;

            //right to left
            if(top <= down)
            {
            for(int i = right; i >= left; i--)
            result.push_back(matrix[down][i]);
            
            down--;
            }

            //down to top
            if(left <= right)
            {
            for(int i = down; i >= top; i--)
            result.push_back(matrix[i][left]);

            left++;
            }
        }
    return result;
    }
};