class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
  int prevSum = 0;
  int maxSum = INT_MIN;
  for (int i = 0; i < k;i++){
    prevSum += nums[i];
  }
  maxSum = prevSum;
  int i = 1;
  int j = k;
  while(j<nums.size()){
    int currSum = prevSum + nums[j] - nums[i - 1];
    if(maxSum<currSum){
      maxSum = currSum;
    }
    prevSum = currSum;
    i++;
    j++;
  }
  double maxavg = (double)maxSum/k;
  return maxavg;
    }
};