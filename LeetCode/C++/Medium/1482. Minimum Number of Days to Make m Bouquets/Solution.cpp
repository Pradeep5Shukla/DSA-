class Solution {
public:

    int possible(vector<int>& arr,int day,int m,int k){
        int count = 0;
        int nOfB=0;
        for(int i = 0 ; i< (arr.size());i++){
            if(arr[i]<=day){
                count++;
            }
            else{
                nOfB+=(count/k);
                count = 0;
            }
        }
        nOfB+=(count/k);
        if(nOfB>=m) return true;
        else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long val = long (m*k);
        if(val>n) return -1;
         int mini = INT_MAX;
         int maxi = INT_MIN;
         for(int i =0; i<n ; i++){
            mini = min(mini,bloomDay[i]);
            maxi = max(maxi,bloomDay[i]);
         }
         int low  = mini;
         int high = maxi;
         int ans = high;
         while(high>=low){
            int mid = (low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
         }
         return ans;
        
    }
};