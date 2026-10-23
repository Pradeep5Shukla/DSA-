class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for( int i = 0 ;i<n ;i++){
            // ans.push_back(nums[i])
            for(int j=i+1 ;j<n ;j++){
                if(nums[i]<nums[j]){
                    for(int k=j+1;k<n;k++){
                        if(nums[k]>nums[i] && nums[k]<nums[j]){
                            return true;
                        }
                    }
                }

            }     
                
        }
        return false;
    }
};