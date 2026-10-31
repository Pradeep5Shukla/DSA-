class Solution {
public:
    int missingNumber(vector<int>& arr) {
    //     sort(arr.begin(),arr.end());
    //     for(int i = 0 ;i< arr.size() ; i++){
    //         if(arr[i] != (i)) return i;
    //     }
    //     return arr.size();
    // }    

       int n = arr.size();
       int actualSum = (n*(n+1))/2;
       int sum = 0;
       for(int i = 0 ; i< n ; i++){
        sum+= arr[i];
       }
       return actualSum-sum;
    }   
};