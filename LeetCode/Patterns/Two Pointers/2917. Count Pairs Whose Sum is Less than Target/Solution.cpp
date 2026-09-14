class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;
        for(int i  = 0 ; i <n ; i++){
            for(int j = i+1 ; j<n ; j++){
                if(nums[i]+nums[j] < target) count++;
            }
        }
        return count;

        // sort(nums.begin(), nums.end());
        // int left = 0, right = nums.size() - 1;
        // int count = 0;
        
        // while (left < right) {
        //     if (nums[left] + nums[right] < target) {
        //         count+=(right-left);
        //         left++;
        //     } else {
        //         right--;
        //     }
        // }
        // return count;
    }
};