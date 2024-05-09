class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int product = 0;
        int result = 0;
        while (i < j) {
            product = (j - i) * min(height[i], height[j]);
            result = max(product, result);
            if (height[i] < height[j]) {
                i++;
            }
            else {
                j--;
            }
        }
        return result;
    }
};