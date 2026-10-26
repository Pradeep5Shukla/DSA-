class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int i = 0;
        for(int j = 1;j< nums.size();j++){
            
            if(nums[i]==nums[j]){
                count++;
            }
            else{
                count = 0;
            }
            if(count<=1){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};