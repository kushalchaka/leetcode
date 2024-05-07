class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap <Integer, Integer> map = new HashMap<>();
        for(int i:nums){
            map.put(i, map.getOrDefault(i, 0)+1);
        }

        int[] ans = new int[k];

        for(int i = 0; i < k; i++){
            int max = 0;
            int n = 0;
            for(int y: map.keySet()){ 
                if(map.get(y)>max){
                    max=map.get(y);
                    n = y;
                }
            }
            ans[i] = n;
            map.remove(n);
        }
        return ans;
    }
}