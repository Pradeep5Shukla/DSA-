class Solution {
public:


    int findmax(vector<int> arr){
        int maxval = INT_MIN;
        for(int i =0;i<arr.size();i++){
                maxval = max(maxval,arr[i]);
        }
        return maxval;
    }
    long long  hr(vector<int> arr , int h ,int n){
        long long totalhr = 0;
        for(int i = 0;i<n ; i++){
            totalhr+=ceil((double)arr[i]/(double)h);
        }
        return totalhr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int left = 1;
        int right = findmax(piles);
        int ans = INT_MAX;
        while(right>=left){
            int mid = left + (right-left)/2;
            int totalhr = hr(piles,mid,n);
            if(totalhr<=h){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return left;

    }
};