class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int closestsum = nums[0]+nums[1]+nums[2];
        for (int i = 0;i<n;i++){
            int l = i+1;
            int r = n-1;
            while(r>l){
                int currsum = nums[i]+nums[l]+nums[r];
                if(abs(currsum-target)<abs(closestsum-target)){
                    closestsum=currsum;
                }
                if(currsum>target)  r--;
                else l++;
            }
        }
        return closestsum;
        
    }
};