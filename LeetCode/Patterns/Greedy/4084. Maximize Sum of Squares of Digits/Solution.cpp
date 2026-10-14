class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s = "";
        if(sum>9*num) return s;
        if(sum<=9){
            s+=to_string(sum);
            while(num-1>0){
                s+='0';
                num--;
            }

            return s;
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