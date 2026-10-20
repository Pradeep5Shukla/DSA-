class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        for(int i = 1 ; i< height.size() ; i++){
            //current piller;
            int curr = height[i];
            int leftMax = curr;
            int rightMax = curr;
            for(int j = i-1 ; j>=0 ;j--){
                leftMax = max(leftMax,height[j]);
            }

            for(int j = i+1 ; j<height.size() ;j++){
                rightMax = max(rightMax,height[j]);
            }

            water = water+min(leftMax,rightMax)-curr;
        }
        return water;
        
    }
};