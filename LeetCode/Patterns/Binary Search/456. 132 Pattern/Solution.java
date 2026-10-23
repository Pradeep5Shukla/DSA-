class Solution {
    public boolean find132pattern(int[] nums) {
        int n=nums.length;
          Stack<Integer> stack = new Stack<>();
           int x = Integer.MIN_VALUE;

        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] < x) {
                return true;
            }

            while (!stack.isEmpty() && stack.peek() < nums[i]) {
                x = stack.pop();
            }

            x.push(nums[i]);
        }
        return false;
    }
}