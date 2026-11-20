class Solution {
public:


    int reversenum(int n){
        int r =0;
        while(n>0){
            r*=10;
            r+=(n%10);
            n/=10;
        }
        return r;

    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        for(int i =0;i<n;i++){
            s.insert(nums[i]);
            s.insert(reversenum(nums[i]));
        }
        return s.size();

    }
};