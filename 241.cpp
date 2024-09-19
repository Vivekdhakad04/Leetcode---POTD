// T.C. - O(3^n)

class Solution {
public:
    vector<int> solution(string &expression)
    {
        vector<int> ans;
        for(int i = 0; i < expression.size(); i++)
        {
            if(expression[i] == '*' || expression[i] == '-' || expression[i] == '+')
            {
                vector<int> left_string = diffWaysToCompute(expression.substr(0 , i));
                vector<int> right_string = diffWaysToCompute(expression.substr(i+1));
                
                int result = 0;
                for(int &X : left_string)
                {
                    for(int &Y : right_string)
                    {
                       if(expression[i] == '*')
                       ans.push_back(X*Y);

                       else if(expression[i] == '+')
                       ans.push_back(X+Y);

                       else
                       ans.push_back(X-Y);
                    }
                }   
            }    
        }
        if(ans.empty())
        ans.push_back(stoi(expression));

        return ans;
    }

    vector<int> diffWaysToCompute(string expression) {
        return solution(expression);
    }
};
