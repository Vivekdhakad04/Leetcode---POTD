class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lMax = 0, rMax = 0;
        int left = 0, right = n-1;
        int totalWater = 0;

        while(left < right){
           lMax = max(lMax , height[left]);
           rMax = max(rMax , height[right]);

           if(height[left] <= height[right]){
              totalWater += lMax - height[left];
              left++;
           }
           else{
              totalWater += rMax - height[right];
              right--;
           }
        }
    
    return totalWater;
    }
};