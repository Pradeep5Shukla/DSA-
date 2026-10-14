class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s = "";
        if(sum>9*num) return s;
        if(sum<=9){
            int ans = sum*pow(10,num-1);

            return to_string(ans);
        }
        for(int i =0 ;i<num;i++){
            if(sum>=9){
                sum-=9;
                s+="9";
            }
            else{
                s+=to_string(sum);
                sum-=sum;
            }
        }
        return s;

        
    }
};