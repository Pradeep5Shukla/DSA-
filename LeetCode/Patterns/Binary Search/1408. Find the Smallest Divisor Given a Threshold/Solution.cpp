class Solution {
public:

    int sumbyD(vector <int>& arr , int div){
        int sum = 0;
        int n = arr.size();
        for(int i  = 0; i<n ; i++){
            sum+=ceil((double)arr[i]/(double)div);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1 ;
        // int ans = -1; 
        int high = *max_element(nums.begin(),nums.end());
        while(high>=low){
            int mid = low+(high-low);
            if(sumbyD(nums,mid) <= threshold){
                // ans = mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};