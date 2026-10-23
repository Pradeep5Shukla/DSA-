class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       int n = nums.size();
       stack<int> st;
       for(int i = 0 ;i<n ; i++){
        st.push(nums[i]);
        for(int j=i+1;j<n;j++){
           if(nums[j]>st.top() && st.size()==1){
            st.push(nums[j]);
           }
           else if(st.top()>nums[j] && nums[j]>nums[i] && st.size()==2){
            return true;
           }
           else if(st.top()>nums[j] && st.size()>2){
            st.push(nums[j]);
           }
        }
        while(!st.empty()){
            st.pop();
        }
       }
        return false;
    }
};