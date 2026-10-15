class Solution {
public:
    // int findMin(vector<int>& cur) {
    //     int mn = INT_MAX;
    //     for (int i = 0; i < cur.size(); i++) {
    //         if (cur[i] < mn)
    //             mn = cur[i];
    //     }
    //     return mn;
    // }
    // int sumSubarrayMins(vector<int>& arr) {
    //     int n = arr.size();
    //     long long ans = 0;
    //     const int MOD=1e9+7;

    //     for (int i = 0; i < n; i++) {
    //         vector<int> cur;
    //         for (int j = i; j < n; j++) {
    //             cur.push_back(arr[j]);
    //             ans= (ans+ findMin(cur))%MOD;
    //         }
    //     }
    //     return ans;
    // }


    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long ans = 0;
        const int MOD=1e9+7;

        for (int i = 0; i < n; i++) {
            int mn = INT_MAX;
            for (int j = i; j < n; j++) {
                mn = min(mn,arr[j]);
                ans= (ans+ mn)%MOD;
            }
        }
        return ans;
    }
};