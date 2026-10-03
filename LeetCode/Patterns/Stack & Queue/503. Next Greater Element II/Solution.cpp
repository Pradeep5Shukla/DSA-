class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {  //(i+1)%n
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n,-1);
        for(int i= 0 ;i < 2*n; i++){
            int idx = i%n;
            while(!st.empty() && arr[st.top()]<arr[idx]){
                ans[st.top()] = arr[idx];
                st.pop();
            }
            if(i<n)st.push(idx);
        }
        
        return ans;
    }
};