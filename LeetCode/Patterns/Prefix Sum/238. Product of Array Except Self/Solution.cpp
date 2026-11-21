class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //1   1   2  6
        //24  12  4  1
        int n= nums.size();
        vector<int> ans(n);
        vector<int> mul(n);
        for(int i = 0;i<n;i++){
            if(i==0) mul[i]=1;
            else{
                mul[i]=mul[i-1]*nums[i-1];
            }
        }
        for(int i =n-1;i>=0;i--){
            if(i==n-1) ans[i]=1;
            else{
                ans[i]=nums[i+1]*ans[i+1];
            }
        }
        for(int i = 0;i<n;i++){
            ans[i]*=mul[i];
        }
       return ans;

    }
};