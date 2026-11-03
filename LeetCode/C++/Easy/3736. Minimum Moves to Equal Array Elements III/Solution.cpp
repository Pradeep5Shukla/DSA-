class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int mx = INT_MIN;
        for(int i = 0; i<n ;i++){
            if(nums[i]>mx) mx = max(mx,nums[i]);
        }
        for(int i = 0;i<n;i++){
            count+=mx-nums[i];
        }
        return count;
    }
};