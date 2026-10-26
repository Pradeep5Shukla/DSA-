class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        while(r>l){
            if(r>l && (nums[l]%2 != 0 &&nums[r]%2 == 0)){
                swap(nums[l],nums[r]);
                l++;
                r--;
            }
            if(r>l && nums[l]%2==0){
                l++;
            }
        }
        return nums;
    }
};
