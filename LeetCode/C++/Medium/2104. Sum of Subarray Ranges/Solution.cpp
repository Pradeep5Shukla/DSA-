class Solution {
public:
    long long subArrayRanges(vector<int>& arr) {
        int n = arr.size();
        long long  ans = 0;
        for(int i  = 0 ;i<n ;i++){
            // vector<int> subarray;
            int mn = arr[i];
            int mx = arr[i];
            for(int j =i ;j<n ;j++){
                mn = min(mn,arr[j]);
                mx = max(mx,arr[j]);
                ans+=mx-mn;
            }
        }
        return ans;
    
    }
};