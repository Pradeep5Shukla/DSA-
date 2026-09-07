class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // if(k<=1){
        //     return 0;
        // }
        // int count = 0;
        // int n = nums.size();
        // for(int left = 0; left<n ; left++){
        //     int product = 1 ;
        //     for( int right = left;right>=0 ; right--){
        //         product = product * nums[right];
        //         if(product <k){
        //             count++;
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }
        // return count;

        
        
        
        if(k<=1){
            return 0;
        }
        int n = nums.size();
        int right = 0;
        int left = 0;
        int ans = 0;
        int product = 1;
        while (right < n) {
            product *= nums[right];
            while (product >= k) {
                product /= nums[left];
                left++;
            }
            ans += right - left + 1;
            right++;
        }
        return ans;
    }
};