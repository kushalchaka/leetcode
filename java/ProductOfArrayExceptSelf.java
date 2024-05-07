class Solution {
    public int[] productExceptSelf(int[] nums) {
        int [] result = new int[nums.length];
        Arrays.fill(result, 1);
        int num1 = 1, num2 = 1;

        for (int i = 0, j = nums.length - 1; i < nums.length; i++, j--) {
            result[i] = result[i] * num1;
            num1 = num1 * nums[i];
            result[j] = result[j] * num2;
            num2 = num2 * nums[j];
        }

        return result;
    }
}
