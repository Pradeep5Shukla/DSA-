class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        sort(nums.begin(),nums.end());
        if(n==1) return true;
        for(int i =0;i<n;i++){
            int mn = smallest(nums);
            count += nums[i]-mn;
        }
        return count;


    }

    int smallest(vector<int>& nums){
        int mn = INT_MAX;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]<mn) mn = nums[i];
        }
        return mn;
    }
};