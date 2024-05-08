class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> ans = new ArrayList<>();
        HashSet<List<Integer>> set = new HashSet<>();
        for (int i = 0; i < nums.length- 2; i++) {
            int j = i + 1;
            int k = nums.length - 1;
            while (j < k) {
                int neg = -nums[i];
                if (nums[j] + nums[k] > neg) {
                    k--;
                }
                else if (nums[j] + nums[k] < neg) {
                    j++;
                }
                else {
                    List<Integer> list = new ArrayList<>(Arrays.asList(nums[i], nums[j], nums[k]));
                    set.add(list);
                    j++;
                    k--;
                }
            }
        }
        ans.addAll(set);
        return ans;
    }
}