// class Solution {
// public:
//method 01-> claculate max height on left and max height on right for each piller then then finding min in that and calculate the water store in in that piller for each individual piller.  *min(leftMax,rightMax)-curr
//     int trap(vector<int>& height) {
//         int water = 0;
//         for(int i = 1 ; i< height.size() ; i++){
//             //current piller;
//             int curr = height[i];
//             int leftMax = curr;
//             int rightMax = curr;
//             for(int j = i-1 ; j>=0 ;j--){
//                 leftMax = max(leftMax,height[j]);
//             }

//             for(int j = i+1 ; j<height.size() ;j++){
//                 rightMax = max(rightMax,height[j]);
//             }

//             water = water+min(leftMax,rightMax)-curr;
//         }
//         return water;
        
//     }
// };


class Solution {
public:
//method 02 -> we make two vector of left max andd right max which store the left max and right max of each element in that vector and then calculate the water stor in that ith index by using the left amx and  right max vector =>tc=O(n) & sc=O(n)  *[min(leftMax[i],rightMax[i]) - height[i]]
 
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


// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int water = 0;
        
//         return water;
        
//     }
// };

