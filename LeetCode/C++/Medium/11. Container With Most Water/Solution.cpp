class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l =0;
        int r = n-1;
        int maxArea = 0;
        while(r>l){
            int h = min(heights[l],heights[r]);
            int w = r-l;
            int area = h*w;
            maxArea = max (maxArea,area);
            if(heights[l]>heights[r])  r--;
            else l++;
        }
        return maxArea;
    }
};