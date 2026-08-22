class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        for (int j = n - 1; j > 0; j--) {
            if (nums[j - 1] < nums[j]) {
                idx = j - 1;
                break;
            }
        }
        if (idx != -1) {
            int swap_idx = idx;
            for (int i = n - 1; i >= idx + 1; i--) {
                if (nums[i] > nums[idx]) {
                    swap_idx = i;
                    break;
                }
            }
            swap(nums[idx], nums[swap_idx]);
        }
        reverse(nums.begin() + idx + 1, nums.end());
    }
};