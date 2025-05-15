class Solution {
public:
    vector<int> generateRow(int row){
        vector<int> temp;
        temp.push_back(1);
        int ans = 1;
        for(int j = 1; j < row; j++){
            ans = ans * (row - j);
            ans = ans / j;
            temp.push_back(ans);
        }
        return temp;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++){
            ans.push_back(generateRow(i));
        }
    return ans;
    }
};