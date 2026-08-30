class Solution {
public:
    int mySqrt(int x) {
        int lo = 0;
        int hi = x;
        while(lo<=hi){
            long long  mid = lo + (hi-lo)/2;
            long long m = mid * mid ;
            if(m == x) return mid;
            else if(m>x) hi = mid -1;
            else lo = mid + 1;
        }
        return hi;
        
    }
};