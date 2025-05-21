class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int c0 = 1;

        //mark the zeroes in the first row and first col
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    
                    if(j == 0)
                    c0 = 0;
                    else 
                    matrix[0][j] = 0;
                }
            }
        }
        
        //mark the row and col to zeroes except the first row and col as we mark them later
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
            }
        }

        //PRIORITY-> Now mark first row
        if(matrix[0][0] == 0)
        {
            for(int j = 0; j < n; j++)
            matrix[0][j] = 0;        
        }

        //then mark the first col
        if(c0 == 0)
        {
            for(int i = 0; i < m; i++)
            matrix[i][0] = 0;
        }
    }
};