class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i<n; i++){
            for(int j = 0 ;j<=nums[i];j++){
                if(j==nums[i]) ans.push_back(nums[j]);
            }    
        }
        return ans;
    }
};