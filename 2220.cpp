//T.C. - O(1)

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int countBit = 0;

        while(start > 0 || goal > 0)
        {
            if(start % 2 != goal % 2)
            countBit++;

            start /= 2;
            goal /=  2;
        }
        return countBit;
    }
};
