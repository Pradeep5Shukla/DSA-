class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       int n = nums.size();
       stack<int> st;
       for(int i = 0 ;i<n ; i++){
        for(int j=i+1;j<n;j++){
            if(st.empty()) st.push(nums[i]);
            else if(nums[j]>st.top() && st.size()==1) st.push(nums[j]);
            else if(st.size()==2 && nums[j]<st.top() && nums[j]>nums[i]) return true;
        }
       }
        return false;
    }
};