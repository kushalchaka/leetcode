class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap <Integer, Integer> result = new HashMap <Integer, Integer>();
        int temp = 0;
        for (int i = 0; i < nums.length; i++) {
            if (result.get(nums[i]) == null) {
                result.put(nums[i], temp);
            }
            else
            {
                return true;
            } 
            
        }
        return false;
    }
    
}