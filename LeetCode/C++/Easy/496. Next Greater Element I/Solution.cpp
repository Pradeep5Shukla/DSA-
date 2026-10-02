class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& arr1, vector<int>& arr2) {
        int n = arr2.size();
        stack<int> st;
        vector<int> ans(n);
        ans[n-1] = -1;
        st.push(arr2[n-1]);
        for(int i = n-2; i>=0 ;i--){
            while(!st.empty() && arr2[i] >= st.top()){
                st.pop();
            }
            if(st.size() == 0) ans[i] = -1;
            else ans[i] = st.top();
            st.push(arr2[i]);
        }
        vector<int> finalans;
        for(int i = 0 ;i<arr1.size() ;i++){
            for(int j = 0;j<n ;j++){
                if(arr1[i] == arr2[j]){
                    finalans.push_back(ans[j]);
                }
            }
        }
        return finalans;
    }
};