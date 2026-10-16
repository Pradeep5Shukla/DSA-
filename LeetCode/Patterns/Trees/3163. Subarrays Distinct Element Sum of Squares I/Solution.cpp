class Solution {
public:
    int sumCounts(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        for(int i = 0; i<n ;i++){
            vector<int> freq(101,0);
            int d = 0;
            for(int j =i ; j<n ;j++){
                if(freq[arr[j]] == 0) d++;
                freq[arr[j]]++;
                ans+=d*d;
            }
        }
        return ans;
    }
};