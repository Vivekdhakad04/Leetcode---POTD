class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";

        if(a == "0" && b == "0") return "0";
        int carry = 0, x = 0, y = 0;
        while(a.length() || b.length()){
            if(a.length() > 0){
              x = a.back() - '0';
              a.pop_back();
            }
            else
              x = 0;

            if(b.length() > 0){
              y = b.back() - '0';
              b.pop_back();
            }
            else
              y = 0;


            int sum = x + y + carry;

            if(sum == 0){
                carry = 0;
                result += '0';
            }
            else if(sum == 1){
                carry = 0;
                result += '1';
            }
            else if(sum == 2){
                carry = 1;
                result += '0';
            }
            else{
                carry = 1;
                result += '1';
            }
          
        }
        if(carry) result += '1';
        reverse(result.begin(), result.end());
    return result;
    }
};