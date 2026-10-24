class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        int mx = 0;
        if(sorted == nums) return 0;
        for(int i=0; i<n;i++){
            st.push(i);
            for(int j=i+1;j<n;j++){
                if(nums[st.top()]<nums[j]){
                    st.push(j);
                    mx=max(mx,st.top()-i-1);
                }
                else if(!st.empty() && nums[st.top()] > nums[j] && nums[i] <
                nums[j]){
                    st.pop();
                    st.push(j);
                    mx=max(mx,st.top()-i-1);
                }
                
            }
        }

        
        return mx;
    }
};