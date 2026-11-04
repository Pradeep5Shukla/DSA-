class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        vector<int> as;
        int count = 0;
        int idx = 0;
        sort(nums.begin(),nums.end());
        int i = 0;
        while(i<n-1){
            if(nums[i] == nums[i+1]){
                count++;
                i++;
            }
            else {
                as.push_back(nums[i]);
            }
            i++;
        }
        if (i == n - 1) as.push_back(nums[i]);
        ans.push_back(count);
        ans.push_back(as.size());
        return ans;
    }
};