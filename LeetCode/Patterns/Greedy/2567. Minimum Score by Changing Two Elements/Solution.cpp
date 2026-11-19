class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        nums[1]=nums[2];
        nums[0]=nums[1];
        int minD=nums[1]-nums[0];
        int maxD = nums[n-1]-nums[0];
        return minD+maxD;
    }
};