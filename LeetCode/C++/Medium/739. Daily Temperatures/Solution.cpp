class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        // int n = arr.size();
        // stack<int> st;
        // vector<int>nge(n);
        // nge[n - 1] = 0;
        // st.push(n - 1);
        // for (int i = n - 2; i >= 0; i--) {
        //     // pop all the element smaller than arr[i]
        //     while (st.size() > 0 && arr[st.top()] <= arr[i]) {
        //         st.pop();
        //     }
        //     // mark the ans in nge array
        //     if (st.size() == 0)
        //         nge[i] = 0;
        //     else
        //         nge[i] = st.top();
        //     // push the arr[i]
        //     st.push(i);
        // }
        // vector<int> ans(n);
        // for(int i =0;i<n;i++){
        //     if(nge[i] == 0) ans[i] = 0;
        //     else  ans[i] = (nge[i]-i);
        // }
        // return ans;


        int n = arr.size();
        stack<int> st;
        vector<int>nge(n);
        nge[n - 1] = 0;
        st.push(n - 1);
        for (int i = n - 2; i >= 0; i--) {
            // pop all the element smaller than arr[i]
            while (st.size() > 0 && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            // mark the ans in nge array
            if (st.size() == 0)
                nge[i] = 0;
            else
                nge[i] = st.top() -i;
            // push the arr[i]
            st.push(i);
        }
        // 
        return nge;
    }
};