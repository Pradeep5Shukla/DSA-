class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        // nums[1]=nums[2];
        // nums[0]=nums[1];
        // int minD=nums[1]-nums[0];
        // int maxD = nums[n-1]-nums[0];
        // return minD+maxD;
        int mn = 0;
        int mx = min({
            nums[n-1]-nums[2],
            nums[n-2]-nums[1],
            nums[n-3]-nums[0]
        });
        return mn+mx;

    }
};