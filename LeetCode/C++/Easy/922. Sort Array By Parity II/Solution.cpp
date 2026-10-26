class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r =n-1;
        // vector<int> ans = nums;
        while(r>l){
            
            while(l<n &&(nums[l]%2==0 && l%2 == 0  || nums[l]%2 != 0 && l%2!=0)) l++;
            while(r>=0 && (nums[r]%2==0 && r%2 == 0  || nums[r]%2 != 0 && r%2!=0)) r--;

            
            if(r>=0 && l<n) swap(nums[l],nums[r]);

            
        }
        return nums;
        
    }
};