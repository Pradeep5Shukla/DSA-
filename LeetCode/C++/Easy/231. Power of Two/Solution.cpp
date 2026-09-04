class Solution {
public:
    bool isPowerOfTwo(int n) {
        int left = 0;
        int right=n;
        while(right>=left){
            int mid = left + (right-left)/2;
            if(pow(2,mid) == n) return true;
            else if(pow(2,mid) > n) right = mid-1;
            else left = mid+1;  
        }
        return false;
    }
};