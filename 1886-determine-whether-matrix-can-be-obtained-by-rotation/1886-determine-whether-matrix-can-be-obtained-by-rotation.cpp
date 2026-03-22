class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        
        if(mat == target) return true;
        
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < n; j++)
            {
                for(int k = j; k < n; k++)
                {
                    swap(mat[j][k], mat[k][j]);
                }
            }
            
            for(int row = 0; row < n; row++)
            reverse(mat[row].begin(), mat[row].end());

            if(mat == target)
                return true;
        }
    
    return false;

    }
};