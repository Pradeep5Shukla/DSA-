class Solution {
public:
    void print(vector<int>& nums,vector<int> ans,vector<vector<int>>& finalans,int idx){
        if (idx==nums.size()){
            finalans.push_back(ans);
            return;
        }
        print(nums,ans,finalans,idx+1);
        ans.push_back(nums[idx]);
        print(nums,ans,finalans,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalans;
        print(nums,ans,finalans,0);
        return finalans;
    }
};