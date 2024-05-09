class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int leftMax = height[i];
        int rightMax = height[j];
        int result = 0;
        while (i < j) {
            if (leftMax <= rightMax) {
                i++;
                leftMax = max(leftMax, height[i]);
                result += leftMax - height[i];
            }
            else {
                j--;
                rightMax = max(rightMax, height[j]);
                result += rightMax - height[j];
            }
        }
        return result;
    }
};