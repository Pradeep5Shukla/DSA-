class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>st;
        stack<int>ans;
        for(int i=0;i<nums.size();i++){
            while(!st.empty() && st.top()>nums[i]){
                st.pop();
                if(!st.empty() && ans.top()<nums[i]) return true;
            }
            st.push(nums[i]);
            if(ans.empty() || ans.top()>nums[i]){
                ans.push(nums[i]);
            }
        }
        return false;
    }
};