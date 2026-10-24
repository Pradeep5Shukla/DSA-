class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted = nums;
        sort(sorted.begin(),sorted.end());
        if(sorted==nums) return 0;
        if(n==1) return 0;
        int l =0;
        int r = n-1;
        while(sorted[l] == nums[l] && l<n/2) l++;
        while(sorted[r] == nums[r]&& ) r--;
        return r-l+1;
    
    }
};