class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        vector <int> leftMax(height.size());
        leftMax[0] = height[0];

        vector <int> rightMax(height.size());
        rightMax[height.size() -1] = height[height.size()-1];

        //calculate left  maxx of all element in leftMAx.
        for(int i = 1;i<height.size() ;i++){
            leftMax[i] = max(height[i],leftMax[i-1]);
        }
        //calculate right  maxx of all element in rightMAx.
        for(int i = height.size()-2;i>=0 ;i--){
            rightMax[i] = max(height[i],rightMax[i+1]);
        }
        for(int i =1;i<height.size() ; i++){
            water+=min(leftMax[i],rightMax[i])-height[i];
        }
        return water;
        
    }
};