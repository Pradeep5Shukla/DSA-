class Solution {
public:

    // int sumSubarrayMins(vector<int>& arr) {
    //     int n = arr.size();
    //     long long ans = 0;
    //     const int MOD=1e9+7;

    //     for (int i = 0; i < n; i++) {
    //         int mn = INT_MAX;
    //         for (int j = i; j < n; j++) {
    //             mn = min(mn,arr[j]);
    //             ans= (ans+ mn)%MOD;
    //         }
    //     }
    //     return ans;
    // }

    vector<int> getPSE(vector<int>& arr , int n){
        vector<int> result(n);
        stack<int> st;

        for(int i = 0 ;i<n; i++){
            if(st.empty()) result[i] = -1;
            else{
                while(!st.empty() && arr[st.top()]>arr[i])  st.pop();

                if(st.empty()) result[i] = -1;
                else result[i] = st.top();
            }
            st.push(i);
        }
        return result;
    }

    vector<int> getNSE(vector<int>& arr , int n){
        vector<int> result(n);
        stack<int> st;

        for(int i = n-1 ;i>=0; i--){
            if(st.empty()) result[i] = n;
            else{
                while(!st.empty() && arr[st.top()]>=arr[i])  st.pop();

                if(st.empty()) result[i] = n;
                else result[i] = st.top();
            }
            st.push(i);
        }
        return result;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> PSE = getPSE(arr,n);
        vector<int> NSE = getNSE(arr,n);

        long long sum = 0;
        int mod = 1e9+7;

        for(int i = 0 ;i<n ;i++){
            long long ls = i-PSE[i];
            long long rs = NSE[i]-i;

            long long totalways = ls*rs;

            long long totalsum = arr[i]*totalways;

            sum = (sum+totalsum)%mod;
        }
        return sum;
    }    

};