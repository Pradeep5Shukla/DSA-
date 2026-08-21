class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int left = 0;
        int right = m;
        while(right>=left){
            int mid = left+(right-left)/2;
            int ans = pow(mid,n);
            if(ans==m) return mid;
            else if (ans > m) right =mid-1;
            else left =mid+1;
        }
        return -1;
    }
};