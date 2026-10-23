class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       int n = nums.size();
       stack<int> st;
       for(int i = 0 ;i<n ; i++){
        st.push(nums[i]);
        for(int j=i+1;j<n;j++){
           if(nums[j]>st.top()){
            st.push(nums[j]);
           }
           else if(st.top()>nums[j] && nums[j]>nums[i]){
            return true;
           }
        }
        while(!st.empty()){
            st.pop();
        }
       }
        return false;
    }
};