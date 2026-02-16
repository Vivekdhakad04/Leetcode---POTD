class Solution {
public:
    int reverseBits(int n) {
        //convert decimal to binary
        string binary = "00000000000000000000000000000000";
        int i = 0;
        while(n > 0){
            if(n % 2 == 0)
            binary[i] = '0';
            else
            binary[i]= '1';

            n /= 2;
            i++;
        }
        cout<<binary<<endl;
        reverse(binary.begin(), binary.end());
        cout<<binary<<endl;
        int result = 0;
        for(int i = 0; i < binary.length(); i++){
           if(binary[i] == '1')
           result += (1 << i);
           cout<<result<<" "<<i<<endl;
        }
    return result;
    }
};